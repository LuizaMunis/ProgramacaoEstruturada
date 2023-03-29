#include <stdio.h>
#include <string.h>
int main(){
char nome[50], sobrenome[50];
int soma;

printf("Digite o primeiro nome:");
gets(nome);

printf("Digite o sobrenome:");
gets(sobrenome);

 soma= strlen(nome)+ strlen(sobrenome);

 if(strlen(nome)>strlen(sobrenome))
 printf("%s e maior ", nome);

if(strlen(nome)< strlen(sobrenome))
 printf("%s e maior ", sobrenome);

if(strlen(nome) == strlen(sobrenome))
printf("Iguais ");

}