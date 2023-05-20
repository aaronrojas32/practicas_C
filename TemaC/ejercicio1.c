#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_NIF 10
#define MAX_REGISTROS 50
#define MAX_NOMBRE 40
#define MAX_OBSERVACIONES 100
#define MAX_DIRECCION 100
#define MAX_TLF 9

struct fecha {
    int dia;
    int mes;
    int anio;
};

struct Cliente {
    char NIF[MAX_NIF];
    char Nombre[MAX_NOMBRE];
    char Direccion[MAX_DIRECCION];
    char Telefono[MAX_TLF];
    struct fecha ultimaVisita;
    char observaciones[MAX_OBSERVACIONES];
};

void introducirDatos(struct Cliente registros[], int max, int *numRegistros);
void Buscar(struct Cliente registros[], int numRegistros, const char *nif);
void MenuPrincipal(struct Cliente registros[], int numRegistros);
void LimpiarBuffer();

int main() {
    struct Cliente registros[MAX_REGISTROS];
    int numRegistros = 0;

    MenuPrincipal(registros, numRegistros);

    return 0;
}

void introducirDatos(struct Cliente registros[], int max, int *numRegistros) {
    int i;
    char opcion;

    for (i = *numRegistros; i < max; i++) {
        do {
            printf("\nNIF: ");
            scanf("%9s", registros[i].NIF);
            LimpiarBuffer();
        } while (strlen(registros[i].NIF) > MAX_NIF);

        do {
            printf("Nombre: ");
            scanf(" %39[^\n]", registros[i].Nombre);
            LimpiarBuffer();
        } while (strlen(registros[i].Nombre) >= MAX_NOMBRE);

        do {
            printf("Direccion: ");
            scanf(" %99[^\n]", registros[i].Direccion);
            LimpiarBuffer();
        } while (strlen(registros[i].Direccion) >= MAX_DIRECCION);

        do {
            printf("Telefono: ");
            scanf(" %8s", registros[i].Telefono);
            LimpiarBuffer();
        } while (strlen(registros[i].Telefono) >= MAX_TLF);

        do {
            printf("Dia ultima visita: ");
            scanf("%d", &registros[i].ultimaVisita.dia);
            LimpiarBuffer();
        } while (registros[i].ultimaVisita.dia > 31 || registros[i].ultimaVisita.dia < 1);

        do {
            printf("Mes ultima visita: ");
            scanf("%d", &registros[i].ultimaVisita.mes);
            LimpiarBuffer();
        } while (registros[i].ultimaVisita.mes > 12 || registros[i].ultimaVisita.mes < 1);

        do {
            printf("Anio ultima visita: ");
            scanf("%d", &registros[i].ultimaVisita.anio);
            LimpiarBuffer();
        } while (registros[i].ultimaVisita.anio < 1);

        do {
            printf("Observaciones: ");
            scanf(" %99[^\n]", registros[i].observaciones);
            LimpiarBuffer();
        } while (strlen(registros[i].observaciones) >= MAX_OBSERVACIONES);

        (*numRegistros)++;

        printf("\nCliente agregado correctamente.\n");
        printf("Datos del paciente: NIF: %s, Nombre: %s, Direccion: %s, Telefono: %s, Ultima visita: %d/%d/%d, Observaciones: %s\n", registros[i].NIF, registros[i].Nombre, registros[i].Direccion, registros[i].Telefono, registros[i].ultimaVisita.dia, registros[i].ultimaVisita.mes, registros[i].ultimaVisita.anio, registros[i].observaciones);
        printf("Numero de pacientes en la lista: %d\n", *numRegistros);
        printf("¿Deseas introducir otro paciente? (S/N): ");
        scanf(" %c", &opcion);
        LimpiarBuffer();

        if (opcion == 'N' || opcion == 'n') {
            break;
        }
    }
}

void Buscar(struct Cliente registros[], int numRegistros, const char *nif) {
    int i;

    printf("\nNumero de pacientes en la lista: %d\n", numRegistros);

    for (i = 0; i < numRegistros; i++) {
        if (strcmp(registros[i].NIF, nif) == 0) {
            printf("\nCliente encontrado:\n");
            printf("NIF: %s, Nombre: %s, Direccion: %s, Telefono: %s, Ultima visita: %d/%d/%d, Observaciones: %s\n", registros[i].NIF, registros[i].Nombre, registros[i].Direccion, registros[i].Telefono, registros[i].ultimaVisita.dia, registros[i].ultimaVisita.mes, registros[i].ultimaVisita.anio, registros[i].observaciones);
            return;
        }
    }

    printf("\nCliente no encontrado.\n");
}

void MenuPrincipal(struct Cliente registros[], int numRegistros) {
    int opcion;
    char nif[MAX_NIF];

    do {
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1 - Introducir datos\n");
        printf("2 - Buscar cliente por NIF\n");
        printf("3 - Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
        LimpiarBuffer();

        switch (opcion) {
            case 1:
                introducirDatos(registros, MAX_REGISTROS, &numRegistros);
                break;
            case 2:
                printf("\nIntroduce el NIF del cliente: ");
                scanf("%9s", nif);
                LimpiarBuffer();
                Buscar(registros, numRegistros, nif);
                break;
            case 3:
                printf("\nSaliendo del programa...\n");
                break;
            default:
                printf("\nOpcion invalida. Intentalo nuevamente.\n");
                break;
        }
    } while (opcion != 3);
}

void LimpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}