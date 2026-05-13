#include <stdio.h>

int main() {
    int numeros[12]; // corrigido
    int i, pares = 0;

    // Leia os valores
    for(i = 0; i < 12; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Conte os pares
    for(i = 0; i < 12; i++) {
        if(numeros[i] % 2 == 0) {
            pares++;
        }
    }

    printf("Quantidade de pares = %d\n", pares);

    return 0;
}