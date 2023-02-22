/*
 * Nombre: calculadora.c
 * Descripcion: El programa leera dos numeros enteros introducidos por telcado y mostrara el
 * resultado de sumar, restar, multiplicar y dividir esos valores
 *
 * Fecha: 22-02-2023
 *
 * Autor: Aaron Rojas Gutierrez
 *
 * Version: 1.0
 */

#include <stdio.h>

void LeerNumero(int *);
void EscribirResultado(int, int, char, float);
int Sumar(int, int);
int Restar(int, int);
int Multiplicar(int, int);
float Dividir(int, int);

int main(){
	int num1,num2;
       	float sum, res,mult,divi;
	
	LeerNumero(&num1);
	LeerNumero(&num2);

	sum=Sumar(num1,num2);
	res=Restar(num1,num2);
	mult=Multiplicar(num1,num2);
	divi=Dividir(num1,num2);
	
	EscribirResultado(num1,num2,'+',sum);
	EscribirResultado(num1,num2,'-',res);
	EscribirResultado(num1,num2,'*',mult);
	EscribirResultado(num1,num2,'/',divi);

	return 0;
}

/*
 * @function: LeerNumero
 * @description: Recoge un numero y lo almacena por referencia
 * @param: int
 * @return: void
*/
void LeerNumero(int *num){

	printf("Introduzca un numero: \n");
	scanf("%d",num);
}

/*
 * @function: EscribirResultado
 * @description: Escribe el resultado de las operaciones realizadas
 * @param: int, int, char, float
 * @return: void
*/
void EscribirResultado(int num1, int num2, char operador, float resultado){
	printf("%d %c %d = %g\n",num1,operador,num2,resultado);
}

/*
 * @function: Sumar
 * @description: Suma dos numeros
 * @param: int, int
 * @return: int
*/
int Sumar(int num1, int num2){

	int suma;
	
	suma =(float)num1+num2;
	
	return suma;
}

/*
 * @function: Restar
 * @description: Resta dos numeros
 * @param: int, int
 * @return: int
*/
int Restar(int num1, int num2){

        int resta;

        resta =(float)num1-num2;

        return resta;
}

/*
 * @function: Multiplicar
 * @description: Multiplica dos numeros
 * @param: int, int
 * @return: int
*/

int Multiplicar(int num1, int num2){

        int multi;

        multi =(float)num1*num2;

        return multi;
}

/*
 * @function: Dividir
 * @description: Divide dos numeros
 * @param: int, int
 * @return: float
*/
float Dividir(int num1, int num2){

        float divi;

        divi = (float)num1/num2;

        return divi;
}
