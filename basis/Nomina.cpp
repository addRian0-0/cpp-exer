#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

float pedirDato(const std::string &msg);
float calcularSalNeto(float, float);

int main()
{
    float opc, salarioMin, salHrT, hrsSemanales, salBT, salNT, totalT, totalH, res;
    totalH = 0;
    totalT = 0;

    salarioMin = pedirDato("Digite el salario por hora minimo vigente: ");
    opc = pedirDato("Digite (1) en caso de haber empleados, cualquier otro numero para salir...");

    while (opc == 1)
    {
        salHrT = pedirDato("Digite el salario por hora del trabajador:");
        hrsSemanales = pedirDato("Digite las horas semanales trabajadas: ");
        salBT = salHrT * hrsSemanales;
        salNT = calcularSalNeto(salBT, salarioMin);
        totalH = totalH + salNT; 
        res = salBT - salNT;
        totalT = totalT + salBT;
        printf("El salario bruto del trabajador es: %f\n", salBT);
        printf("El salario neto del trabajador es: %f\n", res);
        opc = pedirDato("Digite (s/S) en caso de haber empleados, cualquier otra tecla para salir...");
    }

    printf("El salario total a pagar a los trabajadores es: %f", totalT);
    printf("El salario total a pagar a hacienda es: %f", totalH);

    return 0;
}

// solo regresa valores positivos
float pedirDato(const std::string &msg)
{
    float dato;
    printf("%s\n", msg.c_str());
    scanf("%f", &dato);
    return abs(dato);
}

float calcularSalNeto(float salBm, float salM)
{
    float salNet, salMSem;
    salMSem = (salM * 8) * 5;
    if (salBm <= (salMSem * 2))
    {
        salNet = 0;
    }
    else if (salBm <= (salMSem * 5))
    {
        salNet = salBm * 0.10;
    }
    else if (salBm <= (salMSem * 10))
    {
        salNet = salBm * .20;
    }
    else if (salBm <= (salMSem * 15))
    {
        salNet = salBm * .30;
    }
    else if (salBm > (salMSem * 15))
    {
        salNet = salBm * .80;
    }
    return salNet;
}
