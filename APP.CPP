#include <conio.h>
#include <stdlib.h>
#include <iostream.h>
void main(){
	cout<<"Main\n";
}

class app{
	void loop();
public:
	app(){
		clrscr();
		cout<<"Start\n";
		loop();
		cout<<"End\n";
		exit(0);
		cout<<"Exit\n";
	};
	~app(){cout<<"Dest\n";};
};
void app::loop(){while(27!=getch());}

app thisapp;
