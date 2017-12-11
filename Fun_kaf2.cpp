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
 cout << "\tÉ";
 for (i=0; i< 42; i++)
  cout << "Í";
 cout << "»\n";
 cout <<"\tº1. Voveduvanje na elementite na inventarot º\n";
 cout <<"\tº2. Voveduvanje na izvrsena naracka         º\n";
 cout <<"\tº3. Izvrsuvanje na popravka                 º\n";
 cout <<"\tº4. Prikazuvanje na  inventarot             º\n";
 cout <<"\tº5. Izlez od programata                     º\n";
 cout << "\tÈ";
 for (i=0; i< 42; i++)
  cout << "Í";
 cout <<"¼";
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
   cout << "\t\tÉ";
 for (i=0; i< 44; i++)
  cout << "Í";
 cout << "»\n";
 cout <<"\t\tº Vovedete vrednost za sostojbata na kafeto: º\n";
 cout << "\t\tÈ";
 for (i=0; i< 44; i++)
  cout << "Í";
 cout <<"¼";
 cin >> inventar.kafe;
 }
 void Fanta()
{int i;
 clrscr();
 cout << "\n\n\n";
   cout << "É";
 for (i=0; i< 45; i++)
  cout << "Í";
 cout << "»\n";
 cout <<"º Vovedete vrednost za sostojbata na fantata: º\n";
 cout << "È";
 for (i=0; i< 45; i++)
  cout << "Í";
 cout <<"¼\n";
 cin >> inventar.fanta;
 }
 void Pepsi()
 { int i;
  clrscr();
 cout << "\n\n\n\n\n";
   cout << "\tÉ";
 for (i=0; i< 45; i++)
  cout << "Í";
 cout << "»\n";
 cout <<"\tº Vovedete vrednost za sostojbata na pepsito: º\n";
 cout << "\tÈ";
 for (i=0; i< 45; i++)
  cout << "Í";
  cout <<"¼\n";
  cin >> inventar.pepsi;
  }
 void Vodka ()
{int i;
 clrscr();
 cout << "\n\n\n\n\n\n\n";
   cout << "\t\tÉ";
 for (i=0; i< 45; i++)
  cout << "Í";
 cout << "»\n";
 cout <<"\t\tº Vovedete vrednost za sostojbata na vodkata: º\n";
 cout << "\t\tÈ";
 for (i=0; i< 45; i++)
  cout << "Í";
 cout <<"¼\n";
    cin >> inventar.vodka;
   clrscr();
 }
void Naracka()
{int i,c , naracka, poracki, masa;
 char ans;
 clrscr();
      cout << "\n\n\n";
   cout << "É";
 for (i=0; i< 23; i++)
  cout << "Í";
   cout << "»\n";
   cout <<"º Kolku poracki imavte? º\n";
   cout << "È";
 for (i=0; i< 23; i++)
  cout << "Í";
   cout <<"¼\n";
 cin >> poracki;
 cout << "\tÉ";
for (i=0; i< 16; i++)
  cout << "Í";
   cout << "»\n";
   cout <<"\tº Na koja masa ? º\n";
   cout << "\tÈ";
 for (i=0; i< 16; i++)
  cout << "Í";
   cout <<"¼\n";
   cin>>masa;
 for (c=0; c<poracki; c++)
   { clrscr();
     cout << "\n\n\n";
     cout << "É";
 for (i=0; i< 39; i++)
  cout << "Í";
     cout << "»\n";
     cout <<"º Kakva bese porackata ü "<<c<<", na masa ü"<<masa<<"? º\n";
     cout << "È";
 for (i=0; i< 39; i++)
  cout << "Í";
     cout <<"¼\n";
     cout << "\n";
     cout << "\t\tÉ";
 for (i=0; i< 38; i++)
  cout << "Í";
     cout << "»\n";
     cout <<"\t\tº Sakate li da go vidite izborot?(Y/N) º\n";
     cout << "\t\tÈ";
 for (i=0; i< 38; i++)
  cout << "Í";
     cout <<"¼\n   :";
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



