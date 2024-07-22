#include <stdio.h>

int main() {
    int riga = 1;
    int colonna = 1;

    do {
        do {
            printf("%4d", riga * colonna);

            colonna++;
        } while (colonna <= 10);

        riga++;
        colonna = 1;

        printf("\n");
    } while (riga <= 10);

    return 0;
}
