#include<iostream>
using namespace std;
class Shape{
	protected:
		float width, height;
	public:

		void set_data(float a, float b){
			width=a;
			height=b;
		}
};

class Rectangle:public Shape{
	public:
		float cv(){
			return (width+height)/2;
		}
		
};

class Triangle:public Shape{
	public:
		float dt(){
			return (width+height)/2;
		}
};

int main(){
	Rectangle rect;
	rect.set_data(5.0,3.0);
	cout<<rect.cv()<<endl;
}
