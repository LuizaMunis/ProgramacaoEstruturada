#include <stdio.h>
int main(){
   const double pi = 3.14159 ;
   float r, area, volume;

   printf("Defina o valor do raio:");
   scanf("%f", &r);

  volume = (4/3.0) * pi * pow(r,3);
  area = 4 * pi * pow(r,2);

  printf (" area= %.2f", area);
  printf("\nvolume= %.2f", volume);
}