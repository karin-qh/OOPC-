#include <iostream>
#include <stdlib.h> //thu vien cho rand
using namespace std;
int main(){
	int **a,m,n; //int a[10][10];
	cout<<"\n Nhap so dong:"; cin>>m;
	cout<<"\n Nhap so cot:"; cin>>n;
	a=new int*[m];
	for(int i=0; i<m;i++)a[i]=new int [n];
	
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++) a[i][j]=rand()%100;
	cout<<"\n Noi dung ma tran";
	for (int i=0;i<m;i++){
		cout<<"\n";
		for (int j=0;j<n;j++) cout<<a[i][j]<<" ";
	}	
	cout<<"\n "<<endl;
	
	//Tinh tong hang
	cout<<"\n Tong hang: \n";
	for (int i=0;i<m;i++){
		int tong=0;
		for (int j=0;j<n;j++) {
			tong =tong+a[i][j];
			cout<<a[i][j]<<"\t";	
		}
		cout<<" = "<<tong<<"\n";
	}
	
	//Tinh tong cot
	cout<<"\n Tong cot: ";
	for (int i=0;i<m;i++){
		cout<<"\n";
		for (int j=0;j<n;j++) cout<<a[i][j]<<"\t";
	}
	cout<<"\n-------------\n";
	
	for (int j=0;j<n;j++){
		int tong2=0;
		for (int i=0;i<m;i++) {
			tong2 =tong2+a[i][j];	
		}
		cout<<tong2<<"\t";
	}
	cout<<"\n"<<endl;
	
	
	//Tong ma tran
	int tong=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++) {
			tong =tong+a[i][j];
		}	
	}
	cout<<" Tong ma tran = "<<tong<<"\n";	
	
	
}
