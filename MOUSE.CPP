#include <fstream.h>
#include <conio.h>
void main()
{
int a=0;
clrscr();
ifstream m("COM1");
m >>a;
cout <<a;
m.close();
}