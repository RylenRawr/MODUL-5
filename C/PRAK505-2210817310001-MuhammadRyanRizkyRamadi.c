#include <stdio.h>
void Biodata(int tahun, char nama[20], char asal[15] ){
    printf("Perkenalkan Nama Saya: %s\n", nama);
    printf("Umur Saya: %d\n", 2020 - tahun);
    printf("Saya Adalah Angkatan: 2020\n");
    printf("Asal Saya Dari: %s\n\n", asal);
}

int main(){
    int tahunLahir, i = 0;
    char A[20], B[15];
        scanf(" %d",&tahunLahir); 
        scanf(" %[^\n]%*c",&A);
        scanf(" %[^\n]%*c",&B);
        Biodata(tahunLahir, A, B);
    return 0;
}