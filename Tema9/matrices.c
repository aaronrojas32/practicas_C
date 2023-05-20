#include <stdio.h>

void menu(int matrizA[3][3], int matrizB[3][3]);
void sumaMatrices(int matrizA[3][3], int matrizB[3][3]);
void restaMatrices(int matrizA[3][3], int matrizB[3][3]);
void limpiarBuffer();

int main() {
    int matrizA[3][3];
    int matrizB[3][3];
    int i, j;

    printf("Introduzca elemento por elemento la matriz A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Introduzca el elemento: ");
            scanf("%d", &matrizA[i][j]);
            limpiarBuffer(); 
        }
    }

    printf("Introduzca elemento por elemento la matriz B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Introduzca el elemento: ");
            scanf("%d", &matrizB[i][j]);
            limpiarBuffer(); 
        }
    }

    menu(matrizA, matrizB);
    return 0;
}

/**
 * Nombre: menu
 * Descripcion: Funcion que permite al usuario escoger una opcion para operar con sus matrices o salir del programa
 * 
 * @param matrizA - matriz A introducida por el usuario
 * @param matrizB - matriz B introducida por el usuario
 * @version 1.0
 */
void menu(int matrizA[3][3], int matrizB[3][3]) {
    int opcion;

    do {
        printf("\nMenu:\n");
        printf("+) Sumar dos matrices 3x3\n");
        printf("-) Restar dos matrices 3x3\n");
        printf("s) Salir\n");
        printf("Ingrese su opcion: ");
        scanf(" %c", &opcion);
        limpiarBuffer();

        switch (opcion) {
            case '+':
                sumaMatrices(matrizA, matrizB);
                break;
            case '-':
                restaMatrices(matrizA, matrizB);
                break;
            case 's':
                printf("\nSaliendo del programa...\n");
                break;
            default:
                printf("\nOpcion incorrecta, seleccione otra opcion.\n");
        }
    } while (opcion != 's');
}

/**
 * Nombre: sumaMatrices
 * Descripcion: Funcion que suma dos matrices elemento por elemento
 * 
 * @param matrizA - matriz A introducida por el usuario
 * @param matrizB - matriz B introducida por el usuario
 * @version 1.0
 */
void sumaMatrices(int matrizA[3][3], int matrizB[3][3]) {
    int resultado[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("\nResultado de la suma:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}

/**
 * Nombre: restaMatrices
 * Descripcion: Funcion que resta dos matrices elemento por elemento
 * 
 * @param matrizA - matriz A introducida por el usuario
 * @param matrizB - matriz B introducida por el usuario
 * @version 1.0
 */
void restaMatrices(int matrizA[3][3], int matrizB[3][3]) {
    int resultado[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            resultado[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }

    printf("\nResultado de la resta:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}

/**
 * Nombre: limpiarBuffer
 * Descripcion: Funcion que limpia el buffer de entrada
 * @version 1.0
 */
void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}