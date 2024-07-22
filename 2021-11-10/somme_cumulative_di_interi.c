#include <stdio.h>

#define MAX 10

int main() {
    int numeri[MAX];
    int indice;
    int somma = 0;

    printf("Inserisci %d numeri interi: ", MAX);

    for (indice = 0; indice < MAX; indice++)
        scanf("%d", &numeri[indice]);

    printf("\n");

    for (indice = 0; indice < MAX; indice++) {
        somma = somma + numeri[indice];
        printf("%d ", somma);
    }

    printf("\n");

    return 0;
}
