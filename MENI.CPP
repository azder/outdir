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
  mesto; cprintf("�");
  for (i=0; i<10; i++)
  cprintf("�");
  cprintf("�\n\r");
  mesto; cprintf("� Open     �"); poz;cprintf(" \n\r");
  poz5;mesto; cprintf("� Save     �"); poz;cprintf(" \n\r");
  poz5;mesto; cprintf("����������Ĵ"); poz;cprintf(" \n\r");
  poz5;mesto; cprintf("� Exit     �"); poz;cprintf(" \n\r");
  poz5;mesto; cprintf("�");
   for (i=0; i<10; i++)
  cprintf("�");
  cprintf("�");poz;cprintf(" \n\r");
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
  mesto;tab; cprintf("�");
  for (i=0; i<10; i++)
  cprintf("�");
  cprintf("�\n\r");
  mesto;tab; cprintf("� Cut      �"); poz;cprintf(" \n\r");
  poz5;mesto;tab; cprintf("� Copy     �"); poz;cprintf(" \n\r");
  poz5;mesto;tab; cprintf("����������Ĵ"); poz;cprintf(" \n\r");
  poz5;mesto;tab; cprintf("� Paste    �"); poz;cprintf(" \n\r");
  poz5;mesto;tab; cprintf("�");
   for (i=0; i<10; i++)
   cprintf("�");
   cprintf("�");poz;cprintf(" \n\r");
   mesto;mesto;tab; for(i=0;i<12; i++)
   cprintf(" ");

 }
 void Help()
{ int i;
Meni();
 textbackground(5);
  mesto;tab;tab; cprintf("�");
  for (i=0; i<11; i++)
  cprintf("�");
  cprintf("�\n\r");
  mesto;tab;tab; cprintf("� Copyright �"); poz;cprintf(" \n\r");
  poz5;mesto;tab;tab cprintf("�");
   for (i=0; i<11; i++)
  cprintf("�");
  cprintf("�");poz;cprintf(" \n\r");
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