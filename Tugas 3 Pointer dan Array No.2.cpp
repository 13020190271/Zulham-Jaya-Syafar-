#include<iostream>
using namespace std;

void penjumlahan(int *jmlbil){			//Fungsi pointer penjumlahan
	int bilangan[100];					//variabel nama bilangan dengan batas 100 dengan tipe data integer 
	int jumlah=0;						//variabel dengan nama jumlah yang memiliki nilai 0 dengan tipe data integer
	for(int a=1;a<=*jmlbil;a++){		//Perulangan untuk menginput bilangan
		cin>>bilangan[a];
	}
	for(int a=1;a<=*jmlbil;a++){		//Perulangan untuk menjumlahkan bilangan yang diinput
		jumlah=jumlah+bilangan[a];
	}
	cout<<jumlah;						//menampilkan jumlah
}

int main(){
	int jmh;	//variabel dengan nama jmh dengan tipe data integer
	cout<<"Masukkan jumlah bilangan : ";
	cin>>jmh;							//menginput jumlah bilangan
	penjumlahan(&jmh);					//memanggil fungsi penjumlahan
	
	return 0;
}
