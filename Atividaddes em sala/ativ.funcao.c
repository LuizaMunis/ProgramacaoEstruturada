#include<stdio.h>
#include<math.h>

double valorc(double k, double f){
    double c;
    c=k-f+273.15;
    return c;
}


int main(){
double f,c,k;

scanf("%lf",&k);
scanf("%lf",&f);
c=valorc(k,f);

printf("%lf", c);

}  