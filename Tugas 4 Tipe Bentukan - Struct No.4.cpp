#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	struct buah{
	string warna;
	float berat;
	int harga;
	string rasa;
};
	buah data_buah;

	data_buah.warna="merah";
	data_buah.berat=250.50;
	data_buah.harga=10000;
	data_buah.rasa="manis";
	
	cout<<"Warna buah : "<<data_buah.warna<<endl;
	cout<<"Berat buah : "<<data_buah.berat<<endl;
	cout<<"Harga buah : "<<data_buah.harga<<endl;
	cout<<"Rasa buah  : "<<data_buah.rasa<<endl;

return 0;
}
