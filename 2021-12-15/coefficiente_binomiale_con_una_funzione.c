#include <stdio.h>

int fattoriale(int);

int main() {
    int n;
    int k;
    int fattoriale_n;
    int fattoriale_k;
    int fattoriale_differenza;
    int risultato;

    printf("Inserisci due numeri interi non negativi: ");
    scanf("%d", &n);
    scanf("%d", &k);

    fattoriale_n = fattoriale(n);
    fattoriale_k = fattoriale(k);
    fattoriale_differenza = fattoriale(n - k);

    risultato = fattoriale_n / (fattoriale_k * fattoriale_differenza);

    printf("\nIl coefficiente binomiale è uguale a %d\n", risultato);

    return 0;
}

int fattoriale(int numero) {
    int i;
    int risultato = 1;

    for (i = 2; i <= numero; i++)
        risultato *= i;

    return risultato;
}
