#include <stdio.h>

void stampa_interi(int);

int main() {
    int numero;

    printf("Inserisci un numero intero positivo: ");

    do {
        scanf("%d", &numero);
    } while (numero <= 0);

    stampa_interi(numero);

    return 0;
}

void stampa_interi(int numero) {
    int i;

    printf("\n");

    for (i = 0; i <= numero; i++)
        printf("%d ", i);

    printf("\n");
}
