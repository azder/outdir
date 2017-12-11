#include <iostream.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
void setscreen();
void shiftops(long &i,int &n);
void printwords(long &lng);
void endprog();
void main()
{
long i;
int n;
char ans,*pans;
setscreen();
do
{
cout << "Enter a long integer\n";
cin  >>pans;
i=atol(pans);
cout <<"\nEnter a number for shifting (0 - 32)\n";
cin >>pans;
n=atoi(pans);
shiftops(i,n);
printwords(i);
gotoxy(1,24);
cout <<"\nPress \'Y\' for another number";
ans=toupper(getch());
setscreen();
}while (ans =='Y');
endprog();
}
void setscreen()
{
_setcursortype(_NOCURSOR);
textmode(C80);
textbackground(12);
textcolor(15);
clrscr();
gotoxy(74,25);
cout <<"Peo(C)";
gotoxy(1,1);
}
void printwords(long &lng)
{
cout <<"\n\nHi and lo words of "<<lng<<":"<<endl;
cout <<"HIWORD: "<<HIWORD(lng)<<endl;
cout <<"LOWORD: "<<LOWORD(lng)<<endl;
}
void shiftops(long &i,int &n)
{
n=abs(n%=32);
cout <<"\nShift operations:";
cout <<"\n"<<i<<" << "<<n<<" = "<<long(i<<n)
		<<"  ("<<i<<"*"<<pow(2,n)<<"="<<long(i*pow(2,n))<<")";
cout <<"\n"<<i<<" >> "<<n<<" = "<<long(i>>n)
		<<"  ("<<i<<"/"<<pow(2,n)<<"="<<long(i/pow(2,n))<<")";

}
void endprog()
{
_setcursortype(_NORMALCURSOR);
clrscr();
system("cls");
}