#include <stdio.h>

int main() {
    int numeros[10];
    int i, valor, encontrado = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("valor 5: ");
    scanf("%d", &valor);

    for(i = 0; i < 10; i++) {
        if(numeros[i] == valor) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado) {
        printf("Valor encontrado!\n");
    } else { 
        printf("Valor nao encontrado!\n");
    }
    return 0;
}
