#include<stdio.h>
int main(){
    char letra[30];
    int i=0, quant_letras;

    do
    {
    printf("Digite quantas letras quer digitar:");
    scanf("%d",&quant_letras);
    fflush (stdin);
    } while (quant_letras<0 && quant_letras<30);
    
    for (i=0;i<quant_letras; i++)
    {
      printf("Digite uma letra:");
      scanf("%c",&letra[i]);
      fflush (stdin);
    }
    
    for(i=0;i<quant_letras; i--){
        printf("%c ", i letra[i]);
    }
}