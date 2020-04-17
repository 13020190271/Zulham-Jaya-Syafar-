#include<iostream>
using namespace std;

int main(){
	int x;	//variabel x
	int *p;	//cara mengakses pointer itu dengan cara menambah '*' di awal variabel / tipe_data *nama_variabel
	
	x=100;	//nilai dari a x = 100
	p=&x;	//p mmengambil alamat dari x
	cout<<"Nilai x  = "<<x<<endl;	//menampilkan nilai x
	cout<<"Alamat x = "<<&x<<endl;	//manampilkan alamat x
	cout<<"Nilai p  = "<<*p<<endl;	//menampilkan nilai p
	cout<<"Alamat p = "<<p;	//menampilkan alamat p
	
	return 0;
}
