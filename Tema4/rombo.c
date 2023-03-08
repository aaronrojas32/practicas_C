/*
 * Nombre: rombo.c 
 *
 * Descripcion: Programa que pide el valor de las diagonales de un rombo y nos muestra el perimetro y el area
 *
 * @autor: Aaron Rojas Gutierrez
 *
 * @fecha: 08/03/2023
 *
 * @version: 1.0
 *
 */

#include <stdio.h>
#include <math.h>

float perimetro(float, float);
float area(float, float);
void pide_diagonal(float *);
int limpiar_buffer();

int main(){

	float per,are,DM,dm;

	pide_diagonal(&DM);
	pide_diagonal(&dm);

	per=perimetro(DM,dm);
	are=area(DM,dm);
	
	printf("El perimetro del rombo es: %.2f y el area del rombo es: %.2f \n",per,are);

	return 0;
}


/*
 * Nombre_funcion: area
 *
 * Descripcion: Funcion que calcula el area del rombo
 *
 * @param: D - diagonal_mayor, d - diagonal menor
 *
 * @return: a - area del rombo
 *
 * @autor: Aaron Rojas Gutierrez
 *
 * @version: 1.0
 *
 */
float area(float D,float d){

	float a;

	a = (D * d) * 0.5;

	return a;

}

/*
 * Nombre_funcion: permietro
 *
 * Descripcion: Funcion que calcula el perimetro del rombo
 *
 * @param: D - diagonal_mayor, d - diagonal menor
 *
 * @return: p - perimetro del rombo
 *
 * @autor: Aaron Rojas Gutierrez
 *
 * @version: 1.0
 *
 */
float perimetro(float D, float d){

	float p;

	p = 2 * sqrt(pow(d,2)+pow(D,2));

	return p;
}

/*
 * Nombre_funcion: pide_diagonal
 *
 * Descripcion: Funcion que pide la diagonal de un rombo
 *
 * @param: diag - direccion de memoria de la diagonal
 *
 * @return: 
 *
 * @autor: Aaron Rojas Gutierrez
 *
 * @version: 1.0
 *
 */
void pide_diagonal(float *diag){

	printf("Valor de la diagonal: \n");
	scanf("%f",diag);
	limpiar_buffer();
}

int limpiar_buffer(){

	while(getchar() != '\n')
	
	return 1;
}

