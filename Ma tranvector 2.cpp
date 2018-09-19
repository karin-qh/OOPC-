#include <iostream>
#include<vector>
#include<cstdlib> 
#include<math.h>
#include<fstream>
using namespace std;
int main()
{
	ifstream fi("dl3.txt");
	ofstream fo("kq3_2.txt");
	
	if(fi==NULL || fo==NULL)
		cout<<"Loi";
	else
	{
		int m,n;
		
		vector <vector <int> > a;
				
		fi>>m>>n; //doc 2 so m,n
				
		for (int i=0;i<m;i++){
			vector <int> x;
			for (int j=0;j<n;j++) {
				int t; 
				fi>>t;
				x.push_back(t); 		
			}	
			a.push_back(x);
		}
		
		
		
		//Tinh tong dong
		for (int i=0;i<m;i++){
			int sum=0;
			for (int j=0;j<n;j++) {
				sum+=+a[i][j];
			}
			
			fo<<"Tong dong "<<i+1<<"="<<sum<<endl; //ghi vao file "kq3_2.txt"
		}	

		fo.close(); //dong file
		cout<<"\n DA GHI XONG FILE \n";
	}
}

