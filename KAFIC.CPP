#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <fstream.h>
ofstream file;
struct Inventar{
int kafe;
int fanta;
int pepsi;
int vodka;
};
void main()
{
 Inventar inventar;
 int i, c, poracki, naracka, masa;
 char ans;
 clrscr();
 cout <<"\n\n";
 cout << "\tÉ";
 for (i=0; i< 42; i++)
  cout << "Í";
 cout << "»\n";
 cout <<"\tº Sakate li da go vovedite inventarot?(Y/N)º\n";
 cout << "\tÈ";
 for (i=0; i< 42; i++)
  cout << "Í";
 cout <<"¼";
 cin >> ans;
  if (toupper(ans)=='Y')
   { cout << "\n\n\n";
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
 cout << "\n\n\n";
   cout << "É";
 for (i=0; i< 29; i++)
  cout << "Í";
 cout << "»\n";
 cout <<"º Izvrsivte li prodazba?(Y/N) º\n";
 cout << "È";
 for (i=0; i< 29; i++)
  cout << "Í";
 cout <<"¼\n";
  cin >> ans;
   if (toupper(ans)=='Y')
    { clrscr();
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
    }
    cout << "\n\t***Momentalnata sostojba na inventarot e:***";
    cout << "\nKafe: " << inventar.kafe;
    cout << "\nFanta: " << inventar.fanta;
    cout << "\nPepsi: " << inventar.pepsi;
    cout << "\nVodka: " << inventar.vodka;
    cout << "\n\n\t\t ###Vi blagodaram za koristenjeto na mojata programa###";
    }
  }
