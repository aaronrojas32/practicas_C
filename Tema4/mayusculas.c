/*
 * Nombre: mayusculas.c
 *
 * Descripcion: Programa que pide una letra en minusculas y la pasa a mayusculas
 *
 * @autor: Aaron Rojas Gutierrez
 *
 * @fecha: 08/03/2023
 */

#include <stdio.h>

char leerLetra();
void convertirAMayuscula(char*);
void escribirLetra(char);

int main() {
    char letra = leerLetra();
    convertirAMayuscula(&letra);
    escribirLetra(letra);
    return 0;
}

/*
 * Nombre: leerLetra
 * Descripcion: Funcion que lee una letra introducida por el usuario y devuelve
 *
 * @param: null
 *
 * @return: letra - letra introducida por el usuario
 *
 * @autor: Aaron Rojas Gutierrez
 *
 * @version 1.0
 */
char leerLetra() {
    char letra;
    printf("Ingrese una letra en minúscula: ");
    scanf(" %c", &letra);
    limpiar_buffer();
    return letra;
}

/*
 * Nombre: convertirAMayuscula
 * Descripcion: Funcion que convierte la letra pasada por referencia a mayuscula
 *
 * @param: letra - letra introducida por el usuario
 *
 * @return: null
 *
 * @autor: Aaron Rojas Gutierrez
 *
 * @version 1.0
 */
void convertirAMayuscula(char* letra) {
    *letra = *letra - 32;
}

/*
 * Nombre: escribirLetra
 * Descripcion: Funcion encargada de escribir la letra en mayuscula
 *
 * @param: letra - letra en mayuscula
 *
 * @return: null
 *
 * @autor: Aaron Rojas Gutierrez
 *
 * @version 1.0
 */
void escribirLetra(char letra) {
    printf("La letra en mayúscula es: %c\n", letra);
}

int limpiar_buffer(){

        while(getchar() != '\n')

        return 1;
}
