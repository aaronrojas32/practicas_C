#include <stdio.h>

void escribir(FILE *);

int main() {
    FILE *archivo;

    archivo = fopen("tablaMultiplicar.txt", "w");

    if (archivo == NULL) {
        printf("\nError al abrir el archivo.");
    } else {
        escribir(archivo);
        if (fclose(archivo) == 0) {
            printf("\nFichero cerrado correctamente.");
        }
    }
    
    printf("\nLa tabla de multiplicar se ha guardado en el archivo tablaMultiplicar.txt");

    return 0;
}

void escribir(FILE *archivo) {
    fprintf(archivo, "Tabla de multiplicar del 5:\n\n");
    fprintf(archivo, "Decimal\t\tOctal\t\tHexadecimal\n");

    for (int i = 1; i <= 10; i++) {
        int decimal = 5 * i;
        int octal = decimal;
        int hexadecimal = decimal;

        fprintf(archivo, "%d\t\t%o\t\t%X\n", decimal, octal, hexadecimal);
    }
}