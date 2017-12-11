#include <fstream.h>
int x,y;
char t,n;
void levo(){
	switch(n){
	case 'S':n='Z';
		break;
	case 'I':n='S';
		break;
	case 'J':n='I';
		break;
	case 'Z':n='J';
		break;
	}
}
void desno(){
	switch(n){
	case 'S':n='I';
		break;
	case 'I':n='J';
		break;
	case 'J':n='Z';
		break;
	case 'Z':n='S';
		break;
	}
}
void pravo(){
	switch(n){
	case 'S':y++;
		break;
	case 'I':x++;
		break;
	case 'J':y--;
		break;
	case 'Z':x--;
		break;
	}
}
void main(){
	ifstream filein("Robot.in",ios::in);
	filein>>x>>y>>n;
	while(!filein.eof()){
		filein>>t;
		switch(t){
		case 'L':
			levo();
			break;
		case 'D':
			desno();
			break;
		case 'P':
			pravo();
			break;
		}
		t=0;
	}
	filein.close();
	ofstream fileout("Robot.out",ios::out);
	fileout<<x<<' '<<y<<' '<<n<<endl;
	fileout.close();
}