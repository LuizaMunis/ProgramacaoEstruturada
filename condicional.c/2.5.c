#include<stdio.h>
#include<math.h>
int main(){

int n, quadrado, raiz;

printf("Digite um numero:");
scanf("%d", &n);

if(n>0){
    quadrado = pow(n,2);
    raiz = sqrt(n);

printf("Elevado ao quadrado: %d\n raiz quadrada: %d", quadrado, raiz);
}
 else printf("Digite um numero positivo");

}