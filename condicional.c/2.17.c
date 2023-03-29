#include <stdio.h>
#include <math.h>
int main (){
float n1, n2;
char calc;

printf("Digite a operacao:");
scanf("%c", &calc);

printf("Digite os numeros:");
scanf("%f%f", &n1, &n2);
switch (calc)
{

case '+': printf ("Resultado: %f", n1 + n2); break;
case '-': printf("Resultado: %f", n1 - n2); break;
case '*': printf("Resultado: %f", n1 * n2); break;
case '/': printf("Resultado: %f", n1 / n2); break;
case 'p': printf("Resultado: %.1f", pow (n1,n2) ); break;
case 'v': printf("Resultado: %f", sqrt(n1)); break;
default: printf ("Operador invalido"); break;
}
}