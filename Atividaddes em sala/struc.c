//Desenvolva um programa em C utilizando registro (struct) que permita a

//entrada de nome, endereço e telefone de 3 pessoas e os imprima ao final.




#include<stdio.h>




struct tipoDadoPessoa {//tipo de dado complexo

char nome[20];

 char endereco[20];

 char telefone[20];

char email[20];

};




struct tipoDadoPessoa preencherStruct(struct tipoDadoPessoa simplesPessoas){

//usando variável simples

 printf("Nome: ");

fgets(simplesPessoas.nome, 20, stdin);

printf("Endereco: ");

 fgets(simplesPessoas.endereco, 20, stdin);

printf("Telefene: ");

fgets(simplesPessoas.telefone, 20, stdin);
 return simplesPessoas;

}

void imprimirDados(struct tipoDadoPessoa simplesPessoas){
printf("%s\n", simplesPessoas.nome);

 printf("%s\n", simplesPessoas.endereco);

printf("%s\n", simplesPessoas.telefone);

printf("%s\n", simplesPessoas.email);

}



int main(){

struct tipoDadoPessoa simplesPessoas;
 simplesPessoas = preencherStruct(simplesPessoas);
imprimirDados(simplesPessoas);
 
}