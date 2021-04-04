#include <stdio.h>

int main(){

int massa_benda;
float gaya_gravitasi;

printf("\n-----Program menghitung gaya gravitasi dari suatu benda-----\n");
printf("Masukkan massa benda: "); scanf("%d", &massa_benda);
gaya_gravitasi = (float) massa_benda * 9.8;

printf("Maka besar gaya gravitasi dari benda tersebut adalah %.2f", gaya_gravitasi);

return 0;
}
