#include<iostream>
#include<math.h>
#include <stdlib.h>
using namespace std;

class SV{
	SV *a;
	int masv;
	string hoten;
	float dlt,dth;
	public:
		SV(){
			masv=dlt=dth=0;
			hoten="null";
		}
		SV(int ma,string name, float dlt, float dth){
			this->masv=ma;
			this->hoten=name;
			this->dlt=dlt;
			this->dth=dth;
		}
		
		friend istream &operator>>(istream &is, SV &a){
			cout<<"\n Nhap ma sv: "; cin>>a.masv;
			fflush(stdin); //xoa bo dem ban phim
			cout<<" Nhap ho ten: "; getline(cin,a.hoten);
			cout<<" Nhap diem LT: "; cin>>a.dlt;
			cout<<" Nhap diem TH: "; cin>>a.dth;
			return is;
		}
		
		friend ostream &operator<<(ostream &os, SV a){
			cout<<"\n "<<a.masv;
			cout<<"\t"<<a.hoten;
			cout<<"\t\t"<<a.dlt;
			cout<<"\t\t"<<a.dth;
			cout<<"\t\t"<<(a.dlt+a.dth)/2;
			return os;
		}
		int getmasv(){
			return masv;
		}
		string gethoten(){
			return hoten;
		}
		float getdlt(){
			return dlt;
		}
		float getdth(){
			return dth;
		}
		void setmasv(int masv){
			this->masv=masv;
		}
		void sethoten(string hoten){
			this->hoten=hoten;
		}
		void setdlt(float dlt){
			this->dlt=dlt;
		}
		void setdth(float dth){
			this->dth=dth;
		}
/*		~SV(){
			if (a!=NULL) delete []a;    
			cout<<"\n Goi ham huy";
	*/	}
			
};
int main(){
	
	int n;
	SV a[100];
	SV sv1;
	sv1.sethoten("Hoan");
	
	cout<<"Nhap so SV:"; cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"\n MaSV\tHo ten\t\tDiem LT \tDiem TH \tDiem TB";
	cout<<sv1;
	for (int i=0;i<n;i++){
		cout<<a[i];	
	}
	
	
	
}
