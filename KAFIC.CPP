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
 cout << "\t�";
 for (i=0; i< 42; i++)
  cout << "�";
 cout << "�\n";
 cout <<"\t� Sakate li da go vovedite inventarot?(Y/N)�\n";
 cout << "\t�";
 for (i=0; i< 42; i++)
  cout << "�";
 cout <<"�";
 cin >> ans;
  if (toupper(ans)=='Y')
   { cout << "\n\n\n";
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
 cout << "\n\n\n";
   cout << "�";
 for (i=0; i< 29; i++)
  cout << "�";
 cout << "�\n";
 cout <<"� Izvrsivte li prodazba?(Y/N) �\n";
 cout << "�";
 for (i=0; i< 29; i++)
  cout << "�";
 cout <<"�\n";
  cin >> ans;
   if (toupper(ans)=='Y')
    { clrscr();
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
    }
    cout << "\n\t***Momentalnata sostojba na inventarot e:***";
    cout << "\nKafe: " << inventar.kafe;
    cout << "\nFanta: " << inventar.fanta;
    cout << "\nPepsi: " << inventar.pepsi;
    cout << "\nVodka: " << inventar.vodka;
    cout << "\n\n\t\t ###Vi blagodaram za koristenjeto na mojata programa###";
    }
  }
