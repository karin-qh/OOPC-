#include <iostream>
#include<vector>
#include<cstdlib> 
#include<math.h>
#include<fstream>
using namespace std;
int main()
{
	ifstream fi("dl.txt");
	ofstream fo("kq.txt");
	if(fi==NULL || fo==NULL)
		cout<<"loi ";
	else
	{
		int x, t=0;
		while(!fi.eof())
		{
			fi>>x;
			t=t+x;
		}
	fo<<"tong: "<<t;
	cout<<"tong: "<<t;
	}
	fi.close();fo.close();
	
}
