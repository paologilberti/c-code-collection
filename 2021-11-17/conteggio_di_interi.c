#include <stdio.h>

#define MAX 10
#define LIMITE_MIN 1
#define LIMITE_MAX 5

int main() {
    int numeri[MAX];
    int i;
    int j;
    int contatore;

    printf("Inserisci %d numeri interi compresi tra %d e %d: ", MAX, LIMITE_MIN, LIMITE_MAX);

    for (i = 0; i < MAX; i++)
        do {
            scanf("%d", &numeri[i]);
        } while (numeri[i] < LIMITE_MIN || numeri[i] > LIMITE_MAX);

    for (j = LIMITE_MIN; j <= LIMITE_MAX; j++) {
        for (i = 0, contatore = 0; i < MAX; i++)
            if (numeri[i] == j)
                contatore++;

        if (contatore == 1)
            printf("\nHai inserito %d numero intero uguale a %d", contatore, j);
        else
            printf("\nHai inserito %d numeri interi uguali a %d", contatore, j);
    }

    printf("\n");

    return 0;
}
