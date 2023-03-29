#include <stdio.h>
int main(){
char nome[50], sobrenome[50];
int soma;

printf("Digite o primeiro nome:");
gets(nome);

printf("Digite o sobrenome:");
gets(sobrenome);

 soma= strlen(nome)+ strlen(sobrenome);

printf("%d",soma);
}