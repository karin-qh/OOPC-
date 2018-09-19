#include<iostream>
using namespace std;
int main(){
	double *a;
	double i=0;
	while(1){
		a=new double [1000000];
		if(a!=NULL) { cout<<"\n Cap phat thanh cong lan thu "<<++i;}
		else {cout<<"\n HET BO NHO!!!!\n"; break;}	
	
	}
}
