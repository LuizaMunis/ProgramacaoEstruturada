#include<stdio.h>
#include<string.h>

int main(){
    char letras[30];
    int i;

 printf("Digite:");
 scanf("%s",&letras);

 for(i=srtlen(letras);i>0;i--){
  printf("%c", letras[i]);
 }
}