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

	buah apel;
	apel.warna="merah";
	apel.berat=250.50f;
	apel.harga=10000;
	apel.rasa="manis";
	
	cout<<apel.warna<<endl;
	cout<<apel.berat<<endl;
	cout<<apel.harga<<endl;
	cout<<apel.rasa<<endl;
		
	return 0;
}
