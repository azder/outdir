#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <fstream.h>
#define space cout << "\n ";
#define tab cout << "\n        ";
#define ctab cprintf("        ");
#define mesto cout << " ";
#define tabul cout << "        ";
ofstream file;
struct Inventar{
int kafe;
int fanta;
int pepsi;
int vodka;
}inventar;
 void Inventory();
 void Disp_Inven();
 void Popravka();
 void P_Inv();
 void P_Por();
 void Kafe();
 void Fanta();
 void Pepsi();
 void Vodka();
 void Naracka();
 void Disp_Menu()
 { int i, ans;
   textbackground (1);
   clrscr();
   textcolor(3);
 for (i=0; i<236; i++)
  cprintf ("�") ;
 for (i=0; i<16; i++)
 cprintf ("�");
  cprintf ("***Sleduva izbor od meni***");
   for (i=0; i<41; i++)
 cprintf ("�");
  textbackground(0);
 cprintf("�");
 for (i=0; i< 43; i++)
  cprintf("�");
 cprintf("�\n");
 cprintf("\r�1. �o�e��a�je �a e�eme���e �a ���e��apo� � \n");
 cprintf("\r�2. �o�e��a�je �a ���p�e�a �apa�a         � \n");
 cprintf("\r�3. ���p��a�je �a �o�pa��a                 � \n");
 cprintf("\r�4. �p��a��a�je �a  ���e��apo�             � \n");
 cprintf("\r�5. ���e� o� �po�pa�a�a                     � \n");
 cprintf( "\r�");
 for (i=0; i< 43; i++)
  cprintf( "�");
 cprintf("� ");
 space;
 textbackground(0);
 for (i=0; i< 45; i++)
  cprintf(" ");
  tab;tab; cprintf(" :");
 cin>> ans;

   switch (ans)
 {
   case (1): Inventory(); break;
   case (2): Naracka(); break;
   case (3): Popravka(); break;
   case (4): Disp_Inven(); break;
   case (5): cout<< "\n\n\n\n\n\n";tab;cprintf ("***�� ��a�o�apa� �a �op���e�je�o �a �oja�a �po�pa�a***"); delay(900);exit (0); break;
 }}
 void Inventory()
 {

  Kafe();
  Fanta();
  Pepsi();
  Vodka();
 }
 void Kafe()
 { int i;
   cprintf ("\n\n");
   tab;
   cprintf ("�");
 for (i=0; i< 44; i++)
  cprintf ("�");
 cprintf ("�");
 tab;
 cprintf ("� �o�e�e�e �pe��o�� �a �o��oj�a�a �a �a�e�o: � ");
 tab;
 cprintf ("�");
 for (i=0; i< 44; i++)
  cprintf ("�");
  cprintf("� ");
  tab; mesto;
  textbackground(0);
 for (i=0; i< 46; i++)
  cprintf(" ");
  cprintf("\r"); tab;tab; cprintf(" :");
 cin >> inventar.kafe;
 file << "1. Kafe:" << inventar.kafe;
 }
 void Fanta()
{int i;
 textbackground(1);
 clrscr();
 cprintf ("\n\n");
  textbackground(0);
   tab;
   cprintf ("�");
 for (i=0; i< 45; i++)
  cprintf ("�");
 cprintf ("�");
 tab; cprintf("� �o�e�e�e �pe��o�� �a �o��oj�a�a �a �a��a�a: � ");
 tab; cprintf ("�");
 for (i=0; i< 45; i++)
  cprintf ("�");
  cprintf ("� ");
 tab; mesto;
 for (i=0; i< 47; i++)
  cprintf (" ");
  tab;tab;tab; cprintf(" :");
 cin >> inventar.fanta;
 file << "\n2. Fanta: " << inventar.fanta;
 }
 void Pepsi()
 { int i;
  textbackground(1);
  clrscr();
  textbackground(0);
  cprintf ("\n\n\n\n");
  tab; cprintf ("�");
 for (i=0; i< 45; i++)
  cprintf ("�");
 cprintf ("�");
 tab; cprintf("� �o�e�e�e �pe��o�� �a �o��oj�a�a �a �e���o: � ");
 tab; cprintf ("�");
 for (i=0; i< 45; i++)
  cprintf ("�");
  cprintf("� ");
  tab; mesto;
 for (i=0; i< 47; i++)
  cprintf(" ");
   cout << "\n\n\n   ";cprintf(" :");
  cin >> inventar.pepsi;
  file << "\n3. Pepsi: "<< inventar.pepsi;
  }
 void Vodka ()
{int i;
 textbackground(1);
 clrscr();
 textbackground(0);
 cprintf ("\n\n\n\n\n\n");
 tab; tabul;
   cprintf ("�");
 for (i=0; i< 45; i++)
  cprintf ("�");
 cprintf ("�");
 tab; tabul; cprintf("� �o�e�e�e �pe��o�� �a �o��oj�a�a �a �o��a�a: � ");
 tab; tabul; cprintf ("�");
 for (i=0; i< 45; i++)
  cprintf ("�");
  cprintf("� ");
  tab; tabul; mesto;
  for (i=0; i< 47; i++)
   cprintf(" ");
   cout << "\n\n   ";cprintf (" :");
    cin >> inventar.vodka;
    file << "\n4. Vodka: " << inventar.vodka;
   clrscr();
 }
