/*
 * Nombre: diasMes.c
 *
 * Descripción: programa que solicita al usuario un mes y un año y muestra por pantalla 
 * cuántos días tiene ese mes, incluyendo la posibilidad de que un año sea bisiesto.
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @fecha: 16/03/2023
 */

#include <stdio.h>

int pideMes();
int pideAnio();
int limpiarBuffer();

enum meses {ENERO = 1, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE};

int main(){
    int mes, anio, dias;

    mes = pideMes();
    anio = pideAnio();

    switch (mes) {
        case ENERO:
            dias = 31;
            break;
        case FEBRERO:
            if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;
        case MARZO:
            dias = 31;
            break;
        case ABRIL:
            dias = 30;
            break;
        case MAYO:
            dias = 31;
            break;
        case JUNIO:
            dias = 30;
            break;
        case JULIO:
            dias = 31;
            break; 
        case AGOSTO:
            dias = 31;
            break;
        case SEPTIEMBRE:
            dias = 30;
            break;
        case OCTUBRE:
            dias = 31;
            break;
        case NOVIEMBRE:
            dias = 30;
            break;
        case DICIEMBRE:
            dias = 31;
            break;
        default:
            printf("Mes no válido\n");
            return 1;
    }

    printf("El mes %d del año %d tiene %d días.\n", mes, anio, dias);
    return 0;
}

int limpiarBuffer(){

    while(getchar() != '\n')
    
    return 1;
}

/*
 * Nombre: pideMes
 * Descripción: Función que solicita al usuario un mes
 *
 * @return: mes - el mes introducido por el usuario
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @version 1.0
 */
int pideMes(){
    int mes;

    printf("\nIntroduzca un mes (1-12): ");
    scanf("%d",&mes);
    limpiarBuffer();

    return mes;
}

/*
 * Nombre: pideAnio
 * Descripción: Función que solicita al usuario un año
 *
 * @return: anio - el año introducido por el usuario
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @version 1.0
 */
int pideAnio(){
    int anio;

    printf("\nIntroduzca un año: ");
    scanf("%d",&anio);
    limpiarBuffer();

    return anio;
}