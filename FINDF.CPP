/* findfirst and findnext example */
#include <iostream.h>
#include <dos.h>
#include <dir.h>
#include <conio.h>
void main(){
	 ffblk ffblk;
	 int done;
	 chdir("e:\\igri\\hl");
	 clrscr();
	 cout<<"Directory listing of: E:\\Igri\\HL\n";
	 done = findfirst("*",&ffblk,FA_DIREC);
	 while (!done){
			cout<<ffblk.ff_name<<endl;
			done = findnext(&ffblk);
	 }
}
