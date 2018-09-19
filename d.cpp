#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
bool snt(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return n > 1;
}
bool dx(int n) {
	int n1 = 0, tmp = n;
	while (tmp != 0) {
		n1 = n1*10 + tmp%10;
		tmp /= 10;
	}
	return n1 == n;
}
int main(){
	
	for(double i = 0;i < 99999; i++){
		if (snt(i) && dx(i) ) {
			cout<<i<<" ";
		}
	}
//	if (dx(13731)) {
//		cout<<"true";
//	}
}
