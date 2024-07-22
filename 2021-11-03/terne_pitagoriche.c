#include <stdio.h>

int main() {
    int numero1;
    int numero2;
    int numero3;
    int contatore = 0;

    printf("Inserisci dei numeri interi positivi (0 per terminare): ");
    scanf("%d", &numero1);

    if (numero1 == 0)
        printf("\nHai inserito %d terne pitagoriche\n", contatore);
    else {
        scanf("%d", &numero2);

        if (numero2 == 0)
            printf("\nHai inserito %d terne pitagoriche\n", contatore);
        else {
            scanf("%d", &numero3);

            while (numero3 != 0) {
                if (numero1 * numero1 + numero2 * numero2 == numero3 * numero3)
                    contatore++;

                numero1 = numero2;
                numero2 = numero3;

                scanf("%d", &numero3);
            }

            if (contatore == 1)
                printf("\nHai inserito %d terna pitagorica\n", contatore);
            else
                printf("\nHai inserito %d terne pitagoriche\n", contatore);
        }
    }

    return 0;
}
