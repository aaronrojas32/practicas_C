/*
Nombre del programa: fracciones.c

Descripcion: programa que pode 4 valores al usuario y los interpreta como numeradores y denominadores de dos fracciones

Autor: Aaron Rojas Gutierrez

Version 1.0

*/

#include <stdio.h>

int main(){

	int n1,n2,d1,d2;
	int nsum,nresta,ndiv,nprod,dsum,dresta,ddiv,dprod;

	printf("Introduzca las fracciones en el siguiente formato num1/den1,nu2/den2 \n");
	scanf("%d/%d,%d/%d",&n1,&d1,&n2,&d2);

	nsum = (n1 * d2) + (n2 * d1);
	dsum = d1*d2;

	nresta = (n1 *d2)-(n2 * d1);
	dresta = d1*d2;

	nprod = n1*n2;
	dprod = d1*d2;

	ndiv = n1*d2;
	ddiv = d1*n2;

	printf("La suma de las fracciones es: %d/%d\n",nsum,dsum);
	printf("La resta de las fracciones es: %d/%d\n",nresta,dresta);
	printf("La division de las fracciones es: %d/%d\n",ndiv,ddiv);
	printf("El producto de las fracciones es:%d/%d\n",nprod,dprod);

}
