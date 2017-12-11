
#include <dos.h>
#include <stdio.h>
#include <process.h>

#ifdef __cplusplus
    #define __CPPARGS ...
#else
    #define __CPPARGS
#endif

typedef void interrupt (*fptr)(__CPPARGS);

static void mesg(char *s)
{
  while (*s)
    bdos(2,*s++,0);
}

#pragma argsused
void interrupt handler2(unsigned bp, unsigned di)
{
  _enable();
  mesg("In handler 2.\r\n");
  if (di == 1)
    mesg("DI is 1\r\n");
  else
    mesg("DI is not 1\r\n");
  di++;
}

#pragma argsused
void interrupt handler1(unsigned bp, unsigned di)
{
  _enable();
  mesg("In handler 1.\r\n");
  if (di == 0)
    mesg("DI is 0\r\n");
  else
    mesg("DI is not 0\r\n");
  di++;
  mesg("Chaining to handler 2.\r\n");
  _chain_intr((fptr) handler2);
}

int main()
{
  _dos_setvect(128,(fptr) handler1);
  printf("About to generate interrupt 128\n");
  _DI = 0;
  geninterrupt(128);
  printf("DI was 0 before interrupt, is now 0x%x\n",_DI);
  return 0;
}

