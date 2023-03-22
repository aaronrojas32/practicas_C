/*
 * Nombre: diasMes.c
 *
 * Descripción: programa que solicita al usuario un mes y un año y muestra por pantalla 
 * cuántos días tiene ese mes, incluyendo la posibilidad de que un año sea bisiesto.
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @fecha: 22/03/2023
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
    case MARZO:
    case MAYO:
    case JULIO:
    case AGOSTO:
    case OCTUBRE:
    case DICIEMBRE:
        dias = 31;
        break;
    case ABRIL:
    case JUNIO:
    case SEPTIEMBRE:
    case NOVIEMBRE:
        dias = 30;
        break;
    case FEBRERO:
        if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
            dias = 29;
        } else {
            dias = 28;
        }
        break;
    default:
        printf("Mes no valido\n");
        return 1;
    }


    printf("El mes %d del anio %d tiene %d dias.\n", mes, anio, dias);
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

    printf("\nIntroduzca un anio: ");
    scanf("%d",&anio);
    limpiarBuffer();
    
    return anio;
}