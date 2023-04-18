#include <stdio.h>
#include<math.h>

float volume(float r, const double pi){
    float   volume = (4/3.0) * pi * pow(r,3);
return volume;
}

float  area(float r, const double pi){
float    area = 4 * pi * pow(r,2);
return area;
}

int main(){
   const double pi = 3.14159 ;
   float r;
   printf("Defina o valor do raio:");
   scanf("%f", &r);



  printf (" area= %.2f", area(r, pi));
  printf("\nvolume= %.2f", volume(r,pi));
}