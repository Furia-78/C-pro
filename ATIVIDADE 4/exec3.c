#include <stdio.h>

int main() {
    int i;
    int numero, soma = 0;

    for(i = 1; i <= 5; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);
        if(numero > 0) {
        soma = soma + numero;
        }
    }
    printf("A soma dos números positivos é: %d", soma);

    return 0;
}