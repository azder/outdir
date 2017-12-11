#include <iostream.h>
#include <conio.h>
int sgn(int i)
{
	return (i<0)?(-1):(i>0);
};
void main()
{
	clrscr();
	cout <<sizeof(int)<<endl;
 //	getch();
	int a;
	cin >>a;
	cout <<endl<<sgn(a);
	getch();
}