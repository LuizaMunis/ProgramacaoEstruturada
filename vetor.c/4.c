#include<stdio.h>
int main(){

    int n[6];
    int i, verificar, posicao[6], contador=0;

    for(i=0;i<6;i++){
        printf("DIGITE UM NUMERO: ");
        scanf("%d",&n[i]);
        //n[i]=i*5;
    }

    printf("DIGITE O NUMERO QUE QUER:");
    scanf("%d",&verificar);

    for(i=0;i<6;i++){
        if(verificar==n[i]){
        posicao[contador]=i;
        contador++;
        }
    }
    printf("O numero %d aparece: %d vezes \n", verificar, contador);
    for(i=0;i<contador;i++){
        printf("Posicao: %d\n", posicao[i]);
    }

}