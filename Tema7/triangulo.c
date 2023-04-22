/**
 * Nombre: triangulo.c
 * Descripcion: Programa que imprime un triangulo del tamaño introducido
 * 
 * @author Aaron Rojas Gutierrez () 
 * @version 1.0
 * @date 2023-04-22
 * 
 * 
 */
#include <stdio.h>

int recoger_numero();
void imprimir_triangulo(int);

int main()
{
    int n;
    n = recoger_numero();
    imprimir_triangulo(n);
    return 0;
}

/**
 * Nombre: recoger_numero
 * Descripcion: Recoge el tamaño del triángulo introducido por el usuario
 * 
 * @return n El tamaño del triángulo introducido por el usuario.
 */
int recoger_numero() {
    int n;
    printf("Introduce el tamaño del triángulo: ");
    scanf("%d", &n);
    return n;
}

/**
 * Nombre: imprimir_triangulo
 * Descripcion: Imprime el triángulo de asteriscos del tamaño introducido
 * 
 * @param n El tamaño del triángulo a imprimir.
 */
void imprimir_triangulo(int n) {
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}