#include <stdio.h>

#define DIMENSIONE 3

int main() {
    int matrice[DIMENSIONE][DIMENSIONE];
    int i;
    int j;
    int identita = 1;

    printf("Inserisci %d numeri interi: ", DIMENSIONE * DIMENSIONE);

    for (i = 0; i < DIMENSIONE; i++)
        for (j = 0; j < DIMENSIONE; j++)
            scanf("%d", &matrice[i][j]);

    for (i = 0; i < DIMENSIONE && identita; i++)
        for (j = 0; j < DIMENSIONE && identita; j++) {
            if (i != j && matrice[i][j] != 0)
                identita = 0;

            if (i == j && matrice[i][j] != 1)
                identita = 0;
        }

    if (identita)
        printf("\nMatrice identità? Sì\n");
    else
        printf("\nMatrice identità? No\n");

    return 0;
}
