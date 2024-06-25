#ifndef VAR_H
#define VAR_H

#include <string>

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

#define MAX_EVENTS 100

struct Evento
{
    char nombre[50];
    char fechaEscritura[11];
    char fechaEvento[11];
    char descripcion[100];
    char lugar[50];
};

Evento DataPre[] = {
    {"Reunión de trabajo", "25/06/2024", "30/06/2024", "Reunión mensual del equipo para revisar el progreso.", "Sala de juntas"},
    {"Cumpleaños de Ana", "01/05/2024", "15/05/2024", "Fiesta de cumpleaños de Ana con amigos y familia.", "Casa de Ana"},
    {"Conferencia Tech 2024", "12/04/2024", "25/04/2024", "Conferencia anual sobre las últimas tendencias en tecnología.", "Centro de convenciones"},
    {"Concierto de rock", "20/06/2024", "10/07/2024", "Concierto de la banda de rock local.", "Estadio municipal"},
    {"Cena benéfica", "18/03/2024", "30/03/2024", "Cena benéfica para recaudar fondos para una ONG.", "Hotel Hilton"},
    {"Vacaciones en la playa", "15/06/2024", "01/08/2024", "Vacaciones familiares en la playa durante una semana.", "Playa del Carmen"},
    {"Exposición de arte", "10/02/2024", "20/02/2024", "Exposición de las últimas obras de artistas locales.", "Galería de arte"},
    {"Reunión de ex-alumnos", "05/05/2024", "20/05/2024", "Reunión anual de ex-alumnos de la universidad.", "Campus universitario"},
    {"Maratón anual", "01/06/2024", "15/06/2024", "Maratón anual de la ciudad con participantes de todo el país.", "Centro de la ciudad"},
    {"Feria del libro", "20/07/2024", "05/08/2024", "Feria anual del libro con autores invitados y actividades para niños.", "Parque central"}};

const int eventosPredefinidos = sizeof(DataPre) / sizeof(DataPre[0]);

#endif