/**
 * Nombre: serie_impares.c
 * Descripcion: Programa que calcula la serie de los numeros impares hasta un numero introducido.
 * 
 * @author Aaron Rojas Gutierrez
 * @version 1.0
 * @date 2023-04-22
 * 
 */
#include <stdio.h>

int recogeNum();
void calculaSerie(int);

int main(){
    int num;

    num = recogeNum();
    calculaSerie(num);

    return 0;
}

/**
 * Nombre: recogeNum
 * Descripcion: Funcion que solicita un numero al usuario y recoge el valor introducido
 * 
 * @return int 
 */
int recogeNum(){
    
    int num;

    printf("Introduzca un numero para calcular la serie: \n");
    scanf("%d",&num);

    return num;
}

/**
 * Nombre: calculaSerie
 * Descripcion: Funcion que calcula la serie de los numeros impares hasta el numero introducido por el usuario
 * 
 * @param num - numero introducido por el usuario
 * 
 * @return void
 */
void calculaSerie(int num){
    int i;
    for (i = 1; i <= num; i += 2) {
        printf("%d ", i);
    }
}