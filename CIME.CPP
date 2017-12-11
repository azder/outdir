#include <conio.h>
#include <stdio.h>
void main(){
	char buffer[200],*ime;
	buffer[0]=150;
	clrscr();
	cprintf("Koe e vaseto ceneto ime?\n\r");
	ime=cgets(buffer);
	fprintf(stdout,"\n\rEbi se %s.\n\r",ime);
}