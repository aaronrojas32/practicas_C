/*
 * Nombre: corona.c 
 *
 * Descripcion: Programa que pide el valor de los radios de una corona circular y nos muestra su perímetro y su área
 *
 * @autor: Aaron Rojas Gutierrez
 *
 * @fecha: 08/03/2023
 *
 * @version: 1.0
 *
 */
#include <stdio.h>
#include <math.h>

float pide_radio();
float calcula_perimetro(float, float);
float calcula_area(float, float);

int main()
{
    float radio_ext, radio_int, perimetro, area;
    radio_ext = pide_radio();
    radio_int = pide_radio();
    perimetro = calcula_perimetro(radio_ext, radio_int);
    area = calcula_area(radio_ext, radio_int);
    printf("Perimetro: %f\n", perimetro);
    printf("Area: %f\n", area);
    return 0;
}

/*
 * Nombre_funcion: pide_radio
 *
 * Descripcion: Funcion que pide al usuario el valor del radio de un círculo
 *
 * @param: Ninguno
 *
 * @return: radio - el valor del radio introducido por el usuario
 *
 * @autor: Aaron Rojas Gutierrez
 *
 * @version: 1.0
 *
 */
float pide_radio()
{
    float radio;
    printf("Introduce el valor del radio: ");
    scanf("%f", &radio);
    return radio;
}

/*
 * Nombre_funcion: calcula_perimetro
 *
 * Descripcion: Funcion que calcula el perímetro de una corona circular dados los radios exterior e interior
 *
 * @param: radio_ext - el radio exterior de la corona circular
 *         radio_int - el radio interior de la corona circular
 *
 * @return: perimetro - el valor del perímetro de la corona circular
 *
 * @autor: Aaron Rojas Gutierrez
 *
 * @version: 1.0
 *
 */
float calcula_perimetro(float radio_ext, float radio_int)
{
    float perimetro;
    perimetro = 2 * M_PI * radio_ext + 2 * M_PI * radio_int;
    return perimetro;
}


/*
 * Nombre_funcion: calcula_area
 *
 * Descripcion: Funcion que calcula el área de una corona circular dados los radios exterior e interior
 *
 * @param: radio_ext - el radio exterior de la corona circular
 *         radio_int - el radio interior de la corona circular
 *
 * @return: area - el valor del área de la corona circular
 *
 * @autor: Aaron Rojas Gutierrez
 *
 * @version: 1.0
 *
 */
float calcula_area(float radio_ext, float radio_int)
{
    float area;
    area = M_PI * pow(radio_ext - radio_int, 2);
    return area;
}
