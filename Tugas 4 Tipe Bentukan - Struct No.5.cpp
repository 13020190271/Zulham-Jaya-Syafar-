#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
	struct data_tanggal{
	int tanggal;
	int bulan;
	int tahun;
};

struct data_mahasiswa{
	char stambuk[11];
	char nama[30];
	char fakultas[30];
	data_tanggal tanggal_lahir;
};

data_mahasiswa mahasiswa, data_tanggal, tanggal_lahir;

return 0;
}
