/*
 * Nombre: ecuacion.c
 *
 * Descripción: Programa que solicita al usuario los coeficientes de una ecuación de segundo grado, 
 * calcula sus soluciones reales (si existen) y las imprime por pantalla.
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @fecha: 22/03/2023
 */

#include <stdio.h>
#include <math.h>

/*
 * Nombre: recogeEcuacion
 *
 * Descripción: Función que solicita al usuario los coeficientes de una ecuación de segundo grado 
 * en el formato ax^2 + bx + c = 0, y los almacena en los punteros a, b y c.
 *
 * @param: a - puntero al coeficiente de x^2 de la ecuación
 * @param: b - puntero al coeficiente de x de la ecuación
 * @param: c - puntero al término independiente de la ecuación
 *
 * @return: 1 si la ecuación es de segundo grado, 0 en caso contrario.
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @version: 1.0
 */
int recogeEcuacion(float *a, float *b, float *c){
    printf("Ingrese los coeficientes de la ecuación de segundo grado en el formato ax^2 + bx + c = 0:\n");

    if(scanf("%fx^2 + %fx + %f = 0", a, b, c) == 3){
        if(*a != 0){
            return 1;
        }
    }
    limpiarBuffer();
    return 0;
}

/*
 * Nombre: resuelveEcuacion
 *
 * Descripción: Función que recibe los coeficientes de una ecuación de segundo grado, 
 * y calcula sus soluciones reales (si existen) mediante la fórmula general.
 *
 * @param: a - coeficiente de x^2 de la ecuación
 * @param: b - coeficiente de x de la ecuación
 * @param: c - término independiente de la ecuación
 * @param: x1 - puntero a la variable donde se almacenará la primera solución real
 * @param: x2 - puntero a la variable donde se almacenará la segunda solución real
 *
 * @return: 1 si la ecuación tiene soluciones reales, 0 en caso contrario.
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @version: 1.0
 */
int resuelveEcuacion(float a, float b, float c, float *x1, float *x2){
    float discriminante;

    discriminante = b*b - 4*a*c;

    if(discriminante >= 0){
        *x1 = (-b + sqrt(discriminante)) / (2*a);
        *x2 = (-b - sqrt(discriminante)) / (2*a);
        return 1;
    }
    else{
        return 0;
    }
}

int limpiarBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);

    return 1;
}