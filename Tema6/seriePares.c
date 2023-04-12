/*
 * Nombre: seriePares.c
 *
 * Descripción: Programa que solicita al usuario un número y calcula la suma de los primeros n números pares
 * y lo imprime por pantalla
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @fecha: 22/03/2023
 */
#include <stdio.h>

int sumPares(int);

int main() {
    int n;
    printf("Introduce el valor de n: ");
    scanf("%d", &n);
    printf("La suma de los primeros %d números pares es %d\n", n, sumPares(n));
    return 0;
}

/*
 * Nombre: sumPares
 * Descripción: Función que calcula la suma de los primeros n números pares
 *
 * @param: n - número de pares a sumar
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @version 1.0
 */
int sumPares(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 2*n + sumPares(n-1);
    }
}
