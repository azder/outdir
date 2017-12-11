
#include <stdio.h>
#include <process.h>

int main(int argc, char *argv[])
{
  int loop;

  printf("%s running...\n\n", argv[0]);

  if (argc == 1) {    /* check for only one command-line parameter */
    printf("%s calling itself again...\n", argv[0]);
    execl(argv[0], argv[0], "ONE", "TWO", "THREE", NULL);
    perror("EXEC:");
    exit(1);
  }

  printf("%s called with arguments:\n", argv[0]);

  for (loop = 1; loop <= argc; loop++)
    puts(argv[loop]);       /* Display all command-line parameters */
  return 0;
}

