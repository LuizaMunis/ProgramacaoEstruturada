#include<stdio.h>
#include<math.h>

double celsiuskelvin(float c){
double k;
k =c+273.15;
return k;
}


int main(){
 float c;
 double k;
 scanf("%f",&c);

 k = celsiuskelvin(c); //os dados tem que ser do mesmo tipo

printf("%lf", k);
} 