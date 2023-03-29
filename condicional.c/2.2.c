#include<stdio.h>
#include<math.h>

int main(){

int n1, n2;

printf("Digite dois numeros");
scanf("%d%d", &n1, &n2);

if (n1>n2)
printf("%d é maior", n1);

if (n1<n2)
printf("%d é maior", n2);

else if(n1 == n2)
printf("Sao iguais");
}