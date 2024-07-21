#include <stdio.h>

int main() {
    int voto1;
    int voto2;
    int somma;
    float media;

    printf("Inserisci due voti: ");
    scanf("%d", &voto1);
    scanf("%d", &voto2);

    somma = voto1 + voto2;
    media = (float) somma / 2;

    printf("\nLa media di %d e %d è uguale a %.1f\n", voto1, voto2, media);

    return 0;
}
