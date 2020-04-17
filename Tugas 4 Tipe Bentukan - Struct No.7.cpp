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
	buah buah1, buah2;
		
	buah1.warna="Merah";
	buah1.berat=27.8;
	buah1.harga=10000;
	buah1.rasa="Asam";
	
	buah2=buah1;
	
	cout<<buah1.warna<<endl;
	cout<<buah1.berat<<endl;
	cout<<buah1.harga<<endl;
	cout<<buah1.rasa<<endl<<endl;
	
	cout<<buah2.warna<<endl;
	cout<<buah2.berat<<endl;
	cout<<buah2.harga<<endl;
	cout<<buah2.rasa<<endl;
}
