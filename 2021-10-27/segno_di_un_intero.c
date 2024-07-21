#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    if (numero == 0)
        printf("\nHai inserito un numero nullo\n");
    else
        if (numero > 0)
            printf("\nHai inserito un numero positivo\n");
        else
            printf("\nHai inserito un numero negativo\n");

    return 0;
}
