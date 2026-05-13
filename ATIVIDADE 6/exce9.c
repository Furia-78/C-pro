#include <stdio.h>

int main() {
    int a[5], b[5], c[5];
    int i;

    printf("Digite os valores do vetor A:\n");
    for(i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nDigite os valores do vetor B:\n");
    for(i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &b[i]);
    }
    for(i = 0; i < 5; i++) {
        c[i] = a[i] + b[i];
    }
    printf("\nVetor C (soma):\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}