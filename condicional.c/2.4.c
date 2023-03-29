#include<stdio.h>
#include<math.h>

int main(){
    float salario, prestacao, porcentagem;

printf("Digite o salario:");
scanf("%f", &salario); 
fflush stdin;

printf("Digite a prestacao:");
scanf("%f", &prestacao);

porcentagem = salario*0.2;

if (prestacao<= porcentagem)
printf("Emprestimo concedido");

else printf("Emprestimo nao concedido");
}