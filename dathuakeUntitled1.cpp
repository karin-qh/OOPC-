#include<iostream>
using namespace std;

class A{
	int a;
	public:
		A(int a1=0){
			a=a1;
		}
		void in(){
			cout<<"\n Gia tri a="<<a<<endl;
		}
};

class B:virtual public A{
	int b;
	public:
		B(int a1=0, int b1=0):A(a1){
			b=b1;
		}
		void in(){
			A::in();
			cout<<"\n Gia tri b="<<b<<endl;
		}
};

class C:virtual public A{
	int c;
	public:
		C(int a1=0, int c1=0):A(a1){
			c=c1;
		}
		void in(){
			A::in();
			cout<<"\n Gia tri c="<<c<<endl;
		}
};


class D:public B, public C{
	int d;
	public:
		D(int a1=0, int b1=0, int c1=0, int d1=0):B(a1,b1),C(a1,c1){
			d=d1;
		}
		void in(){
			B::in();
			C::in();
			cout<<"\n Gia tri d="<<d<<endl;
		}
};

int main(){
	D d(1,2,3,4);
	d.in();
	d.B::in();
	
}




