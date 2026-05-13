#include <stdio.h>

int main() {
    float vendas[7];
    int i, diaMaior = 0;
    float maior;

    // Leia as vendas
    for(i = 0; i < 7; i++) {
        printf("Digite a venda do dia %d: ", i + 1);
        scanf("%f", &vendas[i]);
    }

    // Inicializa com o primeiro valor
    maior = vendas[0];

    // Descubra o maior valor e o dia correspondente
    for(i = 1; i < 7; i++) {
        if(vendas[i] > maior) {
            maior = vendas[i];
            diaMaior = i;
        }
    }

    printf("Maior venda = %.2f no dia %d\n", maior, diaMaior + 1);

    return 0;
}