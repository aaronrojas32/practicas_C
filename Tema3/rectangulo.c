/*
 * Nombre: rectangulo.c
 *
 * Descripcion: Programa que pide el valor de los dos lados de un rectangulo y muestra el
 * valor del perimetro y el area.
 *
 * Fecha: 22-02-2023
 *
 * Autor: Aaron Rojas Gutierrez
 *
 * Version: 1.0
 */

#include <stdio.h>

int perimetro (int, int);
int area(int, int);
void pide_lado(int *);

int main(){

	int l1,l2,per,are;

	pide_lado(&l1);
	pide_lado(&l2);

	are=area(l1,l2);
	per=perimetro(l1,l2);

	printf("El valor del area es %d y el valor del perimetro es %d\n",are,per);

	return 0;
}

/*
 * @function: pide_lado
 *
 * @description: funcion que pide el lado de un cuadrado y recoge su valor
 *
 * @param: int *lado
 *
 * @return: 
 *
 * @version: 1.0
 */
void pide_lado(int *lado){

	printf("Introduzca el valor del lado del rectangulo \n");
	scanf("%d",lado);
}

/*
 * @function: area
 *
 * @description: funcion que calcula el area de un rectangulo
 *
 * @param: int l1, int l2
 *
 * @return: int area
 *
 * @version: 1.0
 */
int area(int l1, int l2){

	int area;
	area = l1*l2;

	return area;
}

/*
 * @function: perimetro
 *
 * @description: funcion que calcula el perimtro de un rectangulo
 *
 * @param: int l1, itn l2
 *
 * @return: int per
 *
 * @version: 1.0
 */
int perimetro(int l1, int l2){
	int per;
	per = (2*l1) + (2*l2);

	return per;
}
