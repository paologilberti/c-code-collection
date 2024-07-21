#include <stdio.h>

int main() {
    int numero;
    int risultato;

    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    if (numero < 0)
        risultato = - numero;
    else
        risultato = numero;

    printf("\nIl valore assoluto di %d è uguale a %d\n", numero, risultato);

    return 0;
}
