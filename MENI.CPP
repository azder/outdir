#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#define mesto cout<<" ";
#define tab cout<<"       ";
#define poz textbackground(0);
#define poz5 textbackground(5);
void Meni();
void File();
void Edit();
void Izbor();
void Help();
void main()
{
 Izbor();
 }
void Meni()
{ int i;
 textbackground(1);
 clrscr();
 textbackground(2);
 textcolor(0);
 cprintf("   File   Edit   Help  ");
 for (i=0; i<57; i++)
 cprintf (" ");
 }
 void File()
 {int i, c;
 Meni();
  textbackground(5);
  mesto; cprintf("Ú");
  for (i=0; i<10; i++)
  cprintf("Ä");
  cprintf("¿\n\r");
  mesto; cprintf("³ Open     ³"); poz;cprintf(" \n\r");
  poz5;mesto; cprintf("³ Save     ³"); poz;cprintf(" \n\r");
  poz5;mesto; cprintf("ÃÄÄÄÄÄÄÄÄÄÄ´"); poz;cprintf(" \n\r");
  poz5;mesto; cprintf("³ Exit     ³"); poz;cprintf(" \n\r");
  poz5;mesto; cprintf("À");
   for (i=0; i<10; i++)
  cprintf("Ä");
  cprintf("Ù");poz;cprintf(" \n\r");
  mesto;mesto; for(i=0;i<12; i++)
  cprintf(" ");
  c= getch();
 if (c==24)
  exit(0);
 else
  if(c==27)
   Meni();
  else
   Izbor();
}
 void Edit()
{
 int i;
 Meni();
  textbackground(5);
  mesto;tab; cprintf("Ú");
  for (i=0; i<10; i++)
  cprintf("Ä");
  cprintf("¿\n\r");
  mesto;tab; cprintf("³ Cut      ³"); poz;cprintf(" \n\r");
  poz5;mesto;tab; cprintf("³ Copy     ³"); poz;cprintf(" \n\r");
  poz5;mesto;tab; cprintf("ÃÄÄÄÄÄÄÄÄÄÄ´"); poz;cprintf(" \n\r");
  poz5;mesto;tab; cprintf("³ Paste    ³"); poz;cprintf(" \n\r");
  poz5;mesto;tab; cprintf("À");
   for (i=0; i<10; i++)
   cprintf("Ä");
   cprintf("Ù");poz;cprintf(" \n\r");
   mesto;mesto;tab; for(i=0;i<12; i++)
   cprintf(" ");

 }
 void Help()
{ int i;
Meni();
 textbackground(5);
  mesto;tab;tab; cprintf("Ú");
  for (i=0; i<11; i++)
  cprintf("Ä");
  cprintf("¿\n\r");
  mesto;tab;tab; cprintf("³ Copyright ³"); poz;cprintf(" \n\r");
  poz5;mesto;tab;tab cprintf("À");
   for (i=0; i<11; i++)
  cprintf("Ä");
  cprintf("Ù");poz;cprintf(" \n\r");
  mesto;mesto;tab;tab; for(i=0;i<13; i++)
   cprintf(" ");
   }
 void Izbor()
 {
 Meni();
 int p;int i;
 p=getch();
while(p != 48)
{ switch( p)
 {case(6): File(); break;
  case(5): Edit();break;
  case(8): Help();break;
 }
 p=getch();
}
}