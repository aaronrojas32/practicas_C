/*
Nombre programa: pide3numerosDistintos.c

Descripcion: Programa que pide 3 numeros distintos al usuario, uno entero sin signo, uno entero con signo y uno entero largo y los muestra por pantalla

Autor: Aaron Rojas Gutierrez

Version 1.0

*/

//Directivas del procesador

#include <stdio.h>

int main(){

	int num1,num2;
	long int num3;

	printf("Introduzca 3 numeros separados por comas, uno entero sin signo, uno entero con signo y uno entero largo: \n");
	scanf("%u,%d,%ld",&num1,&num2,&num3);
	printf("Los numeros introducidos son: %u,%d,%ld\n",num1,num2,num3);
}
