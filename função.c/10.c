#include <stdio.h>
int main(){

float n, i=0,soma=0;
float media;

for(i=0; i<10; i++){
    printf("Digite um numero:");
    scanf("%f",&n);
soma+=n;
}
media=soma/i;
printf("a media e %.1f:", media);
}