
/*
Nombre del programa: caracterASCII.c

Descripcion: Programa que devuelve por pantalla el caracter ASCII correspondiente al numero introducido

Autor: Aaron Rojas Gutierrez

Version 1.0
*/

#include <stdio.h>

int main(){

	int num;
	printf("Introduzca un numero entre 48 y 122\n");
	scanf("%d",&num);
	printf("El caracter correspondiente a el numero introducido es %c\n",num);

}
