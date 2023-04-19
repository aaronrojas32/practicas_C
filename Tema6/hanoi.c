/*
 * Nombre: hanoi.c
 * Descripcion: Programa que resuelve el problema de las torres de hanoi de forma recursiva
 * 
 * @author: Aaron Rojas Gutierrez
 * @version: 1.0
 * @date: 19/04/2023
 */
#include <stdio.h>

void hanoi(int n, char origen, char destino, char auxiliar);

int main() {
    int n;
    printf("Ingrese el número de discos: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}

/*
 * Nombre: hanoi
 * Descripcion: Función que resuelve el problema de las torres de Hanoi de forma recursiva
 *
 * @param n: número de discos
 * @param origen: pilar origen
 * @param destino: pilar destino
 * @param auxiliar: pilar auxiliar
 *
 * Autor: Aaron Rojas Gutiérrez
 * Version: 1.0
 */
void hanoi(int n, char origen, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mover disco 1 de %c a %c\n", origen, destino);
        return;
    }
    hanoi(n-1, origen, auxiliar, destino);
    printf("Mover disco %d de %c a %c\n", n, origen, destino);
    hanoi(n-1, auxiliar, destino, origen);
}