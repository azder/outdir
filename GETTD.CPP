#include <fstream.h>
#include <dos.h>
inline void fill(int num,ofstream& fout){
	if(num<10)fout<<"0";
}
void main(){
	ofstream fout("record.rcd",ios::out | ios::app);
	time t;
	date d;
	gettime(&t);
	getdate(&d);
	fill(d.da_day,fout);
	fout<<(int)d.da_day<<"-";
	fill(d.da_mon,fout);
	fout<<(int)d.da_mon;
	fout<<"-"<<d.da_year<<"  ";
	fill(t.ti_hour,fout);
	fout<<(int)t.ti_hour<<":";
	fill(t.ti_min,fout);
	fout<<(int)t.ti_min<<":";
	fill(t.ti_sec,fout);
	fout<<(int)t.ti_sec<<".";
	fill(t.ti_hund,fout);
	fout<<(int)t.ti_hund<<endl;
	fout.close();
}
