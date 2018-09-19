#include<iostream>
#include<stdlib.h>
using namespace std;

int main(int argc, char **argv){
	//cout<<"Xin chao\n";
	
	int max=atoi(argv[0]);	
	for (int i=1;i<argc;i++){
		cout<<argv[i]<<" ";
	 	if (atoi(argv[i])>max) max=atoi(argv[i]);
	}
	if (argc=1) cout<<"\nKhong tim so lon nhat!";
	else cout<<"\nSo lon nhat ="<<max;
}
