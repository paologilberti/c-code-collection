#include <stdio.h>

#define DIMENSIONE 4

int main() {
    int matrice[DIMENSIONE][DIMENSIONE] = {{1, 2, 3, 4}, {2, 7, 6, 5}, {3, 6, 4, 8}, {4, 5, 8, 9}};
    int i;
    int j;
    int simmetrica = 1;

    for (i = 0; i < DIMENSIONE && simmetrica; i++)
        for (j = 0; j < DIMENSIONE && simmetrica; j++)
            if (matrice[i][j] != matrice[j][i])
                simmetrica = 0;

    if (simmetrica)
        printf("Matrice simmetrica rispetto alla diagonale principale? Sì\n");
    else
        printf("Matrice simmetrica rispetto alla diagonale principale? No\n");

    return 0;
}
