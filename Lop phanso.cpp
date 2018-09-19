#include<iostream>
using namespace std;
class PS{
	float t,m;
	public:
		void nhap(){
			cout<<"\n Nhap tu: "; cin>>t;
			cout<<" Nhap mau: "; cin>>m;
		}
		void xuat(){
			cout<<t<<"/"<<m;
		}
		PS cong(PS a,PS b){
			PS t;
			t.t=a.t*b.m+b.t*a.m;
			t.m=a.m*b.m;
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
			a.m=a.m/ucln(a.t,a.m);
			a.t=a.t/ucln(a.t,a.m);
			return a;
		}
		
};

int main(){
	PS a,b,c;
	cout<<"Nhap phan so 1: ";
	a.nhap();
	cout<<"Nhap phan so 2: ";
	b.nhap();
	a.xuat();
	cout<<" + ";
	b.xuat();
	c=c.cong(a,b);
	c.tg(c);
	cout<<" = ";
	c.xuat();

}
