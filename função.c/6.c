#include<stdio.h>
#include<math.h>

int somatodos(int soma, int i){
      while (i <1000){
    if (i %3==0 || i %5 ==0){
    soma+=i;
    }
    i++;
}
printf("%d", soma);
}

int main (){
    int soma= 0, i=0;
somatodos(soma,i);
}
