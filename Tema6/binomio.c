/*
 * Nombre del archivo: binomio.c
 * Descripción: Programa que calcula el elemento k del binomio de Newton de forma recursiva.
 * 
 * Autor: Aaron Rojas Gutiérrez
 * Versión: 1.0
 * Fecha: 19/04/2023
 */

#include <stdio.h>

// Declaración de la función binomio
int binomio(int, int);

// Función principal
int main() {
    int n, k;
    printf("Ingrese n y k separados por un espacio: ");
    scanf("%d %d", &n, &k);
    printf("El elemento %d del binomio de Newton (%d, %d) es %d.\n", k, n, k, binomio(n, k));
    return 0;
}

/*
 * Nombre de la función: binomio
 * Descripción: Función que calcula de forma recursiva el elemento k del binomio de Newton (n, k).
 *
 * @param n: entero positivo que representa el número total de elementos del binomio.
 * @param k: entero positivo que representa el número de elementos que se van a elegir del binomio.
 *
 * Autor: Aaron Rojas Gutiérrez
 * Versión: 1.0
 */
int binomio(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomio(n-1, k-1) + binomio(n-1, k);
    }
}
