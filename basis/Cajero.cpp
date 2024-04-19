#include <stdio.h>
#include <stdlib.h>

float modificador(float);
float operadorDivisas(float, float, int);
float pedirCambio();

int main()
{
    float numMXN, numUSD, numEUR, valMXN, valUSD, valEUR, cambio;
    char opc;
    printf("Digite el numero de pesos inicial: ");
    scanf("%f", &numMXN);
    printf("Digite el numero de dolares iniciales: ");
    scanf("%f", &numUSD);
    printf("Digite el numero de euros iniciales: ");
    scanf("%f", &numEUR);

    numMXN = modificador(numMXN);
    numUSD = modificador(numUSD);
    numEUR = modificador(numEUR);

    printf("Digite el valor del dolar respecto al peso: ");
    scanf("%f", &valUSD);
    printf("Digite el valor del euro respecto al peso: ");
    scanf("%f", &valEUR);
    valMXN = 1;

    valMXN = modificador(valMXN);
    valUSD = modificador(valUSD);
    valEUR = modificador(valEUR);

    printf("Digite el numero de operacion: \n"
           "1.- Pesos a dolares\n"
           "2.- Dolares a pesos\n"
           "3.- Pesos a euros\n"
           "4.- Euros a pesos\n"
           "5.- Euros a dolares\n"
           "6.- Dolares a euros\n"
           "7.- Salir \n");
    scanf(" %c", &opc);

    if (opc == '1')
    {
        cambio = pedirCambio();
        float resOperacion = operadorDivisas(valUSD, cambio, 2);
        numMXN = numMXN - (modificador(cambio));
        numUSD = numUSD + resOperacion;
    }
    else if (opc == '2')
    {
        cambio = pedirCambio();
        float resOperacion = operadorDivisas(valUSD, cambio, 1);
        numMXN = numMXN + resOperacion;
        numUSD = numUSD - (modificador(cambio));
    }
    else if (opc == '3')
    {
        cambio = pedirCambio();
        float resOperacion = operadorDivisas(valEUR, cambio, 2);
        numMXN = numMXN - (modificador(cambio));
        numEUR = numEUR + resOperacion;
    }
    else if (opc == '4')
    {
        cambio = pedirCambio();
        float resOperacion = operadorDivisas(valEUR, cambio, 1);
        numMXN = numMXN + resOperacion;
        numEUR = numEUR - (modificador(cambio));
    }
    else if (opc == '5')
    {
        cambio = pedirCambio();
        float resOperacion = operadorDivisas(valEUR, cambio, 2);
        numEUR = numEUR - (modificador(cambio));
        numUSD = numUSD + resOperacion;
    }
    else if (opc == '6')
    {
        cambio = pedirCambio();
        float resOperacion = operadorDivisas(valUSD, cambio, 2);
        numUSD = numUSD - cambio;
        numEUR = numEUR + resOperacion;
    }

    printf("-----Saldo-----\n"
           "Pesos: %f\n"
           "Dolares: %f\n"
           "Euros: %f\n",
           numMXN, numUSD, numEUR);

    printf("Fin del programa :D...");

    return 0;
}

// valores absolutos de errores introducidos
float modificador(float num)
{
    return abs(num);
}

// multiplicacion (1), divison (2)
float operadorDivisas(float val, float saldo, int valMD)
{
    float res;
    if (saldo > 0)
    {
        if (valMD == 1)
        {
            res = saldo * val;
        }
        else if (valMD == 2)
        {
            res = saldo / val;
        }
        return res;
    }
    else
    {
        printf("No tiene un saldo suficiente");
        return 0;
    }
}

float pedirCambio()
{

    float cambio;
    printf("Digite la cantidad a cambiar (primera divisa de la opcion del menu): ");
    scanf("%f", &cambio);
    return cambio;
}