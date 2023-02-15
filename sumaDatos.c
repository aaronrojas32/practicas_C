/*
Nombre del programa: sumaDatos.c

Descripcion: Programa que realiza sumas con diferetes tipos de datos

Autor: Aaron Rojas Gutierrez

Version: 1.0

*/

#include <stdio.h>

int main(){

	int a=10;
	float b=19.3;
	double d=64.8;
	char c=64;

	printf("La suma de %d y %f es: %f\n",a,b,a+b);
	printf("La suma de %c y %lf es: %lf\n",c,d,c+d);
	printf("La suma de %lf y %d es: %d\n",d,a,(int)d+a);
	printf("La suma de %lf y %f es: %lf\n",d,b,d+b);
	printf("La suma de %c + %lf es: %f\n",c,d,(float)c+d);
}
