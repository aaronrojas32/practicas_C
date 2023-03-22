#include <stdio.h>
#include <math.h>

#define PI 3.14159265359 // Valor de PI constante

int main() {
    int opcion;
    float lado, base, altura, radio, ladoMayor, ladoMenor, ancho;

    printf("Calculadora de áreas y perímetros de figuras planas\n");
    printf("-------------------------------------------------\n");
    printf("1. Cuadrado\n");
    printf("2. Rectángulo\n");
    printf("3. Rombo\n");
    printf("4. Círculo\n");
    printf("5. Corona circular\n");
    printf("-------------------------------------------------\n");
    printf("Ingrese la opción correspondiente a la figura: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1: // Cuadrado
            printf("Ingrese el lado del cuadrado: ");
            scanf("%f", &lado);
            printf("El área del cuadrado es: %.2f\n", lado * lado);
            printf("El perímetro del cuadrado es: %.2f\n", 4 * lado);
            break;

        case 2: // Rectángulo
            printf("Ingrese la base del rectángulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del rectángulo: ");
            scanf("%f", &altura);
            printf("El área del rectángulo es: %.2f\n", base * altura);
            printf("El perímetro del rectángulo es: %.2f\n", 2 * (base + altura));
            break;

        case 3: // Rombo
            printf("Ingrese el lado mayor del rombo: ");
            scanf("%f", &ladoMayor);
            printf("Ingrese el lado menor del rombo: ");
            scanf("%f", &ladoMenor);
            printf("El área del rombo es: %.2f\n", (ladoMayor * ladoMenor) / 2);
            printf("El perímetro del rombo es: %.2f\n", 4 * sqrt(pow(ladoMayor / 2, 2) + pow(ladoMenor / 2, 2)));
            break;

        case 4: // Círculo
            printf("Ingrese el radio del círculo: ");
            scanf("%f", &radio);
            printf("El área del círculo es: %.2f\n", PI * pow(radio, 2));
            printf("El perímetro del círculo es: %.2f\n", 2 * PI * radio);
            break;

        case 5: // Corona circular
            printf("Ingrese el radio mayor de la corona circular: ");
            scanf("%f", &ladoMayor);
            printf("Ingrese el radio menor de la corona circular: ");
            scanf("%f", &ladoMenor);
            printf("El ancho de la corona circular es: ");
            scanf("%f", &ancho);
            printf("El área de la corona circular es: %.2f\n", PI * (pow(ladoMayor, 2) - pow(ladoMenor, 2)) - ancho * (ladoMayor + ladoMenor));
            printf("El perímetro de la corona circular es: %.2f\n", 2 * PI * (ladoMayor + ladoMenor));
            break;

        default:
            printf("Opción no válida\n");
    }

    printf("Presione cualquier tecla para salir...\n");
    getchar(); // Espera a que el usuario presione una tecla para salir
    return 0;
}