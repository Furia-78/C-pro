#include <stdio.h>

int main() {
    int numeros[10]; // corrigido
    int i, maior;

    // Leia os valores
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa com o primeiro valor
    maior = numeros[0];

    // Descubra o maior valor
    for(i = 1; i < 10; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("Maior valor = %d\n", maior);

    return 0;
}