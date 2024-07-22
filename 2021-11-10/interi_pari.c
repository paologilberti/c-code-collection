#include <stdio.h>

#define MAX 10

int main() {
    int numeri[MAX];
    int indice;
    int contatore = 0;

    printf("Inserisci %d numeri interi: ", MAX);

    for (indice = 0; indice < MAX; indice++)
        scanf("%d", &numeri[indice]);

    for (indice = 0; indice < MAX; indice++)
        if (numeri[indice] % 2 == 0)
            contatore++;

    if (contatore == 1)
        printf("\nHai inserito %d numero pari\n", contatore);
    else
        printf("\nHai inserito %d numeri pari\n", contatore);

    return 0;
}
