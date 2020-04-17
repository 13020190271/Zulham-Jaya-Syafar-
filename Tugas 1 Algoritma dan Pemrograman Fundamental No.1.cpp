#include <iostream>
using namespace std;

int main()
{
	int jumlah_bilangan;
	int bilangan[100];
	int jumlah=0;
	cout<<"Jumlah Bilangan : ";
	cin>>jumlah_bilangan;
	for(int a=1;a<=jumlah_bilangan;a++){
		cin>>bilangan[a];
	}
	for(int a=1;a<=jumlah_bilangan;a++){
		jumlah=jumlah+bilangan[a];
	}
	cout<<"Hasil Penjumlahan : "<<jumlah;
}
