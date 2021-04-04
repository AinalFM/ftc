#include <stdio.h>

int main(){

char jk;
int berat_badan, tinggi_badan;
float berat_badan_ideal;

printf("\n=====Program Menghitung berat badan ideal=====\n");

printf("Jenis kelamin (L / P): "); scanf("%c", &jk);
printf("Masukkan berat badan anda: "); scanf("%d", &berat_badan);
printf("Masukkan tinggi badan anda: "); scanf("%d", &tinggi_badan);

if(jk=='L')
berat_badan_ideal=((float)tinggi_badan - 100) -(((float)tinggi_badan-100)* 0.1);

else{
berat_badan_ideal=((float)tinggi_badan - 100) -(((float)tinggi_badan-100)* 0.15);
}

printf("Maka berat badan ideal anda adalah %.2f\n", berat_badan_ideal);
printf("\n=====Terimakasih atas partisipasinya=====\n");

return 0;
}
