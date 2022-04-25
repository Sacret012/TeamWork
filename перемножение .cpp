#include <iostream>
#include <cstdlib> 

using namespace std;
int main(){
	int i;
	int j;
	int n;
	int m;
	int a[n][m];
	int b[n][m];
	int x[n][m];
	int k=0;
	
	cout<<"n=";
	cin>>n;
	cout<<"m=";
	cin>>m; // updated
	
	for (i = 0;i < n; i++)
	for (j = 0;j < m; j++)
	cout<<"a=";
	cin>>a[i][j];
	
	for (i=0;i<n;i++)
	for (j=0;j<m;j++)
	cout<<"b=";
	cin>>b[i][j];

	for (i=0;i<n;i++){
	for (j=0;j<m;j++){
	x[i][j]=0;
	
	for (i=0;i<k;i++);
	x[i][j]+=a[i][j]*b[i][j];
	}
}
	cout<<x[i][j]<<endl;	
	

	
	return 0;
}

