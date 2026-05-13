#include <stdio.h>

int main() {
    int numeros[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    for(i = 0; i < 10; i++) {
        if(numeros[i] < 0) {
            numeros[i] = 0;
        }
    }
    printf("\nVetor final:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}