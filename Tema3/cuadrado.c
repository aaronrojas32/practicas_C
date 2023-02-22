/*
 * Nombre: cuadrado.c
 *
 * Descripcion: Programa que pide el valor del lado de un cuadrado y muestra el
 * perimetro y el area.
 *
 * Fecha: 22-02-2023
 *
 * Autor: Aaron Rojas Gutierrez
 *
 * Version: 1.0
*/

#include <stdio.h>

int perimetro (int);
int area(int);
void pide_lado (int *);

int main(){
	int lado,per,are;
	pide_lado(&lado);
	per=perimetro(lado);
	are=area(lado);

	printf("El perimetro de un cuadrado de lado %d es %d y el area es %d \n",lado,per,are);
}

/*
 * @function: perimetro
 *
 * @description: funcion que calcula el perimtro de un cuadrado
 *
 * @param: int lado
 *
 * @return: int per
 *
 * @version: 1.0
 */
int perimetro (int lado){
	int per;
	per = 4 * lado;

	return per;
}

/*
 * @function: area
 *
 * @description: funcion que calcula el area de un cuadrado
 *
 * @param: int lado
 *
 * @return: int area
 *
 * @version: 1.0
 */
int area(int lado){
	int area;
	area = lado * lado;

	return area;
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
	printf("Introduzca el valor del lado: \n");
	scanf("%d",lado);
}
