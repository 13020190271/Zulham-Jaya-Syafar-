#include<iostream>
using namespace std;


int main(){
	int x,y,z;
	int dus[3][3]={{2,4,6},{8,10,12},{14,16,18}};	
	cout<<"Jumlah dus = 9"<<endl;
	cout<<"nomor dus = ";
	for(int a=0;a<=8;a++){
		cout<<(a+1)*2<<" ";
	}
	cout<<"\n";
	z=1;
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			cout<<"Nomor dus "<<z++<<" : "<<dus[x][y]<<endl;
		}
	}
}
