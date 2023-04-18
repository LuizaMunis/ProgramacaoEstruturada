#include <stdio.h>
#include <math.h>

float quadrante(float x, float y) {
    if (x == 0.0 && y == 0.0) {
        printf("Origem");
    } else if (x > 0 && y > 0) {
        printf("Q1");
    } else if (x < 0 && y > 0) {
        printf("Q2");
    } else if (x < 0 && y < 0) {
        printf("Q3");
    } else if (x > 0 && y < 0) {
        printf("Q4");
    }
return 0;
}

int main() {
    float x, y;

    printf("Digite dois numeros:");
    scanf("%f %f", &x, &y);

    quadrante(x, y);
} 
