#include <stdio.h>

int main() {
    float notas[30];
    int i=0;

    for (i=0;i<30;i++) {
        do {
            printf("Digite a nota do %dº aluno: ",i+1);
            scanf("%f",&notas[i]);

            if (notas[i]<0) {
            printf("A nota nao pode ser um valor negativo.\n");
            }

        } while (notas[i]<0);
    }

    for (i=0;i<30;i++) {
    printf("A nota do %dº aluno é: %.2f\n",i+1,notas[i]);
    }
}