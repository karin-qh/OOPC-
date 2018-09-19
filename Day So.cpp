#include<iostream>
#include<math.h>
#include <stdlib.h>
using namespace std;
class Dayso{
	int n,*a;
	
	public:
		Dayso(int n1=0){}
		void sinh(int n){
			this->n=n;
			a=new int[n];
			for(int i=0;i<n;i++){
				a[i]=rand()%100;
			}
		}
		void in(){
			for(int i=0;i<n;i++){
				cout<<a[i]<<"\t";
			}
				
		}
		void thaydoi(int d=2){
			for (int i=0;i<n;i++) a[i]+=d;
		}
		Dayso(const Dayso &b){
			n=b.n;
			if(n>0) a=new int[n];
			for(int i=0;i<n;i++) a[i]=b.a[i];
		}
		friend istream &operator>>(istream &is, Dayso &b){
			cout<<"Nhap n:"; cin>>b.n;
			b.a=new int[b.n];
			for(int i=0;i<b.n;i++){
			cout<<"Nhap number: "; cin>>b.a[i];}
			return is;
		}
		friend ostream &operator<<(ostream &os, Dayso b){
			cout<<"\n";
			for(int i=0;i<b.n;i++){
				cout<<b.a[i]<<"\t";
			}
			return os;
		}
		
	 	Dayso operator=(const Dayso &b){
			n=b.n;
			if(n>0) a=new int [n];
			for(int i=0;i<n;i++){
				a[i]=b.a[i];
			}
			return *this;
		}
		~Dayso(){
			if (a!=NULL) delete []a;    //ham huy cua lop(destructor)
			cout<<"\n Goi ham huy";
		}
		
};

	

int main(){
	Dayso a,b;
//	a.sinh(10);
//	cout<<"\n Day a: "; a.in();		
//	Dayso b(a);
//	cout<<"\n Day b: "; b.in();
//	b.thaydoi(5);
//	cout<<"\n Day b: "; b.in();
//	cout<<"\n Day a: "; a.in();
	
	cin>>a;
	cout<<a;
	b=a;
	b.thaydoi(5);
	cout <<b;
	cout<<"\n" <<a;
}
