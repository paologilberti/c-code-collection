#include <stdio.h>

#define MAX 10

int main() {
    int numeri[MAX];
    int indice;

    printf("Inserisci %d numeri interi: ", MAX);

    for (indice = 0; indice < MAX; indice++)
        scanf("%d", &numeri[indice]);

    printf("\n");

    for (indice = 0; indice < MAX; indice++)
        if (indice == 0)
            printf("%d ", numeri[indice]);
        else
            printf("%d ", numeri[indice] * numeri[indice - 1]);

    printf("\n");

    return 0;
}
