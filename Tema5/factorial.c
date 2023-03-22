/*
 * Nombre: factorial.c
 *
 * Descripción: Programa que solicita al usuario un numero y calcula su factorial 
 * y lo imprime por pantalla
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @fecha: 22/03/2023
 */
#include <stdio.h>

int recogeNum();
int calculaFactorial(int);
int limpiarBuffer();

int main(){

    int num,fac;

    num = recogeNum();
    fac = calculaFactorial(num);

    printf("El factorial del numero introducido es %d",fac);

    return 0;

}

/*
 * Nombre: pideMes
 * Descripción: Función que solicita al usuario un numero
 *
 * @return: num - el nuemro introducido por el usuario
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @version 1.0
 */
int recogeNum(){
    int num;

    printf("Introduzca un numero para calcular su factorial \n");
    scanf("%d",&num);
    limpiarBuffer();

    return num;
}

/*
 * Nombre: calculaFactorial
 * Descripción: Función que calcula el factorial de un numero
 *
 * @return: factorial - el factorial calculado por la funcions
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @version 1.0
 */
int calculaFactorial(int num){
    int factorial = 1;

    for(int i=num;i>0;i--){
        factorial = factorial * i;
    }

    return factorial;

}

int limpiarBuffer(){

    while(getchar() != '\n')
    
    return 1;
}