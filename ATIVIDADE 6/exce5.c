#include <stdio.h>

int main() {
    float numeros[6];
    int i;
    float soma = 0, media;
    
    for(i = 0; i < 6; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 6;
    printf("Media = %.2f\n", media);

    return 0;
}