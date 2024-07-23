#include <stdio.h>

#define MAX 10

int main() {
    int numeri[MAX];
    int i;
    int massimo;
    int quasi_massimo;
    int temporanea;

    printf("Inserisci %d numeri interi positivi: ", MAX);

    for (i = 0; i < MAX; i++)
        scanf("%d", &numeri[i]);

    massimo = numeri[0];

    for (i = 1; i < MAX; i++)
        if (numeri[i] > massimo)
            massimo = numeri[i];

    for (i = 0; i < MAX; i++)
        if (numeri[i] < massimo)
            temporanea = numeri[i];

    quasi_massimo = temporanea;

    for (i = 0; i < MAX; i++)
        if (numeri[i] < massimo && numeri[i] > temporanea) {
            temporanea = numeri[i];
            quasi_massimo = numeri[i];
        }

    printf("\nIl quasi massimo dei %d numeri interi che hai inserito è %d\n", MAX, quasi_massimo);

    return 0;
}
