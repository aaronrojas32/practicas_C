/*
 *Nombre: diasSemana.c
 *
 *Descripcion: Imprimir todos los dias de la semana utilizando una variable de tipo enum
 * 
 *@autor: Aaron Rojas Gutierrez
 *
 *fecha: 08/03/2023
 *
 *@version: 1.0
 */

#include <stdio.h>

//Definicion del tipo enum
enum diasSemana{LUNES,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO,DOMINGO};

int main(){
	

	enum diasSemana inicio = DOMINGO;

	printf("Dia acutal %d\n", inicio);
	printf("%d %d %d %d %d %d \n",inicio+1,inicio+2,inicio+3,inicio+4,inicio+5,inicio+6);


	return 0;

}
