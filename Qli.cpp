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
};

class teacher: public info{
	protected:
		string bc,cn;
	public:
		teacher(){
			id=0;
			name=se=phone=bc=cn="null";
		}
		teacher(int i, string n, string s, string p, string b, string c){
			id=i;
			name=n;
			se=s;
			phone=p;
			bc=b;
			cn=c;
		}
		void in(){
			cout<<id<<"\t"<<name<<"\t"<<se<<"\t"<<phone<<"\t"<<bc<<"\t"<<cn<<endl;
		}	
		
};

class student: public info{
	protected:
		string clas,kh;
	public:
		student(){
			id=0;
			name=se=phone=clas=kh="null";
		}
		student(int i, string n, string s, string p, string c, string k){
			id=i;
			name=n;
			se=s;
			phone=p;
			clas=c;
			kh=k;
		}
		void in(){
			cout<<id<<"\t"<<name<<"\t"<<se<<"\t"<<phone<<"\t"<<clas<<"\t"<<kh<<endl;
		}	
		
};
int main(){
	
	teacher a(1,"Hoa","Nu","0122456789","Tien si","CNTT");
	student b(1,"Hoang","Nam","0188987654","CMUTMT","K23");
	cout<<"Info Techer:\nID\tName\tSe\tPhone\t\tBangCap\tChuyenNganh"<<endl;
	a.in();
	cout<<"\nInfo Student:\nID\tName\tSe\tPhone\t\tClass\tKhoa"<<endl;
	b.in();
}
