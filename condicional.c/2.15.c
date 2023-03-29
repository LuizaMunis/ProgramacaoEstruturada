
#include <stdio.h>
int main (){

int semana;

printf("Digite o dia:");
scanf("%d", &semana);

switch (semana)
{
case 1: printf ("Domingo"); break;    
case 2: printf ("Segunda"); break;
case 3: printf ("Terca"); break;
case 4: printf ("Quarta"); break;
case 5: printf ("Quinta"); break;
case 6: printf ("Sexta"); break;
case 7: printf ("Sabado"); break;
default: printf ("invalido"); break;
}}

