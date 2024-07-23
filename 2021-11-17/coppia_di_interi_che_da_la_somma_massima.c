#include <stdio.h>

#define MAX 10

int main() {
    int numeri[MAX];
    int i;
    int j;
    int max1;
    int max2;

    printf("Inserisci %d numeri interi: ", MAX);

    for (i = 0; i < MAX; i++)
        scanf("%d", &numeri[i]);

    max1 = numeri[0];
    max2 = numeri[1];

    for (i = 1; i < MAX; i++)
        for (j = 0; j < i; j++)
            if (numeri[i] + numeri[j] > numeri[max1] + numeri[max2]) {
                max1 = i;
                max2 = j;
            }

    printf("\n%d %d\n", numeri[max1], numeri[max2]);

    return 0;
}
