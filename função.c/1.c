#include <stdio.h>

int diferenca(int A, int B, int C, int D) {
    int diferenca = (A * B) - (C * D);
    return diferenca;
}

int main() {
    int A, B, C, D;

    printf("Digite quatro numeros inteiros:");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    printf("%d * %d - %d * %d\n", A, B, C, D);
    printf("A diferença e: %d\n", diferenca(A, B, C, D));

    return 0;
} 