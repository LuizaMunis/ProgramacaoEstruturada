#include <stdio.h>
#include <math.h>

int main (){

int n1, div;

printf ("Digite um numero:");
scanf("%d", &n1);

printf ("Divisivel por 3 ou 5?");
scanf("%d", &div); 

switch (div)
{
case 3 : 
 if (n1 % 3 == 0)
 printf (" Divisivel");
 else printf (" Nao divisivel");break;

 case 5 : 
 if (n1 % 5 == 0)
 printf (" Divisivel");
 else printf (" Nao divisivel");break;

}}