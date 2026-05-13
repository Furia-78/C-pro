#include <stdio.h>

int main() {
    float numeros[6]; // corrigido
    int i;
    float soma = 0, media;

    // Leia os valores
    for(i = 0; i < 6; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i]; // já soma aqui
    }

    // Calcule a media
    media = soma / 6;

    printf("Media = %.2f\n", media); // corrigido

    return 0;
}