#include <stdio.h>
int main(){

int numeroint;
float numeroreal1;
double numeroreal2;
char letra,  palavra [20];
 
printf(" Digite um numeiro inteiro: ");
scanf("%d",&numeroint);

printf(" Digite um numero real: ");
scanf("%f",&numeroreal1);
fflush (stdin);

printf(" Digite um numero real com duas casas: ");
scanf("%lf",&numeroreal2);
fflush(stdin);

printf(" Digite uma letra: ");
scanf("%c",&letra);
fflush(stdin);

printf(" Digite uma palavra:");
fgets(palavra,20,stdin);
fflush(stdin);

printf("\n Numeros reais: %d\n", numeroint);
printf(" Os numeros reais sao:\n %.1f\n %.3lf\n", numeroreal1,numeroreal2);
printf(" Letra: %c\n", letra);
printf(" Palavra: %s\n", palavra);
printf("Endereco: %x", &numeroint ); 
}