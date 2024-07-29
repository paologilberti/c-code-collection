#include <stdio.h>

int main() {
    int n;
    int k;
    int fattoriale_n = 1;
    int fattoriale_k = 1;
    int fattoriale_differenza = 1;
    int risultato;
    int i;

    printf("Inserisci due numeri interi non negativi: ");
    scanf("%d", &n);
    scanf("%d", &k);

    for (i = 2; i <= n; i++)
        fattoriale_n *= i;

    for (i = 2; i <= k; i++)
        fattoriale_k *= i;

    for (i = 2; i <= n - k; i++)
        fattoriale_differenza *= i;

    risultato = fattoriale_n / (fattoriale_k * fattoriale_differenza);

    printf("\nIl coefficiente binomiale è uguale a %d\n", risultato);

    return 0;
}
