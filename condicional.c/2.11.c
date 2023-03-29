#include <stdio.h>
#include <math.h>

int main (){

float x, y, z, resul, media;

printf ("Digite 3 numeros:");
scanf ("%f%f%f", &x, &y, &z);

printf ("Digite o numero da media desejada:");
scanf ("%f", &resul);


if (resul == 1){
media = y*x*z;
printf(" A media geometrica e %.2f", media);}

 else if (resul == 2){
media = ( x + (2*y)+ (3*z))/ 6;
printf(" A media ponderada e %.2f", media);}

else if (resul == 3){
media = 1/ (1/x)+(1/y)+(1/z);
printf ( "A media harmonica e %.2f", media);}

else if (resul == 4){
media = (x+y+z)/3;
printf (" A media aritmetica e %.2f", media);
}
}
