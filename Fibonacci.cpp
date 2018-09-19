#include<iostream>
using namespace std;
int n=0;
void nhap(){
	cout<<"Nhap n:"; cin>>n;
}
void xuat(){
	cout<<"1 	1\t";
	int f,f1=1,f2=1;
	while(f2<n){
		f=f1+f2;
		cout<<f<<"\t";
		f1=f2;
		f2=f;
	}

}
int main(){
	nhap();
	xuat();
}
