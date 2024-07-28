#include <stdio.h>

#define DIMENSIONE 5

int main() {
    int numero;
    int matrice[DIMENSIONE][DIMENSIONE];
    int i;
    int j;

    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    for (i = 0; i < DIMENSIONE; i++)
        for (j = 0; j < DIMENSIONE; j++)
            if (i < j)
                matrice[i][j] = j + numero;
            else
                matrice[i][j] = i + numero;
    
    printf("\n");
    
    for (i = 0; i < DIMENSIONE; i++) {
        for (j = 0; j < DIMENSIONE; j++)
            printf("%4d", matrice[i][j]);

        printf("\n");
    }
    
    return 0;
}
