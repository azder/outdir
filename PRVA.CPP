#include <iostream.h>;
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
void main(void)
{
	 int i;
	 char* a="Ova e prvata programa sto ja napraviv vo Borland C++ 3.\n";
	 char* b="Posakajte mi sreka za vo idnina\n";
	 clrscr();
	 cout <<"Zdravo.\n"<< a<<b<<"Pritisnete kopce.\n";
	 cout <<"\b";
	 getch();
	 clrscr();
	 for (i = 0; i < 11; i++)
		printf(/*"%d\r\n"*/"%d", i);
	 printf("\r\nPritisnete kopce za da ja zavrsite ovaa programa.");
	 getche();
//	 clrscr();
//	 printf("Ekranot e izbrisan! (Osven ovoj red)");
//	 clrscr();
//	 exit( 0);
}

