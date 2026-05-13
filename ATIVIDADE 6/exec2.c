#include <stdio.h>

int main() {
    int numeros[8];
    int i, soma = 0;

    for(i = 0; i < 8; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    printf("Soma = %d\n", soma);

    return 0;
}