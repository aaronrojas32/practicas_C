/*
 * Nombre: poligono.c
 *
 * Descripcion: Programa que pide el numero de lados y el valor del radio de un poligono y calcula y muestra el valor del area y del permietro del poligono
 *
 * @autor: Aaron Rojas Gutierrez
 *
 * @fecha: 08/03/2023
 */

#include <stdio.h>
#include <math.h>

int limpiar_buffer();
int pide_lados();
void pide_radio(float *);
float perimetro(int, float);
float longitud_lado(int, float);
float area(float, float);
float apotema(float, float);

int main(){
	int n_lados;
	float radio, l, ap, ar, per;

	n_lados=pide_lados();
	pide_radio(&radio);

	l=longitud_lado(n_lados, radio);
	ap=apotema(radio,l);

	per=perimetro(n_lados,l);
	ar=area(ap,per);

	printf("El perimetro del poligono es: %.2f \n",per);
	printf("El area del poligono es: %.2f \n",ar);


	return 0;
}

int limpiar_buffer(){

	while(getchar() != '\n')

	return 1;
}

/*
 * Nombre: pide_lados
 *
 * Funcion encargada de recoger el numero de lados de un poligono
 *
 * @param: null
 *
 * @return: num - Numero de lados del poligono
 *
 * @author: Aaron Rojas Gutierrez
 *
 * @version: 1.0 
 */
int pide_lados(){
	int num;

	printf("Introduzca el numero de lados el poligono: \n");
	scanf("%d",&num);
	limpiar_buffer();

	return num;
}

/*
 * Nombre: pide_radio
 *
 * Funcion encargada de recoger el radio de lados de un poligono
 *
 * @param: *r - direccion de memoria donde se almacena el radio
 *
 * @return: null
 *
 * @author: Aaron Rojas Gutierrez
 *
 * @version: 1.0
 */
void pide_radio(float *r){

	printf("Introduzca el valor del radio: \n");
	scanf("%f",r);
	limpiar_buffer();

}

/*
 * Nombre: perimetro
 *
 * Funcion encargada de calcular el perimetro de un poligono
 *
 * @param: n - numero de lados del poligono, l_lado - longitud del lado del poligono
 *
 * @return: per - Valor del perimetro
 *
 * @author: Aaron Rojas Gutierrez
 *
 * @version: 1.0
 */
float perimetro(int n, float l_lado){

	float per;

	per = n * l_lado;

	return per;
}

/*
 * Nombre: longitud_lado
 *
 * Funcion encargada de calcular la longitud del lado de un poligono
 *
 * @param: n - numero de lados del poligono, radio - valor del radio del poligono
 *
 * @return: lado - valor del la longitud del lado del poligono
 *
 * @author: Aaron Rojas Gutierrez
 *
 * @version: 1.0
 */
float longitud_lado(int n, float radio){

	float angulo, coseno, lado;

	angulo = 360/n;
	coseno = cos(angulo * M_PI / 180);
	lado = sqrt(2* pow(radio, 2) * (1-coseno));

	return lado;

}

/*
 * Nombre: area
 *
 * Funcion encargada de calcular el area de un poligono
 *
 * @param: ap - apotema lados del poligono, per - perimetro del poligono
 *
 * @return: a - Valor del area del poligono
 *
 * @author: Aaron Rojas Gutierrez
 *
 * @version: 1.0
 */
float area (float ap, float per){
	float a;

	a = per * ap;

	return a;
}

/*
 * Nombre: apotema
 *
 * Funcion encargada de calcular la apotema de un poligono
 *
 * @param: radio - radio del poligono, l_lado - longitud del lado del poligono
 *
 * @return: ap - Valor de la apotema del poligono
 *
 * @author: Aaron Rojas Gutierrez
 *
 * @version: 1.0
 */
float apotema(float radio, float l_lado){
	float ap;

	ap = sqrt(pow(radio,2) - pow(0.5*l_lado,2));

	return ap;
}
