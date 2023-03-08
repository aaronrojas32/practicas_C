/*
Nombre programa: pide3numeros.c

Descripcion: Programa que pide 3 numeros, separados por comas al usuario y luego muestra los numeros introducidos por pantalla

Autor: Aaron Rojas Gutierrez

Version 1.0
*/

//Directivas para el procesador

#include <stdio.h>

int main(){
	int num1,num2,num3,valores;
	printf("Introduca 3 datos enteros separados por comas: \n");
	valores=scanf("%d,%d,%d",&num1,&num2,&num3);
	
	printf("El numero de valores introducidos es %d\n",valores);
	printf("Los valores introducidos por el usuario son %d,%d y %d\n",num1,num2,num3);

}
