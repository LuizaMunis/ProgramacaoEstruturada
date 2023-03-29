#include <stdio.h>
#include <string.h>


int main() {

    float valor, vt;
    char estado[2];

    printf("Digite o estado:");
    scanf("%s",&estado);


    printf("Digite o valor:");
    scanf("%f",&valor);

    if(strcmp(estado, "mg")==0){
        vt = valor + (valor*7)/100;
        printf("o valor total sera:%0.2f",vt);
    }
    else if (strcmp(estado, "sp")==0){
        vt = valor + (valor*12)/100;
        printf("o valor total sera:%0.2f",vt);
    }
    else if (strcmp(estado, "rj")==0){
        vt = valor + (valor*15)/100;
        printf("o valor total sera:%0.2f",vt);
    }
    else if (strcmp(estado, "ms")==0){
        vt = valor + (valor*8)/100;
        printf("o valor total sera:%0.2f",vt);
    }
    else printf("Invalido");

}