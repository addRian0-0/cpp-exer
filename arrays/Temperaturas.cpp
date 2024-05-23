#include <stdio.h>

float temps[24];

void Registrar();
void Reporte();
float TempProm();
float TempBaja();
float TempMayor();
int BuscarTemp(float);
void ModTemp();

int main()
{
    float tempB;
    int horaTemp;
    Registrar();
    Reporte();
    printf("Digite la temperatura que se desea buscar al transcurso del dia: ");
    scanf("%f", &tempB);
    horaTemp = BuscarTemp(tempB);
    printf("La temperatura fue de %f a las %d:00, del dia", tempB, horaTemp);
    ModTemp();

    return 0;
}

void Registrar()
{
    for (int i = 0; i <= 23; i++)
    {
        float temp;
        printf("Digite la temperatura de la hora '%d:00': ", (i + 1));
        scanf("%f", &temp);
        temps[i] = temp;
    }
}

void Reporte()
{
    float tempPromd, tempMenor, tempMayor;
    tempPromd = TempProm();
    printf("La temperatura promedio del dia fue de: %f \n", tempPromd);
    tempMenor = TempBaja();
    printf("La temperatura menor del dia fue de: %f \n", tempMenor);
    tempMayor = TempMayor();
    printf("La temperatura mayor del dia fue de: %f \n", tempMayor);
}

float TempProm()
{
    float prom;
    prom = 0;
    for (int i = 0; i <= 23; i++)
    {
        prom = prom + temps[i];
    }
    prom = prom / 24;
    return prom;
}

float TempBaja()
{
    float menor;
    for (int i = 0; i <= 23; i++)
    {
        if (menor > temps[i])
        {
            menor = temps[i];
        }
    }
    return menor;
}

float TempMayor()
{
    float mayor;
    for (int i = 0; i <= 23; i++)
    {
        if (mayor < temps[i])
        {
            mayor = temps[i];
        }
    }
    return mayor;
}

int BuscarTemp(float temp)
{
    int hora;
    for (int i; i <= 23; i++)
    {
        if (temps[i] == temp)
        {
            hora = i;
        }
    }
    return hora;
}

void ModTemp()
{
    int hora;
    float temp;
    printf("\nDigite la hora del dia que se desea modificar la temperatura: ");
    scanf("%d", &hora);
    printf("\nDigite la nueva temperatura: ");
    scanf("%f", &temp);
    temps[hora] = temp;
    printf("Se modifico la temperatura de la hora %d:00 a una temperatura de: %f\n", hora, temps[hora]);
}