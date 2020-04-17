#include <iostream>
using namespace std;
int main()
{
	int x=10;
	int *y =&x;
	
	cout<<"Nilai dari x  : "<< x <<endl;
	cout<<"Nilai dari &x : "<< &x <<endl;
	cout<<"Nilai dari y  : "<< y <<endl;
	cout<<"Nilai dari *y : "<< *y <<endl;
	
	return 0;
}
