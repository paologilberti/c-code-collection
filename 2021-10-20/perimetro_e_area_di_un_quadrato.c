#include <stdio.h>

int main() {
    int lato;
    int perimetro;
    int area;

    printf("Inserisci la lunghezza (in cm) del lato di un quadrato: ");
    scanf("%d", &lato);

    perimetro = lato * 4;
    area = lato * lato;

    printf("\nIl perimetro di un quadrato di lato %d cm è uguale a %d cm, mentre l'area è uguale a %d cm\n", lato, perimetro, area);

    return 0;
}
