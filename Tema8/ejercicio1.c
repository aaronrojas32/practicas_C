/**
 * Nombre: datos.c
 * Descripcion: Programa que abre un archivo y muestra los datos por pantalla.
 * 
 * @author Aaron Rojas Gutierrez () 
 * @version 1.0
 * @date 2023-04-26
 * 
 */

#include <stdio.h>

#define LONG 15

void leer(FILE *);

int main(void){
    FILE *fichero;

    fichero = fopen("datos.txt","r");
    if(fichero == NULL){
        printf("No se puede abrir el fichero \n");
    }
    else{
        leer(fichero);
        if(fclose(fichero) == 0){
            printf("Fichero cerrado correctamente\n");
        }
    }

    return 0;
}

/**
 * Nombre: leer
 * Descripcion: Funcion que se encarga de leer los datos del archivo e imprimirlos por pantalla
 * 
 * @param f - Nombre del archivo con el que trabaja
 */
void leer(FILE *f){
    char nombre[LONG];
    int curso;
    float nota;

    fscanf(f, "%c, %d, %g\n", nombre, &curso, &nota);
    while (!feof(f))
    {
        printf("%c, %d, %g\n", nombre, curso, nota);
        fscanf(f, "%s, %d, %g\n", nombre, &curso, &nota);
    }
    if(feof(f)){
        printf("Final del fichero\n");
    }
    else{
        printf("Error leyendo el fichero\n");
    }
    
}