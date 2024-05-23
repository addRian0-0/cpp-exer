#include <stdio.h>
#include <iostream>
#include <string>

int pedirDato(const std::string &msg, int max, int min);

int main()
{

    int hora, min, seg, ampm;

    hora = pedirDato("Digite la hora de inicio (1-12): ", 12, 1);
    ampm = pedirDato("Digite el formato de hora, para am(1), para (2)pm ", 2, 1);
    min = pedirDato("Digite los minutos de inicio(1-60): ", 60, 1);
    seg = pedirDato("Digite los segundos de inicio(1-60): ", 60, 1);

    printf("La hora ingresada es: %d:%02d:%02d ", hora, min, seg);
    ampm == 1 ? printf("AM\n") : printf("PM\n");

    return 0;
}

// pide el dato y lo valida, solo para enteros
int pedirDato(const std::string &msg, int max, int min)
{

    int x;
    printf("%s\n", msg.c_str());
    scanf(" %d", &x);
    do
    {
        if (x > max || x < min)
        {
            printf("Dato no valido... \n");
            printf("%s\n", msg.c_str());
            scanf(" %d", &x);
        }
    } while (x > max || x < min);

    return x;
}
