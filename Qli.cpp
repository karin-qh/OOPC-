#include<iostream>
using namespace std;
class info{
	protected:
		int id;
		string name,se,phone;		
	public:	
	
		info(){
			id=0;
			name=se=phone="null";
		}
		info(int i, string n, string s, string p){
			id=i;
			name=n;
			se=s;
			phone=p;
		}
		void input(){
				cout<<" ID: "; cin>>id;
				fflush(stdin);
				cout<<" Name: "; getline(cin,name);
				cout<<" Se: "; cin>>se;
				cout<<" Phone: "; cin>>phone;		
		}		
		
		void output(){
				cout<<id<<"\t"<<name<<"\t"<<se<<"\t"<<phone;
		}
};

class teacher: public info{
	protected:
		string bc,cn;
	public:
		teacher():info(){
			bc=cn="null";
		}
		teacher(int i, string n, string s, string p, string b, string c):info(i,n,s,p){
			bc=b;
			cn=c;
		}
		void input(){
			info::input();
			cout<<" Bang cap: "; cin>>bc;
			cout<<" Chuyen nganh: "; cin>>cn;
		}
		void output(){
			info::output();
			cout<<"\t"<<bc<<"\t"<<cn<<endl;
		}	
		
};

class student: public info{
	protected:
		string clas,kh;
	public:
		student():info(){
			clas=kh="null";
		}
		student(int i, string n, string s, string p, string c, string k):info(i,n,s,p){
			clas=c;
			kh=k;
		}
		void input(){
			info::input();
			cout<<" Class: "; cin>>clas;
			cout<<" Khoa: "; cin>>kh;
		}
		void output(){
			info::output();
			cout<<"\t"<<clas<<"\t"<<kh<<endl;
		}	
		
};


int main(){
	
/*	teacher a(1,"Hoa","Nu","0122456789","Tien si","CNTT");
	student b(1,"Hoang","Nam","0188987654","CMUTMT","K23");
	cout<<"Info Techer:\nID\tName\tSe\tPhone\t\tBangCap\tChuyenNganh"<<endl;
	a.in();
	cout<<"\nInfo Student:\nID\tName\tSe\tPhone\t\tClass\tKhoa"<<endl;
	b.in();*/
	
	
	int n1,n2;
	teacher a[100];
	cout<<"Number teacher:"; cin>>n1;
	for (int i=0;i<n1;i++){
		a[i].input();	
	}
	cout<<"\nInfo Techer:\nID\tName\tSe\tPhone\t\tBangCap\tChuyenNganh"<<endl;
	for (int i=0;i<n1;i++){
		a[i].output();	
	}
	
	student b[100];
	cout<<"Number student: "; cin>>n2;
	for (int i=0;i<n2;i++){
		b[i].input();	
	}
	cout<<"\nInfo Student:\nID\tName\tSe\tPhone\t\tClass\tKhoa"<<endl;
	for (int i=0;i<n2;i++){
		b[i].output();	
	}
	
}
