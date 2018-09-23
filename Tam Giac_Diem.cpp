#include<iostream>
#include<math.h>
using namespace std;
class Point{
	int x,y;
	public:
		Point(){
			x=0;
			y=0;
		}
		Point(int x,int y){
			this->x=x;
			this->y=y;
		}
		void input(){
			cout<<"\n Input x: "; cin>>x;
			cout<<" Input y: "; cin>>y;
		}
		void output(){
			cout<<"("<<x<<","<<y<<")";
		}
		float kc(Point b){
			return sqrt(pow(this->x-b.x,2)+pow(this->y-b.y,2));
		}
		void setx(int k){
			x=k;
		}
		void sety(int k){
			y=k;
		}
		int getx(){
			return x;
		}
		int gety(){
			return y;
		}	
};
class TG{
	Point d1,d2,d3;
	public:
		void input(){
			cout<<"\nInput d1: "; d1.input();
			cout<<"\nInput d2: "; d2.input();
			cout<<"\nInput d3: "; d3.input();
		}
		void output(){
			cout<<"\n";
			d1.output();
			d2.output();
			d3.output();
		}
		float dt(){
			float a,b,c,p;
			a=d1.kc(d2);
			b=d2.kc(d3);
			c=d3.kc(d1);
			p=(a+b+c)/2;
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}
		void ttx(int k){ //Tinh tien tam giac sang x
			d1.setx(d1.getx()+k);
			d2.setx(d2.getx()+k);
			d3.setx(d3.getx()+k);
		}
};

int main(){
	TG m;
	m.input();
	m.output();
	cout<<"\nDien tich tam giac= "<<m.dt();
	m.ttx(5);
	m.output();
	cout<<"\nDien tich tam giac= "<<m.dt();
		
}
