#include <iostream>
using namespace std;
main()
{
	int n = 23343;
	char A = itoa(n, 10);
	for(int i  0; i < 7; i ++)
		cout << A[i];
}
