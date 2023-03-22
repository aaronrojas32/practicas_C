/*
 * Nombre: factorial.c
 *
 * Descripción: Programa que solicita al usuario un numero y calcula su factorial 
 * y lo imprime por pantalla
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @fecha: 22/03/2023
 */
#include <stdio.h>

void pideFecha(int*, int*, int*);
int limpiarBuffer();

int main(){
    int dia, mes, anio;

    pideFecha(&dia, &mes, &anio);

    if(anio <= 0){
        printf("Fecha no valida\n");
    }
    else{
        if(mes > 12 || mes < 1){
            printf("Fecha no valida\n");
        }
        else{
            switch (mes) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    if (dia > 31 || dia < 1){
                        printf("Fecha incorrecta\n");
                    }
                    else{
                        printf("Fecha correcta\n");
                    }
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    if (dia > 30 || dia < 1){
                        printf("Fecha incorrecta\n");
                    }
                    else{
                        printf("Fecha correcta\n");
                    }
                    break;
                case 2:
                    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
                        if (dia > 29 || dia < 1){
                            printf("Fecha incorrecta\n");
                        }
                        else{
                            printf("Fecha correcta\n");
                        }
                    } else {
                        if (dia > 28 || dia < 1){
                            printf("Fecha incorrecta\n");
                        }
                        else{
                            printf("Fecha correcta\n");
                        }
                    }
                    break;
                default:
                    printf("Mes no valido\n");
                    return 1;
            }
        }
    }

    return 0;
}

/*
 * Nombre: pideFecha
 * Descripción: Función que solicita al usuario una fecha en formato dd/mm/aaaa
 *
 * @param: dia - puntero al día de la fecha
 * @param: mes - puntero al mes de la fecha
 * @param: anio - puntero al año de la fecha
 *
 * @autor: Aaron Rojas Gutiérrez
 *
 * @version 1.0
 */
void pideFecha(int *dia, int *mes, int *anio){
    printf("Introduzca la fecha en el formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", dia, mes, anio);
    limpiarBuffer();
}

int limpiarBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);

    return 1;
}