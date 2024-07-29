#include <stdio.h>

int pari(int);

int main() {
    int numero;
    int risultato;

    printf("Inserisci un numero intero positivo: ");

    do {
        scanf("%d", &numero);
    } while (numero <= 0);

    risultato = pari(numero);

    if (risultato)
        printf("\nIl numero è pari\n");
    else
        printf("\nIl numero è dispari\n");

    return 0;
}

int pari(int numero) {
    if (numero % 2 == 0)
        return 1;
    else
        return 0;
}