void Naracka()
{int i,c , naracka, poracki, masa;
 char ans;
  textbackground(1);
 clrscr();
 textbackground(GREEN);
 textcolor(4);
      cprintf ("\n\n\n");
   cprintf ("�");
 for (i=0; i< 23; i++)
   cprintf ("�");
   cprintf ("�\n");
   cprintf("\r� Ko��� �opa窨 ��a��e? �");textbackground(0);cprintf(" \n");
   textbackground(GREEN);cprintf ("\r�");
 for (i=0; i< 23; i++)
   cprintf ("�");
   cprintf("�");textbackground(0); cprintf(" \n\r"); mesto;
 for (i=0; i< 25; i++)
   cprintf(" ");
   textbackground(0);
   tab; tab; cprintf(" :");
 cin >> poracki;
  if (poracki == 0)
   Disp_Menu();
 file << "\n Poracka ";
 tab; cprintf ("�");
for (i=0; i< 16; i++)
   cprintf ("�");
   cprintf ("�");
   tab; cprintf("� �a �oja �a�a ? � ");
   tab; cprintf ("�");
 for (i=0; i< 16; i++)
   cprintf ("�");
   cprintf("� ");
   tab; mesto;
 for (i=0; i< 18; i++)
   cprintf(" ");
   cout << "\n   ";cprintf(" :");
   cin>>masa;
   file << "na masa: " << masa;
 for (c=0; c<poracki; c++)
   { textbackground(1);
     clrscr();
     textbackground(0);
     cprintf ("\n\n\n");
     tab;cprintf ("�");
 for (i=0; i< 39; i++)
  cprintf ("�");
     cprintf ("�");
     tab; cprintf("� Ka��a �e�e �opa�a�a � ");cout << poracki;cprintf(", �a �a�a �");cout <<masa;cprintf("? � ");
     tab; cprintf ("�");
 for (i=0; i< 39; i++)
     cprintf ("�");
     cprintf("� \r");
     tab; mesto;
 for (i=0; i< 41; i++)
     cprintf (" ");
     cprintf ("\n\n");
     cprintf ("\r�");
 for (i=0; i< 38; i++)
  cprintf ("�");
     cprintf ("�\n");
     cprintf("\r� �a�a�e �� �a �o �����e ���opo�?(Y/N) � \n");
     cprintf ("\r�");
 for (i=0; i< 38; i++)
  cprintf ("�");
     cprintf("� \r\n");
     cout << " ";
  for (i=0; i< 40; i++)
     cprintf(" ");
     cout << "\n";
     ans = getch ();
   if (toupper(ans)=='Y')
    { tab; tabul;cprintf("����������������������Ŀ");
      tab; tabul;cprintf("�1.    Ka�e (izbor 1)  �");
      tab; tabul;cprintf("�2.    �e�� (izbor2)  � ");
      tab; tabul;cprintf("�3.    �a��a (izbor 3) � ");
      tab; tabul;cprintf("�4.    �o��a (izbor 4) � ");
      tab; tabul;cprintf("������������������������ \n\r");tabul; tabul;
      textbackground(1);
      cprintf(" ");
      textbackground(0);
      cprintf("                        \n\n :");}
    else
     cprintf ("\n :");
    naracka = getch();
    switch (naracka)
  {
    case (49):  inventar.kafe-=1; break;
    case (50):  inventar.pepsi-=1; break;
    case (51):  inventar.fanta-=1; break;
    case (52):  inventar.vodka-=1; break;
  }
}}
 void Disp_Inven()
{ char ans;
    cprintf ("\n ***Mo�e��a��a�a �o��oj�a �a ���e��apo� e:*** ");
    cprintf ("\r\nKa�e : ___________________________________ "); cout  << inventar.kafe;
    cprintf ("\r\n�a��a: ___________________________________ "); cout  << inventar.fanta;
    cprintf ("\r\n�e��: ___________________________________ "); cout << inventar.pepsi;
    cprintf ("\r\n�o��a: ___________________________________ ");cout  << inventar.vodka;
    tab;
  tab;cprintf ("*******************************************************************");
  tab;cprintf ("***�a�a�e �� �a �po�o����e �o �op���e�je�o �a �po�pa�a�a?(ANY/N)***");
  tab;cprintf ("*******************************************************************");
   cout << "\n"; cprintf(" :");   ans = getch();
   if (toupper(ans)=='N')
   {
      textcolor(4);
   tab;cprintf("\n###�� ��a�o�apa� �a �op���e�je�o �a �oja�a �po�pa�a###");
   delay(800);
     exit(0);}
     else
      Disp_Menu();
    }
