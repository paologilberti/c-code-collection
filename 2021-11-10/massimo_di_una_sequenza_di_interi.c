#include <stdio.h>

#define MAX 10

int main() {
    int numeri[MAX];
    int indice;
    int massimo;

    printf("Inserisci %d numeri interi: ", MAX);

    for (indice = 0; indice < MAX; indice++)
        scanf("%d", &numeri[indice]);

    massimo = numeri[0];

    for (indice = 1; indice < MAX; indice++)
        if (numeri[indice] > massimo)
            massimo = numeri[indice];

    printf("\nIl massimo dei %d numeri interi che hai inserito è %d\n", MAX, massimo);

    return 0;
}
