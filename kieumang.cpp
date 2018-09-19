#include<iostream>
using namespace std;
int a[10]; //float *b;
int main(){
	
	char c[]={'a','b','c','d','e'};
	cout<<"\n a=";
	for (int i=0;i<10;i++) cout<<" "<<a[i];
	cout<<"\n b=";
	for (int i=0;i<10;i++) cout<<" "<<b[i];
	cout<<"\n c=";
	for (int i=0;i<10;i++) cout<<" "<<c[i];	
	cout<<"\n dia chi cua a"<<a;
	cout<<"\n dia chi cua b"<<b;
	cout<<"\n dia chi cua c"<<&c;
	
}
