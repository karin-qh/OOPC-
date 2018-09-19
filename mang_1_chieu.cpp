#include<iostream>
using namespace std;
int main(){
	int*a,n;
	cout<<"\n Nhap so phan tu cua mang:"; cin>>n;
	a=new int[n];   //cap phat bo nho
	for(int i=0;i<n;i++) { cout <<"Nhap phan tu thu "<<i+1<<": "; cin>>a[i];
	}
	cout<<"\n Noi dung mang ";
	for(int i=0;i<n;i++) cout <<" "<<a[i];
	int t=0; for (int i=0;i<n;i++) t=t+*(a+i); //truy cap kieu ten con tro
	cout<<"\n Tong mang = "<<t;
	delete []a; 
	
}
