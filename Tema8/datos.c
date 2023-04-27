/**
 * Nombre: datos.c
 * Descripcion: Programa que lee un archivo y muestra por pantalla su informacion
 *
 * @version 1.0
 * @autor: Aaron Rojas Gutierrez
 * @fecha 26/04/2023
 */

#include <stdio.h>

#define LONG 15

void leer(FILE *);

int main(void){

    FILE *fichero;

    fichero = fopen("datos.txt","r");
    if(fichero == NULL){
        printf("No se puede abrir el fichero\n");
    }
    else{
        leer(fichero);
        if(fclose(fichero) == 0){
            printf("Fichero cerrado correctamente\n");
        }
    }

    return 0;

}

void leer(FILE *f){
    char nombre[LONG];
    int curso;
    float nota;
    fscanf(f,"%[^,],%d,%g\n", nombre, &curso, &nota);
    while(!feof(f)){
        printf("%s,%d,%g\n", nombre, curso, nota);
        fscanf(f,"%[^,],%d,%g\n", nombre, &curso, &nota);
    }
    if(feof(f)){
        printf("Final del fichero\n");
    }
    else{
        printf("Error leyendo el fichero\n");
    }
}

