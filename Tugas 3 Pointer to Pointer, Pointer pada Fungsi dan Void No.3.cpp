#include<iostream>
using namespace std;

void fungsi(int *b){	//fungsi dengan pointer
	cout<<"Alamat b = "<<b<<endl;	//menampilkan alamat dari b
	cout<<"Nilai b = "<<*b<<endl;	//menampilkan nilai dari b
}

int main(){
	int a=5;	//nilai variabel a = 5
	cout<<"Alamat a = "<<&a<<endl;	//menampilkan alamat dari a
	cout<<"Nilai a = "<<a<<endl;	//menampilkam nilai dari a
	fungsi(&a);	//memamnggil fungsi pointer
	
	return 0;
}
