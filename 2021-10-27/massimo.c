#include <stdio.h>

int main() {
    int quantita;
    int numero;
    int massimo;
    int contatore = 1;

    printf("Quanti numeri vuoi inserire? Digita un valore positivo: ");
    scanf("%d", &quantita);

    while (quantita < 1) {
        printf("Digita un valore positivo: ");
        scanf("%d", &quantita);
    }

    printf("Inserisci %d numeri interi: ", quantita);
    scanf("%d", &numero);

    massimo = numero;

    while (contatore < quantita) {
        scanf("%d", &numero);
        if (numero > massimo)
            massimo = numero;
        contatore++;
    }

    printf("\nIl massimo dei %d numeri interi che hai inserito è %d\n", quantita, massimo);

    return 0;
}
