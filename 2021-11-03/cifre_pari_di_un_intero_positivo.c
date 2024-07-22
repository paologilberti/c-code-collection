#include <stdio.h>

int main() {
    int numero;
    int contatore = 0;
    int cifra;

    do {
        printf("Inserisci un numero intero positivo: ");
        scanf("%d", &numero);
    } while (numero <= 0);

    while (numero > 0) {
        cifra = numero % 10;

        if (cifra % 2 == 0)
            contatore++;

        numero = numero / 10;
    }

    if (contatore == 1)
        printf("\nIl numero inserito ha %d cifra pari\n", contatore);
    else
        printf("\nIl numero inserito ha %d cifre pari\n", contatore);

    return 0;
}
