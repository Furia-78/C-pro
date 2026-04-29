#include <stdio.h>

int main() {
    int numero, total = 0, positivo = 0;
    printf("informe o número:\n");
    scanf("%d", &numero);
    while (numero != 0){
        total++;
        if (numero > 0){
         positivo++;
        }
        printf ("informe o número: \n");
        scanf ("%d", &numero);
    }
    printf ("total: %d\n", total);
    printf ("positivos: %d\n", positivo);


    return 0;
}