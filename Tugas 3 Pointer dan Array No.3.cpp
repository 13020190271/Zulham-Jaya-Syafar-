#include<iostream>
using namespace std;

void susunan(int *q){
	int p[3][3]={{2,4,6},{8,10,12},{14,16,18}};	
	int x,y;
	int z=1;
	int *pa;
	pa=p;
	for(int a=0;a<=8;a++){
		cout<<(a+1)*2<<" ";
	}
	cout<<"\n";
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			cout<<"Nomor dus "<<z++<<" : "<<p[x][y]<<endl;
		}
	}
	cout<<q<<endl;
}

int main(){
	int p;
	cout<<"Jumlah dus = 9"<<endl;	
	cout<<"nomor dus = ";
	susunan(&p);
	cout<<&p;
}
