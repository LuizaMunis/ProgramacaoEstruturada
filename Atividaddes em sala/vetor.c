#include<stdio.h>
int main(){
    float n1[4],n2[4],media[4]; // vetor e para guardar as informaçoes
    int i;

    for(i=0;i<4:i++){
        scanf("%f%f", &n1[i], &n2[i]); //o indice para indicar onde vai alocar a variavel na memoria/vetor

        media[i]=(n1[i]+n2[i])/2;
        printf("%f", media[i]);


    }

    for(i=0;i<4:i++){
        printf("%2.f", n2[i])

    }
}