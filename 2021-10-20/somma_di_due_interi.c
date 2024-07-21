#include <stdio.h>

int main() {
    int numero1;
    int numero2;
    int risultato;

    printf("Inserisci due numeri interi: ");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    risultato = numero1 + numero2;

    printf("\nLa somma di %d e %d è uguale a %d\n", numero1, numero2, risultato);

    return 0;
}
