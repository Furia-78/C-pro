#include <stdio.h>

int main() {
    int numeros[8]; // corrigido
    int i, soma = 0;

    // Leia os valores
    for(i = 0; i < 8; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i]; // já soma aqui
    }

    // Exibe a soma
    printf("Soma = %d\n", soma); // corrigido

    return 0;
}