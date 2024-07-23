#include <stdio.h>

#define MAX 10
#define LIMITE_MIN 0
#define LIMITE_MAX 10

int main() {
    int numeri[MAX];
    int numero;
    int i;
    int posizione = -1;
    int trovato = 0;

    printf("Inserisci %d numeri interi compresi tra %d e %d: ", MAX, LIMITE_MIN, LIMITE_MAX);

    for (i = 0; i < MAX; i++)
        do {
            scanf("%d", &numeri[i]);
        } while (numeri[i] < LIMITE_MIN || numeri[i] > LIMITE_MAX);

    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    for (i = 0; i < MAX && trovato == 0; i++)
        if (numeri[i] == numero) {
            trovato = 1;
            posizione = i;
        }

    if (posizione == -1)
        printf("\nNon ci sono numeri interi uguali a %d\n", numero);
    else
        printf("\nIl primo numero intero uguale a %d è in posizione %d\n", numero, posizione);

    return 0;
}
