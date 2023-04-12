/*
 * Nombre: serieImpares.c
 *
 * Descripción: Programa que solicita al usuario un número y calcula la suma de los primeros n números impares
 * y lo imprime por pantalla
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @fecha: 22/03/2023
 */

#include <stdio.h>

int sumaImpares(int);

int main(){
    int n;

    printf("Introduzca el valor de n: ");
    scanf("%d", &n);
    printf("La suma de los %d primeros números impares es: %d\n", n, sumaImpares(n));
    return 0;
}

/*
 * Nombre: sumaImpares
 * Descripción: Función que calcula la suma de los primeros n números impares
 *
 * @param: n - número de impares a sumar
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @version 1.0
 */
int sumaImpares(int n){
    if(n==1){   // Caso base
        return 1;
    } else {
        return (2*n-1) + sumaImpares(n-1);   // Suma de impares
    }
}
