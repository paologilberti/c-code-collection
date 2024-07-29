#include <stdio.h>

int prodotto(int, int);

int main() {
    int numero1;
    int numero2;
    int risultato;

    printf("Inserisci due numeri interi positivi: ");

    do {
        scanf("%d", &numero1);
    } while (numero1 <= 0);

    do {
        scanf("%d", &numero2);
    } while (numero2 <= 0);

    risultato = prodotto(numero1, numero2);

    printf("\nIl prodotto è uguale a %d\n", risultato);

    return 0;
}

int prodotto(int numero1, int numero2) {
    return numero1 * numero2;
}
