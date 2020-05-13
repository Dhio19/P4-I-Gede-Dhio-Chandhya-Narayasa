#include<stdio.h>
#include<conio.h>
main()
{
    int matrix1[2][2],matrix2[2][2],i,j;
    printf("MATRIX1\n");
    for(i=1;i<=2;i++){
    for(j=1;j<=2;j++){ 
    printf("Elemen[%d][%d]: ",i,j); 
    scanf("%d",&matrix1[i][j]);
}
}
printf("\nMATRIX2\n");
for(i=1;i<=2;i++){ 
for (j=1;j<=2;j++){ 
printf("Elemen[%d][%d]: ",i,j); 
scanf("%d",&matrix2[i][j]);
}
}
printf("\nHASIL PENJUMLAHAN\n\n");
for(i=1;i<=2;i++){
for( j=1;j<=2;j++)
printf("%d\t",matrix1[i][j]+matrix2[i][j]); 
printf("\n");}
getch();
}

