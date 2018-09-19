#include <iostream>
#include<vector>
#include<cstdlib> 
#include<math.h>
using namespace std;

int kt(int n)
{
	int kt=1;
		for(int i =2;i<sqrt(n);i++)
		if(n%i==0)
			kt = 0;
	return kt;
}		
int main(){
	vector <int> a;
	vector <int>::iterator it;
	//int n;
	//cout<<"nhap: "; cin>>n;
	for(int i=1;i<20;i++)	
		a.push_back(i); // them vao sau // hoac 	a.push_back(rand()%100;
	cout<<"\n noi dung vector: ";
	for(int i=0;i<a.size();i++) 
		cout<<a.at(i)<<"\t";
	it=a.begin();
	for(int i=0;i<a.size();) 
		if(!kt(a[i]))
			a.erase(it+i);
		else 
			i++;
	cout<<"\n noi dung vector: ";
	for(int i=0;i<a.size();i++) 
		cout<<a.at(i)<<"\t";
	
}
	
