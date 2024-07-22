#include <stdio.h>

#define MAX 10

int main() {
    int numeri[MAX];
    int indice;
    int temporanea;

    printf("Inserisci %d numeri interi: ", MAX);

    for (indice = 0; indice < MAX; indice++)
        scanf("%d", &numeri[indice]);

    for (indice = 0; indice < MAX / 2; indice++) {
        temporanea = numeri[indice];
        numeri[indice] = numeri[MAX - 1 - indice];
        numeri[MAX - 1 - indice] = temporanea;
    }

    printf("\n");

    for (indice = 0; indice < MAX; indice++)
        printf("%d ", numeri[indice]);

    printf("\n");

    return 0;
}
