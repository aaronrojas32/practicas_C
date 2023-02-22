/*
 * Nombre: circunferencia.c
 *
 * Descripcion: Programa que pide el valor del radio de una circunferencia y nos miestra
 * su perimetro y el area del circulo que encierra
 *
 * Fecha 22-2-2023
 *
 * Autor: Aaron Rojas Gutierrez
 *
 * Version 1.0
 */

#include <stdio.h>
#define PI 3.14

int area(int);
int perimetro(int);
int recoge_radio();

int main(){

	int radio, ar, per;
	radio=recoge_radio();
	per=perimetro(radio);
	ar=area(radio);

	printf("El valor del area es %d y el valor del perimetro es %d \n",ar,per);

	return 0;

}

/*
 * @function: recoge_radio
 *
 * @description: funcion que recoge el radio de una circunferencia
 *
 * @param: null
 *
 * @return: int rad
 *
 * @version: 1.0
 */
int recoge_radio(){

	int rad;

	printf("Introduzca el radio de la circunferencia \n");
	scanf("%d",&rad);

	return rad;
}

/*
 * @function: perimetro
 *
 * @description: funcion que calcula el perimtro de una circunferencia
 *
 * @param: int rad
 *
 * @return: int per
 *
 * @version: 1.0
 */
int perimetro(int rad){
	int per;

	per=2*PI*rad;

	return per;
}

/*
 * @function: area
 *
 * @description: funcion que calcula el area de una circunferencia
 *
 * @param: int rad
 *
 * @return: int area
 *
 * @version: 1.0
 */
int area(int rad){

	int ar;

	ar=PI*rad*rad;

	return ar;
}
