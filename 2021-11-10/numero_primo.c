#include <stdio.h>

int main() {
    int numero;
    int contatore;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    contatore = numero - 1;

    while ((contatore > 1) && (numero % contatore != 0))
        contatore--;

    if (contatore > 1)
        printf("\n%d non è un numero primo\n", numero);
    else
        printf("\n%d è un numero primo\n", numero);

    return 0;
}
