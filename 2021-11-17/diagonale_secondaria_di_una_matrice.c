#include <stdio.h>

#define DIMENSIONE 3

int main() {
    int matrice[DIMENSIONE][DIMENSIONE];
    int i;
    int j;

    printf("Inserisci %d numeri interi: ", DIMENSIONE * DIMENSIONE);

    for (i = 0; i < DIMENSIONE; i++)
        for (j = 0; j < DIMENSIONE; j++)
            scanf("%d", &matrice[i][j]);

    printf("\nDiagonale secondaria: ");

    for (i = 0; i < DIMENSIONE; i++)
        printf("%d ", matrice[i][DIMENSIONE - 1 - i]);

    printf("\n");

    return 0;
}
