#include <stdio.h>

int main() {
    int numero;
    int divisore;
    int resto;

    do {
        printf("Inserisci un numero intero positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    divisore = numero - 1;
    resto = numero % divisore;

    while (resto != 0) {
        divisore = divisore - 1;
        resto = numero % divisore;
    }

    if (divisore == 1)
        printf("\n%d è un numero primo\n", numero);
    else
        printf("\n%d non è un numero primo\n", numero);

    return 0;
}
