#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <fstream.h>
#include <string.h>
#include <iostream.h>
int chrptrlen(char *chr);
void main()
{
char *chrptr,*filename;
ofstream file;
clrscr();
puts("What's the File Name?");
gets(filename);
file.open(filename,ios::out);
if (!file)
	{
		cout <<"Error opening file\n";
		return ;
	}
puts("What's your name?");
gets(chrptr);
cout <<"Input Length:"<<strlen(chrptr)<<endl;
file <<chrptr<<endl;
cout <<"Wrote to: "<<filename;
file.close();
getch();
}