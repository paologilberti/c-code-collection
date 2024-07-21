#include <stdio.h>

int main() {
    int numero;
    int contatore = 1;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    while (numero < 1) {
        printf("Inserisci un numero intero positivo: ");
        scanf("%d", &numero);
    }

    printf("\n");

    while (contatore <= 10) {
        printf("%d ", numero * contatore);
        contatore++;
    }

    printf("\n");

    return 0;
}
