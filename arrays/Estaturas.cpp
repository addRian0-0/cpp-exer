#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ests[100];

void Registrar();
void Reporte();
float EstProm();
int EstBaja();
int EstMayor();
int BuscarEst(int);
void ModEst();

int main()
{
    float estPromd;
    int estMenor, estMayor, estB, horaEst;

    Registrar();
    estPromd = EstProm();
    printf("La estatura promedio fue de: %.2f cm\n", estPromd);
    estMenor = EstBaja();
    printf("La estatura menor fue de: %d cm\n", estMenor);
    estMayor = EstMayor();
    printf("La estatura mayor fue de: %d cm\n", estMayor);
    printf("Digite la estatura que se desea buscar: ");
    scanf("%d", &estB);
    horaEst = BuscarEst(estB);
    if (horaEst != -1)
        printf("La estatura fue de %d cm en la posición %d\n", estB, horaEst);
    else
        printf("No se encontró la estatura %d cm\n", estB);
    ModEst();

    return 0;
}

void Registrar()
{
    srand(time(NULL));
    int min = 50;
    int max = 230;

    for (int i = 0; i < 100; i++)
    {
        int randomN = min + rand() % (max - min + 1);
        ests[i] = randomN;
    }
}

void Reporte() {}

float EstProm()
{
    float prom = 0;
    for (int i = 0; i < 100; i++)
    {
        prom += ests[i];
    }
    prom = prom / 100;
    return prom;
}

int EstBaja()
{
    int menor = ests[0];
    for (int i = 1; i < 100; i++)
    {
        if (ests[i] < menor)
        {
            menor = ests[i];
        }
    }
    return menor;
}

int EstMayor()
{
    int mayor = ests[0];
    for (int i = 1; i < 100; i++)
    {
        if (ests[i] > mayor)
        {
            mayor = ests[i];
        }
    }
    return mayor;
}

int BuscarEst(int est)
{
    for (int i = 0; i < 100; i++)
    {
        if (ests[i] == est)
        {
            return i;
        }
    }
    return -1; // No encontrado
}

void ModEst()
{
    int pos;
    int est;
    printf("\nDigite la posición que se desea modificar la estatura: ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= 100)
    {
        printf("Posición no válida\n");
        return;
    }
    printf("Digite la nueva estatura: ");
    scanf("%d", &est);
    ests[pos] = est;
    printf("Se modificó la estatura en la posición %d a: %d cm\n", pos, ests[pos]);
}