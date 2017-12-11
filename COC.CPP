#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
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
 void ok();
 void Naracka();
 void Disp_Menu()
 { int i, ans;
   textbackground (1);
   clrscr();
   textcolor(3);
 for (i=0; i<236; i++)
  cprintf ("²") ;
 for (i=0; i<16; i++)
 cprintf ("²");
  cprintf ("***‘«e¤ã¢a ¨§¡op o¤ ¬e­¨***");
     for (i=0; i<41; i++)
 cprintf ("²");
  textbackground(0);
  textcolor(2);
 cprintf("É");
 for (i=0; i< 43; i++)
  cprintf("Í");
 cprintf("»"); cprintf("²");for (i=1; i<35; i++)cprintf("²");
 cprintf("\rº1. ‚o¢e¤ã¢a­je ­a e«eme­â¨âe ­a ¨­¢e­âapoâ º ");for (i=1; i<35; i++)cprintf("²");
 cprintf("\rº2. ‚o¢e¤ã¢a­je ­a ¨§¢pèe­a ­apaçªa         º ");for (i=1; i<35; i++)cprintf("²");
 cprintf("\rº3. ˆ§¢pèã¢a­je ­a ¯o¯pa¢ªa                 º ");for (i=1; i<35; i++)cprintf("²");
 cprintf("\rº4. p¨ªa¦ã¢a­je ­a  ¨­¢e­âapoâ             º ");for (i=1; i<35; i++)cprintf("²");
 cprintf("\rº5. ˆ§«e§ o¤ ¯po£pa¬aâa                     º ");for (i=1; i<35; i++)cprintf("²");
 cprintf( "\rÈ");
for (i=0; i< 43; i++)
  cprintf( "Í");
 cprintf("¼ ");for (i=1; i<36; i++)cprintf("²");
 textbackground(0);
 for (i=0; i< 45; i++)
  cprintf(" ");for (i=1; i<34; i++)cprintf("²");
  for (i=0; i<81; i++)
 cprintf ("²");
  tab; cprintf(" :");
 cin>> ans;

   switch (ans)
 {
   case (1): Inventory(); break;
   case (2): Naracka(); break;
   case (3): Popravka(); break;
   case (4): Disp_Inven(); break;
   case (5): cout<< "\n\n\n\n\n\n";tab;cprintf ("***‚¨ ¡«a£o¤apa¬ §a ªop¨áâe­jeâo ­a ¬ojaâa ¯po£pa¬a***"); delay(900);exit (0); break;
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
   cprintf ("É");
 for (i=0; i< 44; i++)
  cprintf ("Í");
 cprintf ("»");
 tab;
 cprintf ("º ‚o¢e¤eâe ¢pe¤­oáâ §a áoáâoj¡aâa ­a ªaäeâo: º ");
 tab;
 cprintf ("È");
 for (i=0; i< 44; i++)
  cprintf ("Í");
  cprintf("¼ ");
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
   cprintf ("É");
 for (i=0; i< 45; i++)
  cprintf ("Í");
 cprintf ("»");
 tab; cprintf("º ‚o¢e¤eâe ¢pe¤­oáâ §a áoáâoj¡aâa ­a äa­âaâa: º ");
 tab; cprintf ("È");
 for (i=0; i< 45; i++)
  cprintf ("Í");
  cprintf ("¼ ");
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
  tab; cprintf ("É");
 for (i=0; i< 45; i++)
  cprintf ("Í");
 cprintf ("»");
 tab; cprintf("º ‚o¢e¤eâe ¢pe¤­oáâ §a áoáâoj¡aâa ­a ¯e¯á¨âo: º ");
 tab; cprintf ("È");
 for (i=0; i< 45; i++)
  cprintf ("Í");
  cprintf("¼ ");
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
   cprintf ("É");
 for (i=0; i< 45; i++)
  cprintf ("Í");
 cprintf ("»");
 tab; tabul; cprintf("º ‚o¢e¤eâe ¢pe¤­oáâ §a áoáâoj¡aâa ­a ¢o¤ªaâa: º ");
 tab; tabul; cprintf ("È");
 for (i=0; i< 45; i++)
  cprintf ("Í");
  cprintf("¼ ");
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
   cprintf ("É");
 for (i=0; i< 23; i++)
   cprintf ("Í");
   cprintf ("»\n");
   cprintf("\rº Ko«ªã ¯opaçª¨ ¨¬a¢âe? º");textbackground(0);cprintf(" \n");
   textbackground(GREEN);cprintf ("\rÈ");
 for (i=0; i< 23; i++)
   cprintf ("Í");
   cprintf("¼");textbackground(0); cprintf(" \n\r"); mesto;
 for (i=0; i< 25; i++)
   cprintf(" ");
   textbackground(0);
   tab; tab; cprintf(" :");
 cin >> poracki;
  if (poracki == 0)
   Disp_Menu();
 file << "\n Poracka ";
 tab; cprintf ("É");
for (i=0; i< 16; i++)
   cprintf ("Í");
   cprintf ("»");
   tab; cprintf("º a ªoja ¬aáa ? º ");
   tab; cprintf ("È");
 for (i=0; i< 16; i++)
   cprintf ("Í");
   cprintf("¼ ");
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
     tab;cprintf ("É");
 for (i=0; i< 39; i++)
  cprintf ("Í");
     cprintf ("»");
     tab; cprintf("º Kaª¢a ¡eèe ¯opaçªaâa ü ");cout << poracki;cprintf(", ­a ¬aáa ü");cout <<masa;cprintf("? º ");
     tab; cprintf ("È");
 for (i=0; i< 39; i++)
     cprintf ("Í");
     cprintf("¼ \r");
     tab; mesto;
 for (i=0; i< 41; i++)
     cprintf (" ");
     cprintf ("\n\n");
     cprintf ("\rÉ");
 for (i=0; i< 38; i++)
  cprintf ("Í");
     cprintf ("»\n");
     cprintf("\rº ‘aªaâe «¨ ¤a £o ¢¨¤¨âe ¨§¡opoâ?(Y/N) º \n");
     cprintf ("\rÈ");
 for (i=0; i< 38; i++)
  cprintf ("Í");
     cprintf("¼ \r\n");
     cout << " ";
  for (i=0; i< 40; i++)
     cprintf(" ");
     cout << "\n";
     ans = getch ();
     ans = toupper(ans);
   if (ans=='Y'|| ans == '*')
    { tab; tabul;cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
      tab; tabul;cprintf("³1.    Kaäe (izbor 1)  ³");
      tab; tabul;cprintf("³2.    e¯á¨ (izbor2)  ³ ");
      tab; tabul;cprintf("³3.    ”a­âa (izbor 3) ³ ");
      tab; tabul;cprintf("³4.    ‚o¤ªa (izbor 4) ³ ");
      tab; tabul;cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ \n\r");tabul; tabul;
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
  textbackground(0);
    cprintf ("\n ***Mo¬e­âa«­aâa áoáâoj¡a ­a ¨­¢e­âapoâ e:*** ");
    cprintf ("\r\nKaäe : ___________________________________ "); cprintf("%d", inventar.kafe);
    cprintf ("\r\n”a­âa: ___________________________________ "); cprintf("%d", inventar.fanta);
    cprintf ("\r\ne¯á¨: ___________________________________ "); cprintf("%d",inventar.pepsi);
    cprintf ("\r\n‚o¤ªa: ___________________________________ "); cprintf("%d", inventar.vodka);
    tab;
  tab;cprintf ("*******************************************************************");
  tab;cprintf ("***‘aªaâe «¨ ¤a ¯po¤o«¦¨âe áo ªop¨áâe­jeâo ­a ¯po£pa¬a¢a?(ANY/N)***");
  tab;cprintf ("*******************************************************************");
   cout << "\n"; cprintf(" :");   ans = getch();
   ans= toupper(ans);
   if (ans=='N'||ans =='/')
   {
      textcolor(4);
   tab;cprintf("\n###‚¨ ¡«a£o¤apa¬ §a ªop¨áâe­jeâo ­a ¬ojaâa ¯po£pa¬a###");
   delay(600);
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
 tab;cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
 tab;cprintf("³   ˜âo ªe ¬e­ã¢aâe?   ³ ");
 tab;cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ ");
 tab; mesto; for (i=0; i<24; i++)
 cprintf(" ");
 tab; tab;cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
 tab;cprintf ("³ 1.  ˆ­¢e­âap;        ³ ");
 tab;cprintf ("³ 2.  ˆ§¢pèe­a ¯opaçªa;³ ");
 tab;cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ ");
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
 char ans, odgovor;
 int promena, i;
     cprintf ("\n");
     tab; cprintf ("É");
 for (i=0; i< 38; i++)
     cprintf ("Í");
     cprintf ("»");
     tab; cprintf("º ‘aªaâe «¨ ¤a £o ¢¨¤¨âe ¨§¡opoâ?(Y/N) º ");
     tab; cprintf ("È");
 for (i=0; i< 38; i++)
  cprintf ("Í");
     cprintf("¼ ");
     tab; mesto; for (i=0; i< 40; i++)
     cprintf(" ");
     tab;tab; cprintf(" :");
      ans = getch();
      ans = toupper(ans);
   if (ans =='Y'|| ans == '*')
    {tab; tabul;cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
      tab; tabul;cprintf("³1.    Kaäe (izbor 1)  ³");
      tab; tabul;cprintf("³2.    e¯á¨ (izbor2)  ³ ");
      tab; tabul;cprintf("³3.    ”a­âa (izbor 3) ³ ");
      tab; tabul;cprintf("³4.    ‚o¤ªa (izbor 4) ³ ");
      tab; tabul;cprintf("³5.    ¨âã e¤­o       ³ ");
      tab; tabul;cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ ");tab; tabul;
      mesto; for (i=0; i<24; i++)
      cprintf(" ");
      tab;tab;cprintf(" :");}
   else
     cprintf ("\n\n :");
    promena=getch();
   if (promena == 53)
    Disp_Menu();
   else
    {tab; tabul;cprintf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
    tab; tabul;cprintf("³‘aªaâe «¨ ¤a ja ¢¨¤¨âe áoáâoj¡aâa?(Y/N)³");
    tab; tabul;cprintf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
    odgovor = getch();}
    if (odgovor=='Y'|| odgovor == '*')
  { textbackground(1);
    clrscr();
   switch (promena)
   { case (49): cout << "\nŒo¬e­âa«­aâa áoáâoj¡a ­a ªaäeâo e:" << inventar.kafe;ok();Kafe(); break;
     case (50): cout << "\nŒo¬e­âa«­aâa áoáâoj¡a ­a ¯e¯á¨âo e:"<< inventar.pepsi;ok();Pepsi(); break;
     case (51): cout << "\nŒo¬e­âa«­aâa áoáâoj¡a ­a äa­âaâa e:"<<inventar.fanta;ok();Fanta(); break;
     case (52): cout << "\nŒo¬e­âa«­aâa áoáâoj¡a ­a ¢o¤ªaâa e:"<<inventar.vodka;ok();Vodka(); break;
     };}
   else
      switch (promena)
   { case (49): Kafe(); break;
     case (50): Pepsi(); break;
     case (51): Fanta(); break;
     case (52): Vodka(); break;
  }}
    void P_Por()
 { textbackground(1);
   clrscr();
   textbackground(0);
   int i, poracka;
   tab; tab;tab;tab;tab;
   for (i=0; i<42; i++)
    cprintf("Ü");
   tab; cprintf ("Ý***Koja ¯opaçªa áaªaâe ¤a ja á¬e­¨âe?***Þ ");
   tab; for (i=0; i<42; i++)
    cprintf("ß");cprintf(" ");
    tab; mesto;
    for (i=0; i<42; i++)
    cprintf(" ");
  cin >> poracka;
   Naracka();
   }
void ok()
{ 
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
   delay(72);
    textbackground(1);
 clrscr();
 textbackground(BLUE);
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
 textbackground(0);
 textcolor(GREEN);
}