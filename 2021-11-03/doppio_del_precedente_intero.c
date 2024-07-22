#include <stdio.h>

int main() {
    int numero1;
    int numero2;

    printf("Inserisci dei numeri interi positivi (0 per terminare): ");
    scanf("%d", &numero1);

    if (numero1 != 0) {
        scanf("%d", &numero2);

        while (numero2 != 0) {
            if (numero2 == numero1 * 2)
                printf("%d è il doppio del numero precedente (%d)\n", numero2, numero1);

            numero1 = numero2;

            scanf("%d", &numero2);
        }
    } else
        printf("Errore: sequenza vuota\n");

    return 0;
}
