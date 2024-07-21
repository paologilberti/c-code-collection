#include <stdio.h>

int main() {
    int numero;
    int contatore = 1;

    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    printf("\n");

    while (contatore <= numero) {
        printf("%d ", contatore);
        contatore++;
    }

    printf("\n");

    return 0;
}
