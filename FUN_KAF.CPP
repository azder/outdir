#include <iostream.h>
#include <stdio.h>
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
   clrscr();
 cout <<"\n\n";
  cout << "\t\t***Sleduva izbor od meni***\n";
 cout << "\t�";
 for (i=0; i< 43; i++)
  cout << "�";
 cout << "�\n";
 cout <<"\t�1. Voveduvanje na elementite na inventarot �\n";
 cout <<"\t�2. Voveduvanje na izvrsena naracka         �\n";
 cout <<"\t�3. Izvrsuvanje na popravka                 �\n";
 cout <<"\t�4. Prikazuvanje na  inventarot             �\n";
 cout <<"\t�5. Izlez od programata                     �\n";
 cout << "\t�";
 for (i=0; i< 43; i++)
  cout << "�";
 cout <<"�\n\n   :";
 cin >> ans;

   switch (ans)
 {
   case (1): Inventory(); break;
   case (2): Naracka(); break;
   case (3): Popravka(); break;
   case (4): Disp_Inven(); break;
   case (5): cout << "\n\n\n\n\n\n\n\n\n\t***Vi blagodaram za koristenjeto na mojata programa***"; delay(900);exit (0); break;
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
   cout << "\n\n\n";
   cout << "\t\t�";
 for (i=0; i< 44; i++)
  cout << "�";
 cout << "�\n";
 cout <<"\t\t� Vovedete vrednost za sostojbata na kafeto: �\n";
 cout << "\t\t�";
 for (i=0; i< 44; i++)
  cout << "�";
 cout <<"�\n\n\n   :";
 cin >> inventar.kafe;
 file << "1. Kafe:" << inventar.kafe;
 }
 void Fanta()
{int i;
 clrscr();
 cout << "\n\n\n";
   cout << "�";
 for (i=0; i< 45; i++)
  cout << "�";
 cout << "�\n";
 cout <<"� Vovedete vrednost za sostojbata na fantata: �\n";
 cout << "�";
 for (i=0; i< 45; i++)
  cout << "�";
 cout <<"�\n\n\n   :";
 cin >> inventar.fanta;
 file << "\n2. Fanta: " << inventar.fanta;
 }
 void Pepsi()
 { int i;
  clrscr();
 cout << "\n\n\n\n\n";
   cout << "\t�";
 for (i=0; i< 45; i++)
  cout << "�";
 cout << "�\n";
 cout <<"\t� Vovedete vrednost za sostojbata na pepsito: �\n";
 cout << "\t�";
 for (i=0; i< 45; i++)
  cout << "�";
  cout <<"�\n\n\n   :";
  cin >> inventar.pepsi;
  file << "\n3. Pepsi: "<< inventar.pepsi;
  }
 void Vodka ()
{int i;
 clrscr();
 cout << "\n\n\n\n\n\n\n";
   cout << "\t\t�";
 for (i=0; i< 45; i++)
  cout << "�";
 cout << "�\n";
 cout <<"\t\t� Vovedete vrednost za sostojbata na vodkata: �\n";
 cout << "\t\t�";
 for (i=0; i< 45; i++)
  cout << "�";
 cout <<"�\n\n\n   :";
    cin >> inventar.vodka;
    file << "\n4. Vodka: " << inventar.vodka;
   clrscr();
 }
void Naracka()
{int i,c , naracka, poracki, masa;
 char ans;
 clrscr();
      cout << "\n\n\n";
   cout << "�";
 for (i=0; i< 23; i++)
  cout << "�";
   cout << "�\n";
   cout <<"� Kolku poracki imavte? �\n";
   cout << "�";
 for (i=0; i< 23; i++)
  cout << "�";
   cout <<"�\n\n\n   :";
 cin >> poracki;
 file << "\n Poracka ";
 cout << "\t�";
for (i=0; i< 16; i++)
  cout << "�";
   cout << "�\n";
   cout <<"\t� Na koja masa ? �\n";
   cout << "\t�";
 for (i=0; i< 16; i++)
  cout << "�";
   cout <<"�\n   :";
   cin>>masa;
   file << "na masa: " << masa;
 for (c=0; c<poracki; c++)
   { clrscr();
     cout << "\n\n\n";
     cout << "�";
 for (i=0; i< 39; i++)
  cout << "�";
     cout << "�\n";
     cout <<"� Kakva bese porackata � "<<c<<", na masa �"<<masa<<"? �\n";
     cout << "�";
 for (i=0; i< 39; i++)
  cout << "�";
     cout <<"�\n\n";
     cout << "\n";
     cout << "\t\t�";
 for (i=0; i< 38; i++)
  cout << "�";
     cout << "�\n";
     cout <<"\t\t� Sakate li da go vidite izborot?(Y/N) �\n";
     cout << "\t\t�";
 for (i=0; i< 38; i++)
  cout << "�";
     cout <<"�\n   :";
     cin >> ans;
   if (toupper(ans)=='Y')
    { cout <<"\n\n\n1.    Kafe (izbor 1)\n2.    Pepsi (izbor2)\n3.    Fanta (izbor 3)";
      cout << "\n4.    Vodka (izbor 4)\n\n :";}
    else
     cout << "\n:";
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
    cout << "\n\t***Momentalnata sostojba na inventarot e:***";
    cout << "\nKafe : " << inventar.kafe;
    cout << "\nFanta: " << inventar.fanta;
    cout << "\nPepsi: " << inventar.pepsi;
    cout << "\nVodka: " << inventar.vodka;
  cout << "\n\n\t *****************************************************************\n";
  cout << "\t ***Sakate li da prodolzite so koristenjeto na programava?(Y/N)***\n";
  cout << "\t *****************************************************************\n";
  cin >> ans;
   if (toupper(ans)=='N')
   {cout << "\n\n\t\t###Vi blagodaram za koristenjeto na mojata programa###";
   delay(800);
     exit(0);}
    }
void main()
{ file.open("Kafic.txt", ios::out);
  char ans;
  Disp_Menu();
  cout << "\n\n\t*****************************************************************\n";
  cout << "\t***Sakate li da prodolzite so koristenjeto na programava?(Y/N)***\n";
  cout << "\t*****************************************************************\n";

  cin >> ans;
   while (toupper(ans) == 'Y')
    { Disp_Menu();}
   }
  void Popravka()
{clrscr();
int ans;
 cout << "\n\n\t\tSto ke menuvate?";
 cout << "\n1. Inventar;";
 cout << "\n2. Izvrsena poracka;";
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
  cout << "\n\nSto ke menuvate?";
       cout << "\n";
     cout << "\t\t�";
 for (i=0; i< 38; i++)
  cout << "�";
     cout << "�\n";
     cout <<"\t\t� Sakate li da go vidite izborot?(Y/N) �\n";
     cout << "\t\t�";
 for (i=0; i< 38; i++)
  cout << "�";
     cout <<"�\n   :";
     cin >> ans;
   if (toupper(ans)=='Y')
    { cout <<"\n\n\n1.    Kafe (izbor 1)\n2.    Pepsi (izbor2)\n3.    Fanta (izbor 3)";
      cout << "\n4.    Vodka (izbor 4)\n\n :";}
   else
     cout << "\n\n";
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
   cout << "\n\n\t\t\t***Koja poracka sakate da ja smenite?***";
   cin >> poracka;
   Naracka();
   }