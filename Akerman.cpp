#include <fstream.h>

int mat[100][100]={0};

int a(int n,int m){
	if(n==0 && mat[n][m]==0)
		mat[n][m]=m+1;
		
	if(n>0 && m==0 && mat[n][m]==0)
		mat[n][m]=a(n-1,1);

	if(n>0 && m>0 && mat[n][m]==0)
		mat[n][m]=a(n-1,a(n,m-1));

	return mat[n][m];
}
void main(){
	ofstream fileout("akerman.txt",ios::out);
	int m,n,i,j,z;
	cin>>n>>m;
	n++;m++;

	for(j=0;j<m;j++){
		mat[0][j]=j+1;
		mat[1][j]=j+2;
		mat[2][j]=j*2+3;
	}

	for(i=3;i<n;i++){
		mat[i][0]=mat[i-1][1];
		z=mat[i][0];
		for(j=1;j<m;j++){
			mat[i][j]+=z+mat[i-1][j]+mat[i-2][j];
			z+=mat[i][j];
		}
	}
/*
	for(i=3;i<n;i++)
		for(j=0;j<n;j++)
			mat[i][j]=a(i,j);
*/
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			fileout.width(11);
			fileout<<mat[i][j];
		}
		fileout<<endl;
	}

	cout<<mat[n-1][m-1]<<endl;
}

