#include <stdio.h>

int main() {
    char carattere;
    char precedente;
    char successivo;

    printf("Inserisci un carattere: ");
    scanf(" %c", &carattere);

    precedente = carattere - 1;
    successivo = carattere + 1;

    printf("\nIl precedente di %c è %c, mentre il successivo è %c\n", carattere, precedente, successivo);

    return 0;
}
