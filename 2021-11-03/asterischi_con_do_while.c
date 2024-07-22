#include <stdio.h>

int main() {
    int numero;
    int contatore;

    do {
        printf("Inserisci un numero intero positivo (0 per terminare): ");
        scanf("%d", &numero);

        contatore = 1;

        while (contatore <= numero) {
            printf("*");
            if (contatore == numero)
                printf("\n");
            contatore++;
        }
    } while (numero != 0);

    return 0;
}
