#include <conio.h>
#include <dos.h>
#include <iostream.h>
#define mesto cout <<" ";
#define tab cout << "\n        ";
#define tabul cout << "        ";
void main()
{
 textbackground(1);
 clrscr();
 textbackground(GREEN);
 textcolor(8);
 int i; char p;
 for (i=0; i<8; i++)
  tab;
  tabul; cprintf("Ú");
 for (i=0; i<6; i++)
  cprintf ("Ä");
  cprintf("¿");
  tab; tabul;
  cprintf("³");textcolor(6); cprintf("  Ok  ");textcolor(8);
  cprintf("³"); textbackground(0); cprintf(" ");textbackground(GREEN);
  tab; tabul; cprintf("À");
  for (i=0; i<6; i++)
  cprintf ("Ä");
  cprintf ("Ù"); textbackground(0); cprintf(" ");
  tab; tabul; mesto; for (i=0; i<8; i++)
		      cprintf (" ");
 p = getche();

 textbackground(1);
 clrscr();
 textbackground(GREEN);
 for (i=0; i<8; i++)
  tab;
  tabul;mesto; cprintf("Ú");
 for (i=0; i<6; i++)
  cprintf ("Ä");
  cprintf("¿");
  tab; tabul; mesto;
  cprintf("³");textcolor(6); cprintf("  Ok  ");textcolor(8);
  cprintf("³");
  tab; tabul; mesto; cprintf("À");
  for (i=0; i<6; i++)
  cprintf ("Ä");
  cprintf ("Ù");
   delay(75);
    textbackground(1);
 clrscr();
 textbackground(GREEN);
 textcolor(8);
 for (i=0; i<8; i++)
  tab;
  tabul; cprintf("Ú");
 for (i=0; i<6; i++)
  cprintf ("Ä");
  cprintf("¿");
  tab; tabul;
  cprintf("³");textcolor(6); cprintf("  Ok  ");textcolor(8);
  cprintf("³"); textbackground(0); cprintf(" ");textbackground(GREEN);
  tab; tabul; cprintf("À");
  for (i=0; i<6; i++)
  cprintf ("Ä");
  cprintf ("Ù"); textbackground(0); cprintf(" ");
  tab; tabul; mesto; for (i=0; i<8; i++)
		      cprintf (" ");
 delay(100);
}