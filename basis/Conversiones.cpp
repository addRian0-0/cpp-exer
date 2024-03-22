#include <stdio.h>
// 10 ejercicios
int main()
{
    float mxn, usd, eur, n, con, temp;
    usd = 16.68;
    eur = 18.24;
    int opc;
    do
    {
        printf("Digite el tipo de conversion a operar: \n"
               "1.Pesos a dolares\n"
               "2.Dolares a pesos\n"
               "3.Pesos a euros\n"
               "4.Euros a pesos\n"
               "5. Celsius a Fahrenheit\n"
               "6. Fahrenheit a Celsius\n"
               "7. Celsius a Kelvin\n"
               "8. Kelvin a Celsius\n"
               "9. Fahrenheit a Kelvin\n"
               "10. Kelvin a Fahrenheit\n"
               "11.Salir\n");
        scanf("%d", &opc);
        if (opc < 1 || opc > 11)
        {
            printf("Opcion no valida, intentelo de nuevo...\n");
        }

    } while (opc < 1 || opc > 11);
    if (opc == 1)
    {
        printf("Digite el numero de pesos a convertir a dolares: ");
        scanf("%f", &n);
        con = n / usd;
        printf("Pesos: %f -> Dolares: %f \n", n, con);
    }
    else if (opc == 2)
    {
        printf("Digite el numero de dolares a convertir a pesos: ");
        scanf("%f", &n);
        con = n * usd;
        printf("Dolares: %f -> Pesos: %f \n", n, con);
    }
    else if (opc == 3)
    {
        printf("Digite el numero de pesos a convertir a euros: ");
        scanf("%f", &n);
        con = n / eur;
        printf("Pesos: %f -> Euros: %f \n", n, con);
    }
    else if (opc == 4)
    {
        printf("Digite el numero de euros a convertir a pesos: ");
        scanf("%f", &n);
        con = n * eur;
        printf("Euros: %f -> Pesos: %f \n", n, con);
    }
    else if (opc == 5) {
        printf("Digite la temperatura en Celcius: ");
        scanf("%f", &temp);
        con = (temp * 9/5) + 32;
        printf("%.2lf Celsius => %.2lf Fahrenheit\n", temp, con);
    } else if (opc == 6) {
        printf("Digite la temperatura en Farenheit: ");
        scanf("%f", &temp);
        con = (temp - 32) * 5/9;
        printf("%.2lf Fahrenheit => %.2lf Celsius\n", temp, con);
    } else if (opc == 7) {
        printf("Digite la temperatura en Celcius: ");
        scanf("%f", &temp);
        con = temp + 273.15;
        printf("%.2lf Celsius => %.2lf Kelvin\n", temp, con);
    } else if (opc == 8) {
        printf("Digite la temperatura en Kelvin: ");
        scanf("%f", &temp);
        con = temp - 273.15;
        printf("%.2lf Kelvin => %.2lf Celsius\n", temp, con);
    } else if (opc == 9) {
        printf("Digite la temperatura en Farenheit: ");
        scanf("%f", &temp);
        con = (temp - 32) * 5/9 + 273.15;
        printf("%.2lf Fahrenheit => %.2lf Kelvin\n", temp, con);
    } else if (opc == 10) {
        printf("Digite la temperatura en Kelvin: ");
        scanf("%f", &temp);
        con = (temp - 273.15) * 9/5 + 32;
        printf("%.2lf Kelvin => %.2lf Fahrenheit\n", temp, con);
    }
    if (opc == 11)
    {
        printf("Fin del programa...");
    }
    return 0;
}