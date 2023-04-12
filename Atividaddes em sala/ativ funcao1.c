#include<stdio.h>
#include<math.h>
float graus(float C){
    int result1;
result1= (9* (C/5)+32);  

return result1;

}
int main(){
 float C;

 printf("Digite quantos graus celsius:");
 scanf("%f",&C);


 printf("Conversao de celsius p Fahrenheit %.2f", graus(C) );
}