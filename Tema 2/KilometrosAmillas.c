/*
Nombre del programa: KilometrosAmillas.c

Descripcion: Programa que pide una distancia en kilometros y la transforma a millas

Autor: Aaron Rojas Gutierrez

Version: 1.0
*/

#include <stdio.h>

int main(){
	int km;
	float mill;
	printf("Introduzca la distancia en kilometros: \n");
	scanf("%d",&km);
	mill = (float) km * 0.62;
	printf("%d Km son %g millas \n",km,mill);	
}
