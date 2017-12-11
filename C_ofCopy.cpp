#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <fstream.h>
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

 for (i=0; i<236; i++)
  cprintf ("²") ;
 for (i=0; i<16; i++)
 cprintf ("²");
  cprintf ("***Sleduva izbor od meni***");
   for (i=0; i<41; i++)
 cprintf ("²");
  textbackground(0);
 cprintf("É");
 for (i=0; i< 43; i++)
  cprintf("Í");
 cprintf("»\n");
 cprintf("\rº1. Voveduvanje na elementite na inventarot º\n");
 cprintf("\rº2. Voveduvanje na izvrsena naracka         º\n");
 cprintf("\rº3. Izvrsuvanje na popravka                 º\n");
 cprintf("\rº4. Prikazuvanje na  inventarot             º\n");
 cprintf("\rº5. Izlez od programata                     º\n");
 cprintf( "\rÈ");
 for (i=0; i< 43; i++)
  cprintf( "Í");
 cprintf("¼\n\n   :");
 cin >> ans;

   switch (ans)
 {
   case (1): Inventory(); break;
   case (2): Naracka(); break;
   case (3): Popravka(); break;
   case (4): Disp_Inven(); break;
   case (5): cprintf ("\n\n\n\n\n\n\n\n\n***Vi blagodaram za koristenjeto na mojata programa***"); delay(900);exit (0); break;
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
   cprintf ("\n\n\n");
   cprintf ("É");
 for (i=0; i< 44; i++)
  cprintf ("Í");
 cprintf ("»\n");
 cprintf ("º Vovedete vrednost za sostojbata na kafeto: º\n");
 cprintf ("È");
 for (i=0; i< 44; i++)
  cprintf ("Í");
 cout <<"¼\n\n\n   :";
 cin >> inventar.kafe;
 file << "1. Kafe:" << inventar.kafe;
 }
 void Fanta()
{int i;
 clrscr();
 cprintf ("\n\n\n");
   cprintf ("É");
 for (i=0; i< 45; i++)
  cprintf ("Í");
 cprintf ("»\n");
 cout <<"º Vovedete vrednost za sostojbata na fantata: º\n";
 cprintf ("È");
 for (i=0; i< 45; i++)
  cprintf ("Í");
 cout <<"¼\n\n\n   :";
 cin >> inventar.fanta;
 file << "\n2. Fanta: " << inventar.fanta;
 }
 void Pepsi()
 { int i;
  clrscr();
 cprintf ("\n\n\n\n\n");
   cprintf ("É");
 for (i=0; i< 45; i++)
  cprintf ("Í");
 cprintf ("»\n");
 cout <<"º Vovedete vrednost za sostojbata na pepsito: º\n";
 cprintf ("È");
 for (i=0; i< 45; i++)
  cprintf ("Í");
  cout <<"¼\n\n\n   :";
  cin >> inventar.pepsi;
  file << "\n3. Pepsi: "<< inventar.pepsi;
  }
 void Vodka ()
{int i;
 clrscr();
 cprintf ("\n\n\n\n\n\n\n");
   cprintf ("É");
 for (i=0; i< 45; i++)
  cprintf ("Í");
 cprintf ("»\n");
 cout <<"º Vovedete vrednost za sostojbata na vodkata: º\n";
 cprintf ("È");
 for (i=0; i< 45; i++)
  cprintf ("Í");
 cout <<"¼\n\n\n   :";
    cin >> inventar.vodka;
    file << "\n4. Vodka: " << inventar.vodka;
   clrscr();
 }
