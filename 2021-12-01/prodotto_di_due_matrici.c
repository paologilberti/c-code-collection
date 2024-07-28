#include <stdio.h>

#define RIGHE_MATRICE1 3
#define COLONNE_MATRICE1 4
#define RIGHE_MATRICE2 4
#define COLONNE_MATRICE2 5

int main() {
    int matrice1[RIGHE_MATRICE1][COLONNE_MATRICE1];
    int matrice2[RIGHE_MATRICE2][COLONNE_MATRICE2];
    int risultato[RIGHE_MATRICE1][COLONNE_MATRICE2];
    int i;
    int j;
    int k;

    printf("Inserisci %d numeri interi: ", RIGHE_MATRICE1 * COLONNE_MATRICE1);

    for (i = 0; i < RIGHE_MATRICE1; i++)
        for (j = 0; j < COLONNE_MATRICE1; j++)
            scanf("%d", &matrice1[i][j]);

    printf("\nInserisci %d numeri interi: ", RIGHE_MATRICE2 * COLONNE_MATRICE2);

    for (i = 0; i < RIGHE_MATRICE2; i++)
        for (j = 0; j < COLONNE_MATRICE2; j++)
            scanf("%d", &matrice2[i][j]);

    for (i = 0; i < RIGHE_MATRICE1; i++)
        for (j = 0; j < COLONNE_MATRICE2; j++) {
            risultato[i][j] = 0;

            for (k = 0; k < COLONNE_MATRICE1; k++)
                risultato[i][j] += matrice1[i][k] * matrice2[k][j];
        }

    printf("\n");

    for (i = 0; i < RIGHE_MATRICE1; i++) {
        for (j = 0; j < COLONNE_MATRICE2; j++)
            printf("%5d", risultato[i][j]);

        printf("\n");
    }

    return 0;
}
