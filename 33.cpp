#include<iostream>
using namespace std;
	int n,a[100];
void nhapmang(){

	cout<<"Nhap n:";
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
}


void dem(){
	int dem=1, max = 0;
	for (int i=0;i<n;i++){
		if(a[i+1]>a[i]){	
			dem++;
			max = dem;
		} else {
			dem = 1;
		}
	}
	cout<<"Dem: "<<max;012
}

int main(){
	nhapmang();
	dem();
	
}
