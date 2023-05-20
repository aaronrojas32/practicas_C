/**
 * Nombre: fibonacci.c
 * Descripcion: Programa en C que calcula los 'n' primeros términos de la serie de Fibonacci.
 * 
 * @author Aaron Rojas Gutierrez
 * @version 1.0
 * @date 2023-04-22
 * 
 */
#include <stdio.h>

void leer_numero(int* n);
void calcular_terminos(int n);

int main() {
    int n;

    leer_numero(&n);
    calcular_terminos(n);

    return 0;
}

/**
 * Nombre: leer_numero
 * Descripcion: Pide al usuario que introduzca el número de términos de la serie de Fibonacci que desea calcular
 * 
 * @param n Puntero a entero que almacenará el número de términos introducido por el usuario
 */
void leer_numero(int* n) {
    printf("Introduce el número de términos de la serie de Fibonacci: ");
    scanf("%d", n);
}

/**
 * Nombre: calcular_terminos
 * Descripcion: Calcula y muestra por pantalla los 'n' primeros términos de la serie de Fibonacci
 * 
 * @param n Número de términos de la serie de Fibonacci a calcular
 */
void calcular_terminos(int n) {
    int i, t1 = 0, t2 = 1, nextTerm;

    printf("Serie de Fibonacci de %d términos:\n", n);

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}