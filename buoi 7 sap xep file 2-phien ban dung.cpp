#include <iostream>
#include<vector>
#include<cstdlib> 
#include<math.h>
#include<fstream>
using namespace std;
int main()
{
	ifstream fi1("dl1.txt");
	ifstream fi2("dl2.txt");
	ofstream fo("kq.txt");
	if(fi1==NULL || fi2==NULL || fo==NULL)
		cout<<"loi ";
	else
	{
		int d1=0,d2=0,x,y;
		if(!fi1.eof()) {
			fi1>>x;
			d1=1;
		
		}
		if(!fi2.eof()) {
			fi2>>x;
			d2=1;
		}
			while(d1&&d2 )
		{		
			if(x<=y)
			{
				fo<<x<<" ";
				cout<<x<<" ";
				if(!fi1.eof()) 
					fi1>>x;
				else
					d1=0;
			}
			else
			{
				fo<<y<<" ";
				cout<<y<<" ";
				if(!fi2.eof()) 
					fi2>>y;
				else
					d2=0;
			}
		}		
		if(d1==1){
				fo<<x<<" ";
				cout<<x<<" ";
				
		}
		else	{
			fo<<y<<" ";
			cout<<y<<" ";
			
		}
		
		while( !fi1.eof())
		{
			fi1>>x;
			fo<<x<<" ";	
			cout<<x<<" ";	
		}
		while (!fi2.eof())
		{
			fi2>>y;
			fo<<y<<" ";
			cout<<y<<" ";
		}
	
	fi1.close();fi2.close();fo.close();
	}
}

