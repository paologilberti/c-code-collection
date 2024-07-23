#include <stdio.h>

#define DIMENSIONE 3

int main() {
    int matrice[DIMENSIONE][DIMENSIONE];
    int i;
    int j;
    int contatore;

    printf("Inserisci %d numeri interi: ", DIMENSIONE * DIMENSIONE);

    for (i = 0; i < DIMENSIONE; i++)
        for (j = 0; j < DIMENSIONE; j++)
            scanf("%d", &matrice[i][j]);

    for (i = 0; i < DIMENSIONE; i++) {
        for (j = 0, contatore = 0; j < DIMENSIONE; j++)
            if (matrice[i][j] % 2 == 0)
                contatore++;

        if (contatore == 1)
            printf("\nNella riga %d c'è %d numero pari", i, contatore);
        else
            printf("\nNella riga %d ci sono %d numeri pari", i, contatore);
    }

    printf("\n");

    return 0;
}
