#include<iostream>
using namespace std;

struct PS{
	int t,m;
};
void nhap(PS &a){
	cout<<" Tu so: "; cin>>a.t;
	do {
		cout<<"Mau so: "; cin>>a.m;
	}while(a.m==0);
}

void in(PS a){
	cout<<a.t<<"/"<<a.m;
}

PS operator+(PS a, PS b){
	PS t;
	t.t=a.t*b.m+b.t*a.m;
	t.m=a.m*b.m;
	return t;
}

PS operator-(PS a, PS b){
	PS t;
	t.t=a.t*b.m-b.t*a.m;
	t.m=a.m*b.m;
	return t;
}

PS operator*(PS a, PS b){
	PS t;
	t.t=a.t*b.t;
	t.m=a.m*b.m;
	return t;
}

PS operator/(PS a, PS b){
	PS t;
	t.t=a.t*b.m;
	t.m=a.m*b.t;
	return t;
}

int ucln(int a, int b){
	while (a!=b){
		if(a>b)a-=b;
		else b-=a;
		
	}
	return a;
	
}

PS tg(PS &a){
	a.t=a.t/ucln(a.t,a.m);
	a.m=a.m/ucln(a.t,a.m);
	return a;
	
}

istream &operator>>(istream &is, PS &a){
	cout<<"\n Nhap tu so: "; is>>a.t;
	do {
		cout<<" Nhap mau so:"; is>>a.m;
	}while(a.m==0);
	return is;
	
}

ostream &operator<<(ostream &os, PS a){
	os<<a.t<<"/"<<a.m;
	return os;
}

int main(){
	PS a,b,c;
	cout<<"Nhap phan so a,b: "; cin>>a>>b;
	c=a+b;
	cout<<a<<" + "<<b<<" = "<<tg(c)<<endl;
	c=a-b;
	cout<<a<<" - "<<b<<" = "<<tg(c)<<endl;
	c=a*b;
	cout<<a<<" * "<<b<<" = "<<tg(c)<<endl;
	c=a/b;
	cout<<a<<" / "<<b<<" = "<<tg(c)<<endl;
}