void Naracka()
{int i,c , naracka, poracki, masa;
 char ans;
 clrscr();
      cprintf ("\n\n\n");
   cprintf ("É");
 for (i=0; i< 23; i++)
  cprintf ("Í");
   cprintf ("»\n");
   cout <<"º Kolku poracki imavte? º\n";
   cprintf ("È");
 for (i=0; i< 23; i++)
  cprintf ("Í");
   cout <<"¼\n\n\n   :";
 cin >> poracki;
 file << "\n Poracka ";
 cprintf ("É");
for (i=0; i< 16; i++)
  cprintf ("Í");
   cprintf ("»\n");
   cout <<"º Na koja masa ? º\n";
   cprintf ("È");
 for (i=0; i< 16; i++)
  cprintf ("Í");
   cout <<"¼\n   :";
   cin>>masa;
   file << "na masa: " << masa;
 for (c=0; c<poracki; c++)
   { clrscr();
     cprintf ("\n\n\n");
     cprintf ("É");
 for (i=0; i< 39; i++)
  cprintf ("Í");
     cprintf ("»\n");
     cout <<"º Kakva bese porackata ü "<<c<<", na masa ü"<<masa<<"? º\n";
     cprintf ("È");
 for (i=0; i< 39; i++)
  cprintf ("Í");
     cout <<"¼\n\n";
     cprintf ("\n");
     cprintf ("É");
 for (i=0; i< 38; i++)
  cprintf ("Í");
     cprintf ("»\n");
     cout <<"º Sakate li da go vidite izborot?(Y/N) º\n";
     cprintf ("È");
 for (i=0; i< 38; i++)
  cprintf ("Í");
     cout <<"¼\n   :";
     cin >> ans;
   if (toupper(ans)=='Y')
    { cprintf("\n\n\n1.    Kafe (izbor 1)\n2.    Pepsi (izbor2)\n3.    Fanta (izbor 3)");
      cprintf ("\n4.    Vodka (izbor 4)\n\n :");}
    else
     cprintf ("\n:");
   cin >> naracka;
   switch (naracka)
  {
    case (1):  inventar.kafe-=1; break;
    case (2):  inventar.pepsi-=1; break;
    case (3):  inventar.fanta-=1; break;
    case (4):  inventar.vodka-=1; break;
  }
}}
 void Disp_Inven()
{ char ans;
    cprintf ("\r\n***Momentalnata sostojba na inventarot e:***");
    cprintf ("\r\nKafe :"); cout  << inventar.kafe;
    cprintf ("\r\nFanta: "); cout  << inventar.fanta;
    cprintf ("\r\nPepsi: "); cout << inventar.pepsi;
    cprintf ("\r\nVodka: ");cout  << inventar.vodka;
  cprintf ("\n\n\r *****************************************************************\n");
  cprintf ("\r ***Sakate li da prodolzite so koristenjeto na programava?(Y/N)***\n");
  cprintf ("\r *****************************************************************\n");
  cin >> ans;
   if (toupper(ans)=='N')
   {
      textcolor(4);
   cprintf("\r\n\n###Vi blagodaram za koristenjeto na mojata programa###");
   delay(800);
     exit(0);}
    }
void main()
{ file.open("Kafic.txt", ios::out);

  char ans;
  Disp_Menu();
  cprintf ("\r\n\n*****************************************************************\n");
  cprintf ("\r***Sakate li da prodolzite so koristenjeto na programava?(Y/N)***\n");
  cprintf ("\r*****************************************************************\n");

  cin >> ans;
   while (toupper(ans) == 'Y')
    { Disp_Menu();}
   }
  void Popravka()
{clrscr();
int ans;
 cprintf ("\r\n\n                       Sto ke menuvate?");
 cprintf ("\n1. Inventar;");
 cprintf ("\n2. Izvrsena poracka;");
 cin >> ans;
   switch (ans)
 { case(1): P_Inv();break;
   case(2): P_Por();break;
   }
 }
 void P_Inv()
 {clrscr();
 char ans;
 int promena, i;
  cprintf ("\r\n\nSto ke menuvate?");
       cprintf ("\n");
     cprintf ("É");
 for (i=0; i< 38; i++)
  cprintf ("Í");
     cprintf ("»\n");
     cout <<"º Sakate li da go vidite izborot?(Y/N) º\n";
     cprintf ("È");
 for (i=0; i< 38; i++)
  cprintf ("Í");
     cout <<"¼\n   :";
     cin >> ans;
   if (toupper(ans)=='Y')
    { cprintf("\n\n\n\r1.    Kafe (izbor 1)\r\n2.    Pepsi (izbor2)\n\r3.    Fanta (izbor 3)");
      cprintf ("\r\n4.    Vodka (izbor 4)\n\n :");}
   else
     cprintf ("\n\n");
   cin >> promena;
     switch (promena)
   { case (1): Kafe(); break;
     case (2): Pepsi(); break;
     case (3): Fanta(); break;
     case (4): Vodka(); break;
     }
  }
    void P_Por()
 { clrscr();
   int poracka;
   cprintf ("\n\n                  ***Koja poracka sakate da ja smenite?***");
   cin >> poracka;
   Naracka();
   }