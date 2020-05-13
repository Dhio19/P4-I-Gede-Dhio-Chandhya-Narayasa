#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main() { 
int matrix[3][3]; 
int transpose[3][3]; 
int i,j,baris,kolom; 
	
printf(" ==========PROGRAM TRANSPOSE MATRIKS========= \n"); 
printf("Jumlah Baris : "); 
scanf("%i",&baris); 
	
printf("Jumlah Kolom : "); 
scanf("%i",&kolom); 
printf("\n") ;

/* Input Nilai Matrik 3x3 */
for(i=0;i<baris;i++)
{ for(j=0;j<kolom;j++)
{ printf("Masukan Nilai Matriks [%d][%d] : ", i+1, j+1);
scanf("%d",&matrix[i][j]);
}
}
/* TRANSPOSE -> baris jadi kolom dan sebaliknya */ 
for (i=0;i<baris;i++) { 
	for (j=0;j<kolom;j++) {
transpose[j][i] = matrix[i][j]; } } 
/* TAMPILKAN MATRIK A */ 
printf("\nMatrik A [3x3]\n"); 
for (i=0;i<baris;i++) { 
for (j=0;j<kolom;j++) { 
printf("%5d",matrix[i][j]); 
} printf("\n"); 
} 
/* TAMPILKAN TRANSPOSE MATRIK A */ 
printf("\nMatrik A Transpose [3x3]\n"); 
for (i=0; i<baris; i++) { 
for (j=0; j<kolom; j++) { 
printf("%5d",transpose[i][j]); 
} 
printf("\n"); 
} 
}

