#include<iostream>
using namespace std;
class hcn{
		float x,y;
	public:
	
		hcn(){
			x=0;
			y=0;
		}
		hcn(float a, float b){
			x=a;
			y=b;
		}
		void nhap(){
			cout<<"\n Nhap chieu rong: "; cin>>x;
			cout<<" Nhap chieu dai: "; cin>>y;
		}
		void xuat(){
			cout<<"\n Chieu rong hcn la: "<<x;
			cout<<" Chieu dai hcn la: "<<y;
		}
		float cv(){
			return (x+y)/2;
		}
		float dt(){
			return x*y;
		}
		friend istream &operator>>(istream &is, hcn &a){
			cout<<"\n Nhap chieu rong: "; is>>a.x;
			cout<<" Nhap chieu dai: "; is>>a.y;
			return is;
		}
		friend ostream &operator<<(ostream &os, hcn a){
			os<<"\n Chieu rong hcn la: "<<a.x;
			os<<" Chieu dai hcn la: "<<a.y;
			return os;
		}

		
};


int main(){
	hcn a;
//	a.nhap();
//	a.xuat();
	cout<<"\nNhap HCN a: "; cin>>a;
	cout<<"\nChu vi HCN la: "<<a.cv();
	cout<<"\nDien tich HCN la: "<<a.dt();

}
