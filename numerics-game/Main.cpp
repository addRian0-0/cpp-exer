#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <cstring>

#define WIDTH 50
#define HEIGHT 25
#define NUM_OPERATIONS 10

struct Operation
{
    int opr1;
    int opr2;
    char typeOpr;
    float res;
};

char tablero[WIDTH][HEIGHT];

void GenerateOperation(int *pnum_min, int *pnum_max, Operation *pOperationsArray, int *psizeArr);
void PrintTab();
void PlaceOperations(Operation *pOperationsArray, int *psizeArr);

int main()
{
    // Defino variables y apuntadores
    int sizeArr = NUM_OPERATIONS;
    int *psizeArr = &sizeArr;
    struct Operation OperationsArray[sizeArr];
    int num_min = 1;
    int num_max = 999;
    int *pnum_min = &num_min;
    int *pnum_max = &num_max;

    srand(time(0));
    printf("Crucigrama de números:\n");

    GenerateOperation(pnum_min, pnum_max, OperationsArray, psizeArr);
    PlaceOperations(OperationsArray, psizeArr);
    PrintTab();

    return 0;
}

void GenerateOperation(int *pnum_min, int *pnum_max, Operation *pOperationsArray, int *psizeArr)
{
    // Generar operaciones y toda su estructura
    for (int i = 0; i < *psizeArr; i++)
    {
        // Generar operandos
        int randOpr1 = *pnum_min + rand() % (*pnum_max - *pnum_min + 1);
        int randOpr2 = *pnum_min + rand() % (*pnum_max - *pnum_min + 1);
        pOperationsArray[i].opr1 = randOpr1;
        pOperationsArray[i].opr2 = randOpr2;

        // Definir operación
        int typeOperation = 1 + rand() % 4;
        if (typeOperation == 1)
        {
            pOperationsArray[i].typeOpr = '+';
            pOperationsArray[i].res = randOpr1 + randOpr2;
        }
        else if (typeOperation == 2)
        {
            pOperationsArray[i].typeOpr = '-';
            pOperationsArray[i].res = randOpr1 - randOpr2;
        }
        else if (typeOperation == 3)
        {
            pOperationsArray[i].typeOpr = '*';
            pOperationsArray[i].res = randOpr1 * randOpr2;
        }
        else if (typeOperation == 4)
        {
            // Para evitar la división por cero
            while (randOpr2 == 0)
            {
                randOpr2 = *pnum_min + rand() % (*pnum_max - *pnum_min + 1);
            }
            pOperationsArray[i].typeOpr = '/';
            pOperationsArray[i].res = (float)randOpr1 / randOpr2;
        }
    }
}

void PlaceOperations(Operation *pOperationsArray, int *psizeArr)
{
    // Inicializar el tablero con 'X'
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            tablero[j][i] = 'X';
        }
    }

    int operationsPlaced = 0;

    // Colocar la primera operación horizontalmente en una posición aleatoria
    int x = rand() % (WIDTH - 10);
    int y = rand() % HEIGHT;

    for (int i = 0; i < *psizeArr; i++)
    {
        // Convertir la operación a una cadena
        char operationStr[20];
        snprintf(operationStr, sizeof(operationStr), "%d%c%d=%.0f",
                 pOperationsArray[i].opr1,
                 pOperationsArray[i].typeOpr,
                 pOperationsArray[i].opr2,
                 pOperationsArray[i].res);

        int len = strlen(operationStr);

        // Intentar encontrar un lugar donde la operación se pueda cruzar con otra
        bool placed = false;
        for (int j = 0; j < HEIGHT && !placed; j++)
        {
            for (int k = 0; k < WIDTH && !placed; k++)
            {
                if (tablero[k][j] == operationStr[0])
                {
                    // Intentar colocar verticalmente
                    if (j + len < HEIGHT)
                    {
                        bool canPlace = true;
                        for (int l = 0; l < len; l++)
                        {
                            if (tablero[k][j + l] != 'X' && tablero[k][j + l] != operationStr[l])
                            {
                                canPlace = false;
                                break;
                            }
                        }
                        if (canPlace)
                        {
                            for (int l = 0; l < len; l++)
                            {
                                tablero[k][j + l] = operationStr[l];
                            }
                            placed = true;
                        }
                    }
                    // Intentar colocar horizontalmente
                    if (k + len < WIDTH)
                    {
                        bool canPlace = true;
                        for (int l = 0; l < len; l++)
                        {
                            if (tablero[k + l][j] != 'X' && tablero[k + l][j] != operationStr[l])
                            {
                                canPlace = false;
                                break;
                            }
                        }
                        if (canPlace)
                        {
                            for (int l = 0; l < len; l++)
                            {
                                tablero[k + l][j] = operationStr[l];
                            }
                            placed = true;
                        }
                    }
                }
            }
        }
        if (!placed)
        {
            // Si no se pudo colocar cruzando, colocar en una nueva posición aleatoria
            x = rand() % (WIDTH - len);
            y = rand() % HEIGHT;
            for (int j = 0; j < len; j++)
            {
                tablero[x + j][y] = operationStr[j];
            }
        }
        operationsPlaced++;
        if (operationsPlaced >= NUM_OPERATIONS)
            break;
    }
}

void PrintTab()
{
    // Imprimir el tablero
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            printf("%c", tablero[j][i]);
        }
        printf("\n");
    }
}
