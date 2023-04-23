
#include<stdio.h>

int leitura(int n, int maior,int menor, int i){

	while (n > 0){
		
		if (n > maior)
			maior = n;

		if (n < menor)
			menor = n;

            i++; 
		scanf("%d", &n);		
		}
     printf("maior:%d  menor:%d", maior, menor);
	}

int main(){
	
	int n, maior = 0, menor = 1000, i=0;
	scanf("%d", &n);
	
leitura(n,menor,maior,i);
}
