#include<iostream>
using namespace std;

class SV{
	int masv;
	string hoten;
	float dt,dl,dh;
	public:
		void nhap(){
			cout<<"\n Nhap ma sv: "; cin>>masv;
			cout<<" Nhap ho ten: "; cin>>hoten;
			cout<<" Nhap diem toan: "; cin>>dt;
			cout<<" Nhap diem ly: "; cin>>dl;
			cout<<" Nhap diem hoa: "; cin>>dh;
		}
		void xuat(){
			cout<<"\n "<<masv;
			cout<<"\t"<<hoten;
			cout<<"\t\t"<<dt;
			cout<<"\t\t"<<dl;
			cout<<"\t\t"<<dh;
			cout<<"\t\t"<<(dt+dl+dh)/3;
		}

			
};
int main(){
	
	int n;
	cout<<"Nhap n: "; cin>>n;
	SV a[100];
	for (int i=0;i<n;i++){
			a[i].nhap();
	}
	cout<<"\n MaSV\tHo ten\t\tDiem Toan \tDiem Ly \tDiem Hoa \tDiem TB";
	
	for (int i=0;i<n;i++){
			a[i].xuat();
	}

}
