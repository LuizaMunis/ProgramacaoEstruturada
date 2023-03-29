#include<stdio.h>
#include<math.h>
int main(){

    float h, peso;
    char sexo;

    printf("Digite sua altura:");
    scanf("%f",&h);
    fflush stdin;

    printf("Digite seu sexo em f ou m:");
    scanf("%c", &sexo);

    if (sexo == 'f' || sexo =='F'){
     peso = (62.1*h)-44.7;
    }

    else if (sexo == 'm' || sexo =='M'){

    peso =(72.7*h)-58;
    }

    printf("Seu peso ideal e %.3f", peso);
}