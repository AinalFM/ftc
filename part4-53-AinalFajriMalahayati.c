#include <stdio.h>

int main(){

int i, hasil;

hasil = 0;

for(i=1; i<=10; i++)
{
  hasil = hasil + i;
  if(i<10)
    printf("%d + ", i);
  else
    printf("%d = ", i);
}

printf("%d\n", hasil);
return 0;
}
