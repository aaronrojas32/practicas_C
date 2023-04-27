/**
 * Nombre: tabla.c 
 * Descripcion: Programa que almacena la tabla de multplicar del 5 en decimal,
 * octal y hexadecimal en un archivo de texto.
 *
 * @auhtor: Aaron Rojas Gutierrez
 * @version: 1.0
 * @date: 27/04/2023
 */

#include <stdio.h>

int main(){

	FILE *archivo;
	int num=5,i;

	archivo = fopen("tabla.txt", "w");

	if (archivo == NULL){
		printf("Error al crear el archivo\n");
	}
	else{
		fprintf(archivo, "Tabla del %d\n", num);
		fprintf(archivo, "================\n");

		for (i = 1; i <= 10; i++) {
        		fprintf(archivo, "%d x %d = %d (decimal)\n", num, i, num * i);
        		fprintf(archivo, "%d x %o = %o (octal)\n", num, i, num * i);
        		fprintf(archivo, "%d x %x = %x (hexadecimal)\n\n", num, i, num * i);
    		}

		if (fclose(archivo) == 0){
			printf("Archivo cerrado correctamente\n");
		}
	}

	return 0;
}

