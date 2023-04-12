/*
 * Nombre: fibonacci.c
 *
 * Descripción: Programa que solicita al usuario la posicion en la serie de fibonacci y calcula el valor de la
 * posicion de forma recursiva.
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @fecha: 12/04/2023
 */
#include <stdio.h>

int fibonacci(int);

int main() {
   int n;
   printf("Introduce la posición de la serie de Fibonacci: ");
   scanf("%d", &n);
   printf("El valor de la posición %d de la serie de Fibonacci es %d\n", n, fibonacci(n));
   return 0;
}

/*
 * Nombre: factorial
 * Descripción: Funcion que calcula el valor en la serie de fibonacci
 *
 * @param: n - Numero de la serie del cual se quiere saber el valor
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @version 1.0
 */
int fibonacci(int n) {
   if (n <= 1)
      return n;
   return fibonacci(n-1) + fibonacci(n-2);
}