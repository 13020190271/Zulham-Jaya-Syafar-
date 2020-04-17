#include<iostream>
using namespace std;

void tukar(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main(){
	int a;
	int b;
	cout<<"Masukkan bilangan 1 : "; cin>>a;
	cout<<"Masukkan bilangan 2 : "; cin>>b;
	cout<<"Sebelum ditukar\nbilangan 1 = "<<a<<"\nbilangan 2 = "<<b<<endl;
	tukar(&a,&b);
	cout<<"Setelah ditukar\nbilangan 1 = "<<a<<"\nbilangan 2 = "<<b<<endl;
	
	return 0;
}
