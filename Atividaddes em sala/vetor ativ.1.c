#include <stdio.h>

int main(){

    int n1[5], n2[5], soma[5],i;
   

   for(i=0; i<5; i++){
   printf("Digite o numero 1:" );
   scanf("%d", &n1[i]);

    printf("Digite o numero 2:");
   scanf("%d", &n2[i]);
    
    soma[i]=n1[i]+n2[i];
    }

    for(i=0; i<5; i++){

        if (soma[i] % 2 ==0)
        printf("%d + %d = %d -Par  \n", n1[i], n2[i], soma[i]);

        else printf("%d + %d = %d -impar \n", n1[i], n2[i], soma[i]);

    }

 

}