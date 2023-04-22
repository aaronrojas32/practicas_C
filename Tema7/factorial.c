/**
 * Nombre: factorial.c
 * Descripcion: Programa que calcula el factorial de un numero utilizado bucles.
 * 
 * @author Aaron Rojas Gutierrez () 
 * @version 1.0
 * @date 2023-04-22
 * 
 */
#include <stdio.h>

int recogeNum();
int calculaFactorial(int);

int main() {

    int num, factorial;

    num = recogeNum();
    factorial = calculaFactorial(num);
    printf("El factorial de %d es %d",num,factorial);

    return 0;
}

/**
 * Nombre: recogeNum
 * Descripcion: Funcion que solicita un numero al usuario y recoge el valor introducido
 * 
 * @return int 
 */
int recogeNum() {
    
    int num;

    printf("Introduzca un numero para calcular el factorial: \n");
    scanf("%d",&num);

    return num;
}

/**
 * Nombre: calculaFactorial
 * Descripcion: Funcion que calcula el factorial con un bucle for
 * 
 * @param num - numero del que se quiere calcular el factorial
 * @return factorial - valor calculado del factorial
 */
int calculaFactorial(int num) {
    int factorial = 1, i;

    for(i = num; i > 0; i--) {
        factorial *= i;
    }

    return factorial;
}
