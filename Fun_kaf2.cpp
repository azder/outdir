#include <iostream.h>
#include <stdio.h>
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
 void Disp_Menu();
 void Inventory();
 void Prikazi();
 void Popravka();
 void Kafe();
 void Fanta();
 void Pepsi();
 void Vodka();
 void Naracka();
 void main()
{
 Disp_Menu;
 }
 void Disp_Menu()
 { int i, ans;
   clrscr();
 cout <<"\n\n";
  cout << "\t\t***Sleduva izbor od meni***\n";
 cout << "\t�";
 for (i=0; i< 42; i++)
  cout << "�";
 cout << "�\n";
 cout <<"\t�1. Voveduvanje na elementite na inventarot �\n";
 cout <<"\t�2. Voveduvanje na izvrsena naracka         �\n";
 cout <<"\t�3. Izvrsuvanje na popravka                 �\n";
 cout <<"\t�4. Prikazuvanje na  inventarot             �\n";
 cout <<"\t�5. Izlez od programata                     �\n";
 cout << "\t�";
 for (i=0; i< 42; i++)
  cout << "�";
 cout <<"�";
 cin >> ans;
   switch (ans)
 {
   case (1): Inventory(); break;
   case (2): Naracka(); break;
   case (3): Popravka(); break;
   case (4): Prikazi(); break;
   case (5): exit (0); break;
 }}
 void Inventory()
 {

  void Kafe();
  void Fanta();
  void Pepsi();
  void Vodka();
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
 cout <<"�";
 cin >> inventar.kafe;
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
 cout <<"�\n";
 cin >> inventar.fanta;
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
  cout <<"�\n";
  cin >> inventar.pepsi;
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
 cout <<"�\n";
    cin >> inventar.vodka;
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
   cout <<"�\n";
 cin >> poracki;
 cout << "\t�";
for (i=0; i< 16; i++)
  cout << "�";
   cout << "�\n";
   cout <<"\t� Na koja masa ? �\n";
   cout << "\t�";
 for (i=0; i< 16; i++)
  cout << "�";
   cout <<"�\n";
   cin>>masa;
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
     cout <<"�\n";
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
 void Prikazi()
 { char ans;
  cout << "\n\t\t***Mometalnata sostojba na inventarot e:***\n";
  cout << "1. Kafe: "<<inventar.kafe;
  cout << "\n2. Fanta: "<<inventar.fanta;
  cout << "\n3. Pepsi: "<<inventar.pepsi;
  cout << "\n4. Vodka: "<<inventar.vodka;
   cout << "sakate li da prodlzite so koristenjeto na programata?";
   cin >> ans;
    if (toupper(ans)=='Y')
     { Disp_Menu();
     }
  }



