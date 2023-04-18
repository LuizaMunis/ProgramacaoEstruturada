#include<stdio.h>
#include<math.h>

int divisor(int n1, int i){
    while (i<= n1){
if (n1 %i ==0){
    printf("%d ", i);}
    i++;}

}

int main (){
    int n1, i = 1;

printf("Digite um numero:");
scanf("%d", &n1);

divisor(n1, i);
}