#include <stdio.h>
#include <cstring>
#include <ctime>

#include "./data/Vars.h"

void agregarEvento();
void verEventos();
void verEventoEspecifico();
void eliminarEvento();
void modificarEvento();
void mostrarNombresEventos();

Evento agenda[MAX_EVENTS];
int totalEventos = eventosPredefinidos;

void printGreen(const char *text)
{
    printf("\033[0;32m%s\033[0m", text); // modifica el color y 0m lo cambia a predeterminado
}

int main()
{
    memcpy(agenda, DataPre, sizeof(DataPre));
    int opcion;

    do
    {
        printGreen("\n\tAgenda de Eventos\n\n");
        printf("1. Agregar evento\n");
        printf("2. Ver todos los eventos\n");
        printf("3. Ver un evento específico\n");
        printf("4. Eliminar evento\n");
        printf("5. Modificar evento\n");
        printf("6. Salir\n\n");
        printGreen("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            agregarEvento();
            break;
        case 2:
            verEventos();
            break;
        case 3:
            verEventoEspecifico();
            break;
        case 4:
            eliminarEvento();
            break;
        case 5:
            modificarEvento();
            break;
        case 6:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opción no válida.\n");
        }
        printf("\n\n-------------------------------------------------------------------------------------\n\n");
    } while (opcion != 6);

    return 0;
}

void obtenerFechaActual(char *buffer)
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(buffer, "%02d/%02d/%04d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
}

void agregarEvento()
{
    if (totalEventos >= MAX_EVENTS)
    {
        printf("No se pueden agregar más eventos.\n");
        return;
    }

    printGreen("\n\tAgregar un nuevo evento:\n\n");
    printf("Nombre: ");
    scanf(" %[^\n]", agenda[totalEventos].nombre);

    // Obtener la fecha actual
    obtenerFechaActual(agenda[totalEventos].fechaEscritura);

    printf("Fecha del evento (dd/mm/aaaa): ");
    scanf(" %[^\n]", agenda[totalEventos].fechaEvento);
    printf("Descripción: ");
    scanf(" %[^\n]", agenda[totalEventos].descripcion);
    printf("Lugar: ");
    scanf(" %[^\n]", agenda[totalEventos].lugar);

    totalEventos++;
    printGreen("Evento agregado exitosamente.\n");
}

void verEventos()
{
    if (totalEventos == 0)
    {
        printf("No hay eventos en la agenda.\n");
        return;
    }

    for (int i = 0; i < totalEventos; i++)
    {
        printGreen("Evento: ");
        printf("%d\n", i + 1);
        printGreen("Nombre: ");
        printf("%s\n", agenda[i].nombre);
        printGreen("Fecha de escritura: ");
        printf("%s\n", agenda[i].fechaEscritura);
        printGreen("Fecha del evento: ");
        printf("%s\n", agenda[i].fechaEvento);
        printGreen("Descripción: ");
        printf("%s\n", agenda[i].descripcion);
        printGreen("Lugar: ");
        printf("%s\n\n", agenda[i].lugar);
    }
}

void verEventoEspecifico()
{
    int indice;
    mostrarNombresEventos();
    printGreen("Ingrese el número del evento a visualizar: ");
    scanf("%d", &indice);
    indice--; // Convertir a índice de arreglo

    if (indice < 0 || indice >= totalEventos)
    {
        printf("Índice no válido.\n");
        return;
    }

    printGreen("\nEvento ");
    printf("%d:\n", indice + 1);
    printGreen("Nombre: ");
    printf("%s\n", agenda[indice].nombre);
    printGreen("Fecha de escritura: ");
    printf("%s\n", agenda[indice].fechaEscritura);
    printGreen("Fecha del evento: ");
    printf("%s\n", agenda[indice].fechaEvento);
    printGreen("Descripción: ");
    printf("%s\n", agenda[indice].descripcion);
    printGreen("Lugar: ");
    printf("%s\n\n", agenda[indice].lugar);
}

void eliminarEvento()
{
    if (totalEventos == 0)
    {
        printf("No hay eventos en la agenda.\n");
        return;
    }

    printGreen("Lista de eventos:\n");
    mostrarNombresEventos();

    int indice;
    printGreen("Ingrese el número del evento a eliminar: ");
    scanf("%d", &indice);
    indice--; // Convertir a índice de arreglo

    if (indice < 0 || indice >= totalEventos)
    {
        printf("Índice no válido.\n");
        return;
    }

    for (int i = indice; i < totalEventos - 1; i++)
    {
        agenda[i] = agenda[i + 1];
    }
    totalEventos--;
    printGreen("Evento eliminado exitosamente.\n");
}

void modificarEvento()
{
    if (totalEventos == 0)
    {
        printf("No hay eventos en la agenda.\n");
        return;
    }

    printGreen("Lista de eventos:\n");
    mostrarNombresEventos();

    int indice;
    printGreen("Ingrese el número del evento a modificar: ");
    scanf("%d", &indice);
    indice--; // Convertir a índice de arreglo

    if (indice < 0 || indice >= totalEventos)
    {
        printf("Índice no válido.\n");
        return;
    }

    printGreen("Modificar evento ");
    printf("%d:\n", indice + 1);
    printf("Nombre: ");
    scanf(" %[^\n]", agenda[indice].nombre);

    // Obtener la fecha actual
    obtenerFechaActual(agenda[totalEventos].fechaEscritura);

    printf("Fecha del evento (dd/mm/aaaa): ");
    scanf(" %[^\n]", agenda[indice].fechaEvento);
    printf("Descripción: ");
    scanf(" %[^\n]", agenda[indice].descripcion);
    printf("Lugar: ");
    scanf(" %[^\n]", agenda[indice].lugar);

    printGreen("Evento modificado exitosamente.\n");
}

void mostrarNombresEventos()
{
    for (int i = 0; i < totalEventos; i++)
    {
        printf("Evento %d", i + 1);
        printGreen(" - Nombre: ");
        printf("%s\n", agenda[i].nombre);
        printf("\n");
    }
}