#include <stdio.h>

int main() {
    float notas[50];
    int i=0, alunos;

    printf("Digite quantos alunos a turma tem:");
    scanf("%d",&alunos);

    for (i=0;i<alunos;i++) {
        do {
            printf("Digite a nota do %dº aluno: ",i+1);
            scanf("%f",&notas[i]);

            if (notas[i]<0) {
            printf("A nota nao pode ser um valor negativo.\n");
            }

        } while (notas[i]<0);
    }

    for (i=0;i<alunos;i++) {
    printf("A nota do %d aluno e: %.2f\n",i+1,notas[i]);
    }
}