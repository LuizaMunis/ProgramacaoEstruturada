#include<stdio.h>
int main(){
    char letras[30];
    int i=0;

    for(i=0;i<30;i++){
      printf("Digite:");
      scanf("%c",&letras[i]);
      fflush(stdin);
      
      if(letras[i]==0){
       printf("fim");continue;

      }
     }

    for(i=29;i>=0;i--){
      printf("%c",letras[i]);
    }
}