#include <stdio.h>

int main() {
    FILE *archivo;
    char caracter;
    int contador_caracteres = 0;
    int contador_lineas = 0;

    archivo = fopen("tablaMultiplicar.txt", "r");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    else{
        while ((caracter = fgetc(archivo)) != EOF){
            contador_caracteres ++;

            if (caracter == '\n'){
                contador_lineas ++;
            }
        }
        if(fclose(archivo) == 0){
            printf("\nArchivo cerrado correctamente.");
        }

        printf("Total de caracteres: %d\n", contador_caracteres);
        printf("Total de lineas: %d\n", contador_lineas);
    }

    return 0;
}