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
			cout<<"Nhap chieu rong: "; cin>>x;
			cout<<"Nhap chieu dai: "; cin>>y;
		}
		void xuat(){
			cout<<"\nChieu rong hcn la: "<<x;
			cout<<"\nChieu dai hcn la: "<<y;
		}
		float cv(){
			return (x+y)/2;
		}
		float dt(){
			return x*y;
		}
		
};

int main(){
	hcn a;
	a.nhap();
	a.xuat();
	cout<<"\nChu vi HCN la: "<<a.cv();
	cout<<"\nDien tich HCN la: "<<a.dt();
}
