#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strcmp
#include <time.h>   // time
#include <ctype.h>  // toupper
#include <cstring>

#include "./data/VariablesApp.h"

void Game(int, int);
void SectionSelectQ(int, int);
void SolveQAndC(int, int);

int main()
{
    int option, numberQ;
    srand(time(NULL));

    printf("Juego de ahorcado :D...\n\n"
           "Digita la seccion que deseas jugar: \n\n"
           "\t1.- Historia\n"
           "\t2.- Fisica, Quimica, Biologia...\n");
    scanf("%d", &option);

    printf("Cuantos acertijos de ahorcado quieres resolver de dicha seccion: ");
    scanf("%d", &numberQ);

    Game(option, numberQ);

    return 0;
}

// switch problema de escalabilidad para n secciones, si va creciendo
void Game(int opt, int numberQ)
{
    int optPositionArray = opt - 1;
    for (int i = 0; i < NUMBER_SECTIONS; i++)
    {
        if (i == optPositionArray)
        {
            SectionSelectQ(optPositionArray, numberQ);
        }
    }
}

void SectionSelectQ(int opt, int numberQ)
{

    system(CLEAR_COMMAND);
    // Selecciona N preguntas aleatorias
    int randomQ[numberQ];
    int randomN;
    bool flag = true;

    for (int i = 0; i < numberQ; i++)
    {
        randomN = rand();
        randomN %= NUMBER_QUESTIONS;
        flag = true;
        for (int j = 0; j < i; j++)
        {
            if (randomQ[j] == randomN)
            {
                flag = false;
            }
        }
        if (flag == true)
        {
            randomQ[i] = randomN;
        }
    }

    // Muestra las pistas
    for (int i = 0; i < numberQ; i++)
    {
        SolveQAndC(opt, randomQ[i]);
    }
}

void SolveQAndC(int section, int numberQAndC)
{

    // Resolver acertijo
    int lengthResponseCO = strlen(responses[section][numberQAndC]) + 1;
    bool hit = false;
    char responseUser[strlen(responses[section][numberQAndC])];
    // Inicializar responseUser con caracteres nulos
    memset(responseUser, '-', strlen(responses[section][numberQAndC]));

    do
    {
        // Solo para que el usuario lo visualice
        printf("\n\nPistas: \n\n");
        for (int i = 0; i < NUMBER_CLUES; i++)
        {
            printf("\t%d .- %s\n", (i + 1), clues[section][numberQAndC][i]);
        }
        char charSolve;
        printf("\n\nDigite la letra o numero que podria estar en la oracion (Considere los espacios): ");
        charSolve = getchar();

        // Limpiar el búfer de entrada
        int c;
        while ((c = getchar()) != '\n' && c != EOF)
            ;

        for (int i = 0; i < lengthResponseCO; i++)
        {
            if (responses[section][numberQAndC][i] == charSolve)
            {
                responseUser[i] = charSolve;
            }
        }

        // Asegurarse de que responseUser termine con el carácter nulo '\0'
        responseUser[lengthResponseCO - 1] = '\0';

        // Imprimir la respuesta del usuario
        printf("\n\tRESPUESTA: \033[1m%s\033[0m", responseUser);
        system(CLEAR_COMMAND);
        // Comprobar si responseUser y la cadena original son iguales con strcmp
        if (strcmp(responseUser, responses[section][numberQAndC]) == 0)
        {
            // printf("\n¡Felicidades! Has adivinado la respuesta.\n");
            hit = true;
        }

    } while (!hit);
    printf("\n¡Felicidades! Has adivinado la respuesta.\n");
}