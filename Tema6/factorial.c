/*
 * Nombre: serieImpares.c
 *
 * Descripción: Programa que solicita al usuario un número, calcula su factorial y lo muestra por pantalla.
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @fecha: 12/04/2023
 */
#include <stdio.h>

int factorial(int n);

int main() {
    int n;

    printf("Introduzca un número entero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El número debe ser positivo.\n");
        return 1;
    }

    printf("El factorial de %d es %d.\n", n, factorial(n));

    return 0;
}

/*
 * Nombre: factorial
 * Descripción: Función que el factorial del numero
 *
 * @param: n - Numero del que se quiere calcular el factorial
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @version 1.0
 */
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}