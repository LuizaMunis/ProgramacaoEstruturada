
#include<stdio.h>

int leitura(int n, int maior)

int main(){
	
	int n, maior = 0, menor = 1000, i=0;
	
	scanf("%d", &n);
	
	while (n > 0){
		
		if (n > maior)
			maior = n;
		if (n < menor)
			menor = n;
            i++; 
				
		scanf("%d", &n);

		}


	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);

}
