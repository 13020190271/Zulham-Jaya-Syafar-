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
	buah buah1;
	
	buah1.warna="merah";
	buah1.berat=250.50;
	buah1.harga=10000;
	buah1.rasa="manis";
	
	cout<<"Warna buah : "<<buah1.warna<<endl;
	cout<<"Berat buah : "<<buah1.berat<<endl;
	cout<<"Harga buah : "<<buah1.harga<<endl;
	cout<<"Rasa buah  : "<<buah1.rasa<<endl;

return 0;
}
