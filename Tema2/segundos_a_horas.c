/*
Nombre del programa: segundos_a_horas.c

Descripcion: Programa que pide una cantidad de segundos y muestre su equivalente en horas y el resto en minutos y segundos.

Autor: Aaron Rojas Gutierrez

Version: 1.0

*/

#include <stdio.h>

int main(){
	int horas,min,seg_i,seg;
	printf("Introduzca una cantidad de tiempo en segundos \n");
	scanf("%d",&seg_i);
	seg=seg_i;
	horas = seg / (60*60);
       	seg %= 60*60;
	min = seg / 60;
	seg %= 60;
	
	printf("%d segundos son %d horas, %d minutos y %d segundos \n",seg_i,horas,min,seg);
}
