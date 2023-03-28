#include <stdio.h>
int main (){
int tamanho;
char palavra[100];

printf("Digite uma palavra:");
fgets (palavra,100,stdin);
fflush stdin;

tamanho = strlen(palavra)-1;

printf("a palavra tem %d letras", tamanho);

}