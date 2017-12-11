#include <iostream.h>
#include <conio.h>
void printkey(int key);
void printkey(char key);
void main()
{ clrscr();
 char p;
 int r;
 cout <<"Press ENTER to exit\n";
while(p!=13)
	{
	 p=getch();
//	 cout << p<<endl;
	 if (p==0)
	 {
	 r = getch();
	 printkey(r);
	 }
	 }
}
void printkey(int key)
{
cout <<key<<"\t";
switch(key)
	{
	default:
	cout <<endl;
	break;
	case(59):
	cout <<"F1\n";
	break;
	case(60):
	cout <<"F2\n";
	break;
	case(61):
	cout <<"F3\n";
	break;
	case(62):
	cout <<"F4\n";
	break;
	case(63):
	cout <<"F5\n";
	break;
	case(64):
	cout <<"F6\n";
	break;
	case(65):
	cout <<"F7\n";
	break;
	case(66):
	cout <<"F8\n";
	break;
	case(67):
	cout <<"F9\n";
	break;
	case(68):
	cout <<"F10\n";
	break;
	case(71):
	cout <<"HOME\n";
	break;
	case(72):
	cout <<"UPARROW\n";
	break;
	case(73):
	cout <<"PGUP\n";
	break;
	case(75):
	cout <<"LEFTARROW\n";
	break;
	case(76):
	cout <<"CENTER\n";
	break;
	case(77):
	cout <<"RIGHTARROW\n";
	break;
	case(80):
	cout <<"DOWNARROW\n";
	break;
	case(79):
	cout <<"END\n";
	break;
	case(81):
	cout <<"PGDOWN\n";
	break;
	case(82):
	cout <<"INSERT\n";
	break;
	case(83):
	cout <<"DELETE\n";
	break;
	case(133):
	cout <<"F11\n";
	break;
	case(134):
	cout <<"F12\n";
	break;
	}
}
void printkey(char key)
{
cout <<key<<"\t";
switch(key)
	{
	default:
	cout <<endl;
	break;
	case(59):
	cout <<"F1\n";
	break;
	case(60):
	cout <<"F2\n";
	break;
	case(61):
	cout <<"F3\n";
	break;
	case(62):
	cout <<"F4\n";
	break;
	case(63):
	cout <<"F5\n";
	break;
	case(64):
	cout <<"F6\n";
	break;
	case(65):
	cout <<"F7\n";
	break;
	case(66):
	cout <<"F8\n";
	break;
	case(67):
	cout <<"F9\n";
	break;
	case(68):
	cout <<"F10\n";
	break;
	case(71):
	cout <<"HOME\n";
	break;
	case(72):
	cout <<"UPARROW\n";
	break;
	case(73):
	cout <<"PGUP\n";
	break;
	case(75):
	cout <<"LEFTARROW\n";
	break;
	case(76):
	cout <<"CENTER\n";
	break;
	case(77):
	cout <<"RIGHTARROW\n";
	break;
	case(80):
	cout <<"DOWNARROW\n";
	break;
	case(79):
	cout <<"END\n";
	break;
	case(81):
	cout <<"PGDOWN\n";
	break;
	case(82):
	cout <<"INSERT\n";
	break;
	case(83):
	cout <<"DELETE\n";
	break;
	case(133):
	cout <<"F11\n";
	break;
	case(134):
	cout <<"F12\n";
	break;
	}
}