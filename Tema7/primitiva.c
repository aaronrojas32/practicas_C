/**
 * Nombre: primitiva.c
 * Descripcion: Programa que genera una combiancion ganadora de numeros de la primitiva
 * @author Aaron Rojas Gutierrez ()
 * 
 * @version 1.0
 * @date 2023-04-22
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prototipos de funciones
void inicializar_generador_aleatorio();
int generar_numero_aleatorio_no_repetido(int numeros[], int num_numeros_generados);
void generar_combinacion_ganadora(int numeros[], int num_numeros);
void mostrar_combinacion_ganadora(int numeros[], int num_numeros, int reintegro);

int main() {
    int numeros[6];
    int reintegro;

    // Inicializar el generador de números aleatorios
    inicializar_generador_aleatorio();

    // Generar la combinación ganadora
    generar_combinacion_ganadora(numeros, 6);

    // Generar el número de reintegro
    reintegro = rand() % 10;

    // Mostrar los resultados por pantalla
    mostrar_combinacion_ganadora(numeros, 6, reintegro);

    return 0;
}

// Función que inicializa el generador de números aleatorios
void inicializar_generador_aleatorio() {
    srand(time(NULL));
}

// Función que genera un número aleatorio que no se haya generado antes
int generar_numero_aleatorio_no_repetido(int numeros[], int num_numeros_generados) {
    int repetido, num;

    do {
        repetido = 0;
        num = rand() % 49 + 1;
        for (int i = 0; i < num_numeros_generados; i++) {
            if (numeros[i] == num) {
                repetido = 1;
                break;
            }
        }
    } while (repetido);

    return num;
}

// Función que genera la combinación ganadora de números principales
void generar_combinacion_ganadora(int numeros[], int num_numeros) {
    for (int i = 0; i < num_numeros; i++) {
        numeros[i] = generar_numero_aleatorio_no_repetido(numeros, i);
    }
}

// Función que muestra por pantalla la combinación ganadora y el número de reintegro
void mostrar_combinacion_ganadora(int numeros[], int num_numeros, int reintegro) {
    printf("Los números ganadores son:");
    for (int i = 0; i < num_numeros; i++) {
        printf(" %d", numeros[i]);
    }
    printf("\nEl número de reintegro es: %d\n", reintegro);
}
