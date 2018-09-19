#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector <int> a;
	vector <int>::iterator it;
	for (int i=1;i<10;i++) a.push_back(i);  //them vao sau
	cout<<"\n Noi dung vector:"; for (int i=0; i<a.size();i++) cout<<a.at(i)<<" ";
	a.pop_back();	a.pop_back(); //lay phan tu phia sau
	cout<<"\n Noi dung vector:"; for (int i=0; i<a.size();i++) cout<<a.at(i)<<" ";
	it=a.begin();
	a.insert(it+3,1000); //chen
	a.erase(it+5);  //xoa
	cout<<"\n Noi dung vector:"; for (int i=0;i<a.size();i++) cout<<a.at(i)<<" ";
}


Cho vector a chua n so nguyen. Hay xoa cac so k phai la so nguyen to ra khoi a
Cac buoc:
- Sinh ngau nhien n gia tri cho vao vector a
- Duyet vector a, ktra moi phan tu a(i) co phai la so nt hay k
