#include<iostream>
using namespace std;

void kuadrat(int *b){	//fungsi pointer kuadrat
	*b=(*b) * (*b);
}

int main(){
	int a = 5;
	cout<<"nilai a = "<<a<<endl;	//menamplkan nilai a sebelum fungsi kuadrat dipanggil
	kuadrat(&a);	//memanggil fungsi pointer kuadrat
	cout<<"nilai a = "<<a<<endl;	//menamplkan nilai a setelah fungsi kuadrat dipanggil
	
	return 0;
}
