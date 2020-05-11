#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

    string barang[20]={"Beras 10 Kg\t","Beras 5 Kg\t","Pocari Sweat 600 ml","Gulaku 1kg\t","Margarin 1kg\t","Kopi Kapal Api 150 g","Kopi Nescaffe 150 g","Minyak Bimoli 1.5L","Minyak Bimoli 1L","Aqua Air botol 600 ml","Aqua Air Galon\t","Susu Dancow 500 g","Susu Milo 150 g\t","Pop Mie goreng\t","Pop Mie Kuah\t","Poci Teh celup 2 g","Baygon Semprot 50 ml","Mie sedaap goreng ","Mie sedaap kuah soto","Tepung Beras 1 Kg"};
    int harga[20]={56,43,6,12,13,10,12,30,23,5,20,30,35,5,5,4,8,3,2,10};
    int jumlah;
    void listbarang(string barang[],int harga[]){
    cout<<"============================================================================\n";
    cout<<"  kode\t\t  barang\t\t\t harga\n";
    cout<<"============================================================================\n";
   for(int i=0;i<20;i++){
        cout<<" "<<i<<"\t\t"<<barang[i]<<"\t\tRp. "    <<harga[i]<<".000\t\t"<<" "<<endl;
   }
   cout<<"============================================================================\n";
   cout<<endl;
}

int belian(){
    ulang:
        int kode,jml,total;
    	char lagi;
        cout<<"Masukkan kode barang : ";
        cin>>kode;
        cout<<"Nama sembako \t: "<<barang[kode]<<endl;
        cout<<"Harga sembako \t: Rp. "<<harga[kode]<<".000"<<endl;
        cout<<"Banyak sembako yg dibeli = ";cin>>jml;
        total=jml*harga[kode];
        jumlah=jumlah+total;
        cout<<"total harga \t: Rp. "<<total<<".000"<< endl;
        cout<<"belanja lagi? (y/n) : ";
        cin>>lagi;
        cout<<endl;
    if(lagi=='Y' || lagi=='y'){
    	
   cout<<"----------------------------------------------------------------------------\n";
    	goto ulang;
	}else{cout<<endl;}
}

int main(){
    int pilih;
    cout<<"\t\t     Selamat Datang di Toko Sembako K13"<<endl;
    cout<<"\t\t         !!!!!!PASTI MURAH!!!!!!      "<<endl;
    cout<<"\t\t     ---------------------------------\n"<<endl;
    listbarang(barang,harga);
    belian();
    cout<<"============================================================================\n";
    cout<<"\n\tAnda membeli barang dengan jumlah di atas"<<endl;
    cout<<"\n\tTotal harga yang harus anda bayar adalah : ";
    cout<<"Rp. "<<jumlah<<".000"<<endl;
    cout<<"\n============================================================================\n";
    cout<<"\n=================Terima Kasih Sudah Berbelanja di Toko Kami=================\n";
}
