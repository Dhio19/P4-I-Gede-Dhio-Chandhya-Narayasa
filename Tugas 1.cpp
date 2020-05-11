#include <stdio.h>
#include <conio.h>
using namespace std;

    char barang[20][30]={"Beras 10 Kg\t","Beras 5 Kg\t","Pocari Sweat 600 ml","Gulaku 1kg\t","Margarin 1kg\t","Kopi Kapal Api 150 g","Kopi Nescaffe 150 g","Minyak Bimoli 1.5L","Minyak Bimoli 1L","Aqua Air botol 600 ml","Aqua Air Galon\t","Susu Dancow 500 g","Susu Milo 150 g","Pop Mie goreng\t","Pop Mie Kuah\t","Poci Teh celup 2 g","Baygon Semprot 50 ml","Mie sedaap goreng ","Mie sedaap kuah soto","Tepung Beras 1 Kg"};
    int harga[20]={56,43,6,12,13,10,12,30,23,5,20,30,35,5,5,4,8,3,2,10};
    int jumlah;
void listbarang(){
    printf("================================================================\n");
    printf("  kode\t\t  barang\t\tharga\n");
    printf("================================================================\n");
   for(int i=0;i<20;i++){
        printf(" %d\t\t %s",i,barang[i]);printf("\t\tRp. %d.000\t\t\n",harga[i]);
   }
   printf("================================================================\n");
   getch;
}

int belian(){
    int kode,jml,total;
    char lagi;
    ulang:
        printf("Masukkan kode barang : ");
        scanf("%i",&kode);
        printf("Nama sembako \t: %s\n",barang[kode]);
        printf("Harga sembako \t: Rp. %d.000\n",harga[kode]);
        printf("Banyak sembako yg dibeli = ");scanf("%d",&jml);
        total=jml*harga[kode];
        jumlah=jumlah+total;
        printf("total harga \t: Rp. %d.000\n",total);
        printf("belanja lagi? (y/n) : ");
        scanf("%s",&lagi);
    if(lagi=='Y' || lagi=='y'){
    	
   printf("----------------------------------------------------------------\n");
    	goto ulang;
	}else{}
}

int main(){
    printf("\n\t\t     Selamat Datang di Toko Sembako K13\n");
    printf("\t\t         !!!!!!PASTI MURAH!!!!!!      \n");
    printf("\t\t     ---------------------------------\n\n");
    listbarang();
    belian();
    printf("=================================================================\n");
    printf("\n\tAnda membeli barang dengan jumlah di atas\n");
    printf("\n\tTotal harga yang harus anda bayar adalah : ");
    printf("Rp. %d.000\n",jumlah);
    printf("\n\tTerimakasih telah berbelanja di toko kami.");
    printf("\n=================================================================\n");
}