void main()
{ file.open("Kafic.txt", ios::out);
  int i;
  char ans;
  Disp_Menu();
  textbackground(1);
  textcolor (3);
  delay(100);
  clrscr();
  textbackground(0);
  ans = 'y';
   while (toupper(ans) == 'Y' || ans == ' ')
     Disp_Menu();
   }
  void Popravka()
{ textbackground(1);
clrscr();
textbackground(0);
int  i, ans;
 tab;cprintf("����������������������Ŀ");
 tab;cprintf("�   ��o �e �e��a�e?   � ");
 tab;cprintf("������������������������ ");
 tab; mesto; for (i=0; i<24; i++)
 cprintf(" ");
 tab; tab;cprintf("����������������������Ŀ");
 tab;cprintf ("� 1.  ���e��ap;        � ");
 tab;cprintf ("� 2.  ���p�e�a �opa�a;� ");
 tab;cprintf("������������������������ ");
tab; mesto; for (i=0; i<24; i++)
 cprintf(" ");
   ans = getch();
   switch (ans)
 { case(49): P_Inv();break;
   case(50): P_Por();break;
   }
 }
 void P_Inv()
 {textbackground(1);
 clrscr();
 textbackground(0);
 char ans;
 int promena, i;
     cprintf ("\n");
     tab; cprintf ("�");
 for (i=0; i< 38; i++)
     cprintf ("�");
     cprintf ("�");
     tab; cprintf("� �a�a�e �� �a �o �����e ���opo�?(Y/N) � ");
     tab; cprintf ("�");
 for (i=0; i< 38; i++)
  cprintf ("�");
     cprintf("� ");
     tab; mesto; for (i=0; i< 40; i++)
     cprintf(" ");
     tab;tab; cprintf(" :");
      ans = getch();
   if (toupper(ans)=='Y')
    {tab; tabul;cprintf("����������������������Ŀ");
      tab; tabul;cprintf("�1.    Ka�e (izbor 1)  �");
      tab; tabul;cprintf("�2.    �e�� (izbor2)  � ");
      tab; tabul;cprintf("�3.    �a��a (izbor 3) � ");
      tab; tabul;cprintf("�4.    �o��a (izbor 4) � ");
      tab; tabul;cprintf("�5.    ���� e��o       � ");
      tab; tabul;cprintf("������������������������ ");tab; tabul;
      mesto; for (i=0; i<24; i++)
      cprintf(" ");
      tab;tab;cprintf(" :");}
   else
     cprintf ("\n\n :");
    promena=getch();
     switch (promena)
   { case (49): Kafe(); break;
     case (50): Pepsi(); break;
     case (51): Fanta(); break;
     case (52): Vodka(); break;
     }
  }
    void P_Por()
 { textbackground(1);
   clrscr();
   textbackground(0);
   int i, poracka;
   tab; tab;tab;tab;tab;
   for (i=0; i<42; i++)
    cprintf("�");
   tab; cprintf ("�***Koja �opa�a �a�a�e �a ja �e���e?***� ");
   tab; for (i=0; i<42; i++)
    cprintf("�");cprintf(" ");
    tab; mesto;
    for (i=0; i<42; i++)
    cprintf(" ");
  cin >> poracka;
   Naracka();
   }