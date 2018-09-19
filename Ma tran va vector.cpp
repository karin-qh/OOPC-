#include <iostream>
#include<vector>
#include<cstdlib> 
#include<math.h>
#include<fstream>
using namespace std;
int main()
{
	ifstream fi("dl3.txt");
	ofstream fo("kq.txt");
	
	if(fi==NULL || fo==NULL)
		cout<<"Loi";
	else
	{
		int **a,m,n;
		fi>>m>>n; //doc 2 so m,n
		a=new int*[m];
		for (int i=0;i<m;i++)
			a[i]=new int [n];
		
		for (int i=0;i<m;i++)
			for (int j=0;j<n;j++) fi>>a[i][j]; 	//truyen phan tu vao a[i][j]
			
		
		//Tinh tong dong
		for (int i=0;i<m;i++){
			int tong=0;
			for (int j=0;j<n;j++) {
				tong =tong+a[i][j];
			}
			
			fo<<"Tong dong "<<i+1<<"="<<tong<<endl; //ghi vao file "kq.txt"
		}	
		
		//In ra man hinh de ktra
		cout<<"\n";
		for (int i=0;i<m;i++){
			int tong=0;
			for (int j=0;j<n;j++) {
				tong =tong+a[i][j];
			}
			
			cout<<"Tong dong "<<i+1<<"="<<tong<<endl; 
		}

	
		fo.close(); //dong file
		cout<<"\n DA GHI XONG FILE \n";
	}
}

