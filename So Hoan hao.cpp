#include<iostream>
using namespace std;
int n;
bool ktSHH(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if (n % i == 0)
            sum += i;
    }

    if(sum == n)
        return true;

    return false;
}
void SHH(){
	for (int i=1;i<=n;i++){
		if (ktSHH(i)==true)
			cout<<i<<"\t";

	}
}
int main(){
	cout<<"Nhap n: "; cin>>n;
	SHH();
}
