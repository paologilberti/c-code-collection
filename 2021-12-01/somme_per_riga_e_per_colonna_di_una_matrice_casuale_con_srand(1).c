#include <stdio.h>
#include <stdlib.h>

#define RIGHE 3
#define COLONNE 4

int main() {
    int matrice[RIGHE][COLONNE];
    int somme_per_riga[RIGHE];
    int somme_per_colonna[COLONNE];
    int i;
    int j;

    srand(1);

    for (i = 0; i < RIGHE; i++)
        for (j = 0; j < COLONNE; j++)
            if (i % 2 == 0)
                matrice[i][j] = rand() % 6 * 2;
            else
                matrice[i][j] = rand() % 5 * 2 + 1;

    for (i = 0; i < RIGHE; i++) {
        somme_per_riga[i] = 0;

        for (j = 0; j < COLONNE; j++)
            somme_per_riga[i] += matrice[i][j];
    }

    for (j = 0; j < COLONNE; j++) {
        somme_per_colonna[j] = 0;

        for (i = 0; i < RIGHE; i++)
            somme_per_colonna[j] += matrice[i][j];
    }

    for (i = 0; i < RIGHE; i++) {
        for (j = 0; j < COLONNE; j++)
            printf("%3d", matrice[i][j]);

        printf("\n");
    }

    printf("\nSomme per riga: ");
    for (i = 0; i < RIGHE; i++)
        printf("%d ", somme_per_riga[i]);

    printf("\nSomme per colonna: ");
    for (j = 0; j < COLONNE; j++)
        printf("%d ", somme_per_colonna[j]);

    printf("\n");

    return 0;
}
