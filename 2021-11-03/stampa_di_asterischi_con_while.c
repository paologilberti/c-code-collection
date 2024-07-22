#include <stdio.h>

int main() {
    int numero;
    int contatore;

    printf("Inserisci un numero intero positivo (0 per terminare): ");
    scanf("%d", &numero);

    while (numero != 0) {
        contatore = 1;

        while (contatore <= numero) {
            printf("*");
            contatore++;
        }

        printf("\nInserisci un numero intero positivo (0 per terminare): ");
        scanf("%d", &numero);
    }

    return 0;
}
