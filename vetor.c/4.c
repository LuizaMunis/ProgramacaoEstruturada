#include<stdio.h>
#include<string.h>
int main(){

    int n[80];
    int i=0, verificar, posicao[80], contador=0,i2;
    char opcao[3];


       do{
          printf("DIGITE UM NUMERO: ");
          scanf("%d",&n[i]);
          i++;
          printf("Voce quer digitar mais um numero? ");
          gets (opcao);
        }while(strcmp (opcao,"sim")==0 && i<80);
 
      i2=i
    for(i=0;i<i2;i++){
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
