#include <stdio.h>

int main() {
    int lato;
    int perimetro;
    int area;

    printf("Inserisci la lunghezza del lato di un quadrato (in cm): ");
    scanf("%d", &lato);

    perimetro = lato * 4;
    area = lato * lato;

    printf("\nIl perimetro di un quadrato di lato %d cm è uguale a %d cm, mentre l'area è uguale a %d cm quadrati\n", lato, perimetro, area);

    return 0;
}
