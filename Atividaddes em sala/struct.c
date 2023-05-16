#include<stdio.h>

struct Aluno{
    char nome[20];
    char telefone[20];
    char cpf[11];
    double money;
};

struct Professor{
    char nome[20];
    char telefone[20];
    char cpf[11];
    double moneyforme;
};

int main(){

    struct Aluno aluno1;
    struct Professor Professor1;

   int i;
   struct Aluno listaAlunosVetor[4]; 
   struct Aluno listaAlunosMatriz[2][2];                                                                                                                                                                                                                                                                                                                                                                                 

    printf("Digite o nome do aluno");
    scanf("%s",&aluno1.nome);
    printf("Digite o cpf do aluno");
    fgets(aluno1.cpf, 11,stdin);
    printf("Digite o telefone do aluno");
    gets(aluno1.telefone);
    printf("Digite o valor disponivel");
    scanf("%lf",aluno1.money);

    printf("Digite o nome do professor");
    scanf("%s",Professor1.nome);
    printf("Digite o cpf do professor");
    fgets(Professor1.cpf, 11,stdin);
    printf("Digite o telefone do aluno");
    gets(Professor1.telefone);
    printf("Digite o valor disponivel");
    scanf("%lf",Professor1.moneyforme);

    for (i=0;i<50;i++){
        printf("Digite o nome do aluno");
        fgets(aluno1[i].nome,20,stdin);
    }
    
    for(i=0;i<2;i++);{
      for(j=0;j<2;j++);{
        
      }
      }
}
