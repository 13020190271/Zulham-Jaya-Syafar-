#include<iostream> 
using namespace std;

int main (){
   int  x;    //variabel x
   int  *px;    //pointer ke variabel
   int  **ppx;    //pointer ke pointer
   
   x = 100;    //nilai variabel x = 100
   px = &x;    //px mengambil nilai dari alamat x
   ppx = &px;    //ppx mengambil nilai dari alamat px

    cout<<"Nilai dari x   = "<<x<<endl;    //menampilkan nilai dari x
    cout<<"Nilai dari px  = "<<*px<<endl ;    //menampilkan nilai dari px
    cout<<"Nilai dari ppx = "<< **ppx;    //menampilkan nilai dari ppx

   return 0;
}
