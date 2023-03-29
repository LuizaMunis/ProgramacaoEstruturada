#include <stdio.h>
#include <math.h>

int main (){
float h, peso;

printf("Digite sua altura:");
scanf("%f", &h);

printf("Digite sua peso:");
scanf("%f", &peso);

if(h < 1.20 && peso <= 60)
 printf("A");
  
  if (h<1.20 && peso >=60 && peso<=90)
     printf("D");
   
     if (h<1.20 && peso>90)
      printf("G");

if (h>1.20 && h<1.70 && peso<=60)
     printf("B");
  
    if(h>1.20 && h<1.70 && peso >=60 && peso<=90)
     printf("E");
   
    if (h>1.20 && h<1.70 && peso>90)
     printf("H");

if(h > 1.70 && peso <= 60)
 printf("C");
  
  if (h>1.70 && peso >=60 && peso<=90)
     printf("F");
   
    if (h>1.70 && peso>90)
      printf("i");
}