#include <stdio.h>

int main() {
    int numero;

    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    if (numero % 3 == 0)
        if (numero % 2 == 0)
            printf("\n%d è un multiplo pari di 3\n", numero);
        else
            printf("\n%d è un multiplo dispari di 3\n", numero);
    else
        printf("\n%d non è un multiplo di 3\n", numero);

    return 0;
}
