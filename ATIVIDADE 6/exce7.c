#include <stdio.h>

int main() {
    int numeros[18];
    int i;

    for(i = 0; i < 18; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("\nNumeros em ordem inversa:\n");
    for(i = 17; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    return 0;
}