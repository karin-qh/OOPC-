#include<iostream>
#include<math.h>
using namespace std;
class Diem{
	int x,y;
	public:
	Diem(int x,int y){
		this->x=x;
		this->y=y;
	}	
	float kc(Diem b){
		return sqrt(pow(this->x-b.x,2)+pow(this->y-b.y,2));
	}
};
int main(){
	Diem a(3,7), b(8,5);
	cout<<"\n Khoang cach giua a va b la: "<<a.kc(b);
}

