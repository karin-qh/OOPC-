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
			while(!fi1.eof() && !fi2.eof() )
		{
			if(d1==1) 
			{
				fi1>>x;
				d1=0;
			}
			if(d2==1) 
			{
				fi2>>y;
				d2=0;
			}
			if(x<=y)
			{
				fo<<x<<" ";
				d1=1;
			}
			else
			{
				fo<<y<<" ";
				d2=1;
			}
		}		
		if(d1==0)	fo<<x<<" ";
		else	fo<<y<<" ";
		
		while( !fi1.eof())
		{
			fi1>>x;
			fo<<x<<" ";		
		}
		while (!fi2.eof())
		{
			fi2>>y;
			fo<<y<<" ";
		}
	}
	fi1.close();fi2.close();fo.close();

	}

