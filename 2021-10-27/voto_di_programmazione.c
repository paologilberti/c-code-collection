#include <stdio.h>

int main() {
    int voto;

    printf("Inserisci il tuo voto di Programmazione: ");
    scanf("%d", &voto);

    if (voto >= 18) {
        printf("\nPromosso");
        if (voto >= 31)
            printf(" con lode");
    } else
        printf("\nBocciato");

    printf("\n");

    return 0;
}
