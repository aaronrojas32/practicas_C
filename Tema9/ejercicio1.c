#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MIN 1
#define MAX 50

int main() {
    int tabla[TAM];
    int i;

    srand(time(NULL));

    for (i = 0; i < TAM; i++) {
        tabla[i] = (rand() % (MAX - MIN + 1)) + MIN;
    }

    printf("Tabla generada:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", tabla[i]);
    }
    printf("\n");

    return 0;
}
