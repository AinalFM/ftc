#include <stdio.h>

int main(){

int usia;
char nama, prodi;

printf("\n-----Biodata mahasiswa-----\n");

printf("Nama: "); scanf("%[^\n]", &nama);
printf("Usia: "); scanf("%d", &usia);
printf("Prodi: "); scanf("%s", &prodi);

printf("\n-----Terimakasih telah mengisi biodata mahasiswa-----\n");

return 0;
}
