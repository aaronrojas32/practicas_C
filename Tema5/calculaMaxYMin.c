/*
 * Nombre del archivo: calculaMaxYMin.c
 *
 * Descripción: programa que solicita tres números enteros al usuario y calcula el 
 * mínimo y el máximo de los tres números
 *
 * Autor: Aaron Rojas Gutiérrez
 *
 * Fecha: 16/03/2023
 */

#include <stdio.h>

// Declaración de funciones
int pideNumero();
int calculaMax(int num1, int num2, int num3);
int calculaMin(int num1, int num2, int num3);
int limpiarBuffer();

int main()
{
    int num1, num2, num3;
    int max, min;

    // Se solicitan los tres números al usuario
    num1 = pideNumero();
    num2 = pideNumero();
    num3 = pideNumero();

    // Se calcula el número máximo y mínimo de los tres números ingresados
    max = calculaMax(num1, num2, num3);
    min = calculaMin(num1, num2, num3);

    // Se muestra el resultado al usuario
    printf("El número máximo es %d y el número mínimo es %d\n", max, min);

    return 0;
}

/*
 * Función: pideNumero
 * Descripción: solicita al usuario un número entero
 *
 * Retorno: número entero ingresado por el usuario
 *
 * Autor: Aaron Rojas Gutiérrez
 *
 * Versión: 1.0
 */
int pideNumero()
{
    int num;

    printf("Introduce un número entero: ");
    scanf("%d", &num);
    limpiarBuffer();

    return num;
}

/*
 * Función: calculaMax
 * Descripción: calcula el número máximo de tres números enteros
 *
 * Parámetros:
 *     - num1: primer número entero
 *     - num2: segundo número entero
 *     - num3: tercer número entero
 *
 * Retorno: número entero máximo de los tres números ingresados
 *
 * Autor: Aaron Rojas Gutiérrez
 *
 * Versión: 1.0
 */
int calculaMax(int num1, int num2, int num3)
{
    int max = num1;

    if (num2 > max)
    {
        max = num2;
    }

    if (num3 > max)
    {
        max = num3;
    }

    return max;
}

/*
 * Función: calculaMin
 * Descripción: calcula el número mínimo de tres números enteros
 *
 * Parámetros:
 *     - num1: primer número entero
 *     - num2: segundo número entero
 *     - num3: tercer número entero
 *
 * Retorno: número entero mínimo de los tres números ingresados
 *
 * Autor: Aaron Rojas Gutiérrez
 *
 * Versión: 1.0
 */
int calculaMin(int num1, int num2, int num3)
{
    int min = num1;

    if (num2 < min)
    {
        min = num2;
    }

    if (num3 < min)
    {
        min = num3;
    }

    return min;
}

int limpiarBuffer(){

    while(getchar() != '\n')
    
    return 1;
}