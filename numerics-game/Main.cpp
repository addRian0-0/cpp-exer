#include <stdio.h>
#include <cstdlib>
#include <ctime>

/* Principales retos a resolver en este algoritmo:
 - Generar las operaciones para el crucigrama
 - Que las operaciones tengan operadores aritméticos, resultados o símbolos que compartan casilla
 - Número de pistas a generar
 - Generar tablero que se adapte al segundo y primer punto
 - Cruzar las operaciones
 */

struct Operation {
    int opr1;
    int opr2;
    char typeOpr;
    float res;
};

char *tablero[50][25];

void GenerateOperation(int *pnum_min, int *pnum_max, Operation *pOperationsArray, int *psizeArr);
void PrintTab(int *sizeTab, Operation *pOperationsArray, int *psizeArr);

int main() {
    // Defino variables y apuntadores
    int sizeArr = 10;
    int *psizeArr = &sizeArr;   
    struct Operation OperationsArray[sizeArr];
    int num_min = 1;
    int num_max = 999;
    int *pnum_min = &num_min;
    int *pnum_max = &num_max;
    int sizeTab = 50;
    int *psizeTab = &sizeTab;

    srand(time(0));
    printf("Crucigrama de números:\n");

    GenerateOperation(pnum_min, pnum_max, OperationsArray, psizeArr);
    PrintTab(psizeTab, OperationsArray, psizeArr);

    return 0;
}

void GenerateOperation(int *pnum_min, int *pnum_max, Operation *pOperationsArray, int *psizeArr) {
    // Generar operaciones y toda su estructura
    for (int i = 0; i < *psizeArr; i++) {
        // Generar operandos
        int randOpr1 = *pnum_min + rand() % (*pnum_max - *pnum_min + 1);
        int randOpr2 = *pnum_min + rand() % (*pnum_max - *pnum_min + 1);
        pOperationsArray[i].opr1 = randOpr1;
        pOperationsArray[i].opr2 = randOpr2;

        // Definir operación
        int typeOperation = 1 + rand() % 4;
        if (typeOperation == 1) {
            pOperationsArray[i].typeOpr = '+';
            pOperationsArray[i].res = randOpr1 + randOpr2;
        } else if (typeOperation == 2) {
            pOperationsArray[i].typeOpr = '-';
            pOperationsArray[i].res = randOpr1 - randOpr2;
        } else if (typeOperation == 3) {
            pOperationsArray[i].typeOpr = '*';
            pOperationsArray[i].res = randOpr1 * randOpr2;
        } else if (typeOperation == 4) {
            // Para evitar la división por cero
            while (randOpr2 == 0) {
                randOpr2 = *pnum_min + rand() % (*pnum_max - *pnum_min + 1);
            }
            pOperationsArray[i].typeOpr = '/';
            pOperationsArray[i].res = (float)randOpr1 / randOpr2;
        }
    }
}

void PrintTab(int *psizeTab, Operation *pOperationsArray, int *psizeArr) {
    // Código ANSI para cambiar el color del texto a amarillo claro (93)
    printf("\033[93m");

    // Llenar el tablero con el carácter "█"
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 50; j++) {
            tablero[j][i] = "█"; // Asignar el carácter "█" como cadena
        }
    }

    // Imprimir el tablero
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 50; j++) {
            printf("%s", tablero[j][i]);
        }
        printf("\n");
    }
    // Restaurar el color a predeterminado (0)
    printf("\033[0m");
}
