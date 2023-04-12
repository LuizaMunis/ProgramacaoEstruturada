#include<stdio.h>
#include<math.h>

int main(){
 float C, F, resultCelsius, resultFahr;

 printf("Digite quantos graus celsius:");
 scanf("%f",&C);

  printf("Digite quantos graus fahrenheit:");
 scanf("%f",&F);

resultCelsius= (F-32)*5/9;
resultFahr= (9* (C/5)+32);
 printf("Conversao de fahrenheit p Celsius %.2f\nConversao de celsius p Fahrenheit %.2f", resultCelsius, resultFahr);
}