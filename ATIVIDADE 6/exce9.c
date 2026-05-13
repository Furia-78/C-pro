#include <stdio.h>

int main() {
    int a[5], b[5], c[5];
    int i;

    // Leia o vetor a
    printf("Digite os valores do vetor A:\n");
    for(i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Leia o vetor b
    printf("\nDigite os valores do vetor B:\n");
    for(i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &b[i]);
    }

    // Some os vetores
    for(i = 0; i < 5; i++) {
        c[i] = a[i] + b[i];
    }

    // Exiba o vetor c
    printf("\nVetor C (soma):\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}