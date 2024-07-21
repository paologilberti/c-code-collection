#include <stdio.h>

int main() {
    int numero;
    int precedente;
    int successivo;

    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    precedente = numero - 1;
    successivo = numero + 1;

    printf("\nIl precedente di %d è %d, mentre il successivo è %d\n", numero, precedente, successivo);

    return 0;
}
