#include <stdio.h>

int main() {
    int senha;
    printf("informe a senha:\n");
    scanf("%d", &senha);
    while (senha != 1234 ) {
    printf("informe a senha novamente:\n");
    scanf("%d", &senha);
    }
    printf ("login completo");
    return 0;
}