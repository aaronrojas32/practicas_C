/*
 * Nombre: fracciones.c
 * Descripcion: El programa leera dos fracciones introduccidas por teclado y realizara
 * las operaciones de suma, resta, multiplicacion y division.
 *
 * Fecha: 22-02-2023
 *
 * Autor: Aaron Rojas Gutierrez
 *
 * Version: 1.0
 */

#include <stdio.h>

void LeerFraccion(int *,int *);
void EscribirFraccion (int, int);
void SumarFracciones (int, int, int, int, int *, int *);
void RestarFracciones (int, int, int, int, int *, int *);
void MultiplicarFracciones (int, int, int, int, int *, int *);
void DividirFracciones (int, int, int, int, int *, int *);


int main(){
    int num1,num2,numS,numR,numM,numD,den1,den2,denS,denR,denM,denD;
    LeerFraccion(&num1,&den1);
    LeerFraccion(&num2,&den2);
    SumarFracciones(num1,den1,num2,den2,&numS,&denS);
    RestarFracciones(num1,den1,num2,den2,&numR,&denR);
    MultiplicarFracciones(num1,den1,num2,den2,&numM,&denM);
    DividirFracciones(num1,den1,num2,den2,&numD,&denD);
    
    printf("Resultados de las operaciones: \n");
    printf("Suma: ");
    EscribirFraccion(numS,denS);
    printf("Resta: ");
    EscribirFraccion(numR,denR);
    printf("Multiplicacion: ");
    EscribirFraccion(numM,denM);
    printf("Division: ");
    EscribirFraccion(numD,denD);
    
    return 0;
}

/*
 * @function: LeerFraccion
 * @description: Recoge una fraccion y almacena su numerador y divisor por referencia
 * @param: int, int
 * @return: void
*/
void LeerFraccion(int *numerador, int *denominador){
    printf("Introduzca la fraccion en el formato numerador/denominador: \n");
    scanf("%d/%d",numerador,denominador);
}

/*
 * @function: EscribirFraccion
 * @description: Imprime una fraccion por pantalla
 * @param: int, int
 * @return: void
*/
void EscribirFraccion(int numerador, int denominador){
    printf("%d/%d \n",numerador,denominador);
}

/*
 * @function: SumarFracciones
 * @description: Realiza la suma de dos fracciones y almacena el resultado.
 * @param: int, int, int, int, int *, int*
 * @return: void
*/
void SumarFracciones(int num1, int den1, int num2, int den2, int *num_r, int*den_r){
    *num_r= (num1 * den2) + (num2 * den1);
    *den_r= den1*den2;
}

/*
 * @function: RestarFracciones
 * @description: Realiza la resta de dos fracciones y almacena el resultado.
 * @param: int, int, int, int, int *, int*
 * @return: void
*/
void RestarFracciones(int num1, int den1, int num2, int den2, int *num_r, int*den_r){
    *num_r= (num1 * den2) - (num2 * den1);
    *den_r= den1 * den2;
}

/*
 * @function: MultiplicarFracciones
 * @description: Realiza la multiplicacion de dos fracciones y almacena el resultado.
 * @param: int, int, int, int, int *, int*
 * @return: void
*/
void MultiplicarFracciones(int num1, int den1, int num2, int den2, int *num_r, int*den_r){
    *num_r= num1 * num2;
    *den_r= den1 * den2;
}

/*
 * @function: DividirFracciones
 * @description: Realiza la division de dos fracciones y almacena el resultado.
 * @param: int, int, int, int, int *, int*
 * @return: void
*/
void DividirFracciones(int num1, int den1, int num2, int den2, int *num_r, int*den_r){
    *num_r= num1 * den2;
	*den_r= den1 * num2;
}