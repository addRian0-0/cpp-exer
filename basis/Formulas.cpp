#include <stdio.h>
#include <cmath>
// 3 ejercicios
int main()
{
    int opc;
    do
    {
        printf("Digite el tipo de formula a operar: \n"
               "1.Formula fisica\n"
               "2.Formula general\n"
               "3.Teorema de pitagoras\n"
               "4.Salir\n");
        scanf("%d", &opc);
        if (opc < 1 || opc > 4)
        {
            printf("Opcion no valida, intentelo de nuevo...\n");
        }

    } while (opc < 1 || opc > 4);

    if (opc == 1)
    {
        float f, m1, m2, r;
        const double G = 6.67430e-11;
        printf("Digite la masa 1: ");
        scanf("%f", &m1);
        printf("Digite la masa 2: ");
        scanf("%f", &m2);
        printf("Digite la distancia entre los centros de masa de los dos objetos: ");
        scanf("%f", &r);
        f = G * (m1 * m2)/pow(r, 2);
        printf("La fuerza de atraccion entre las dos masas es de: %f \n", f);
    }
    else if (opc == 2)
    {
        float a, b, c, res1, res2;
        printf("Digite a: ");
        scanf("%f", &a);
        printf("Digite b: ");
        scanf("%f", &b);
        printf("Digite c: ");
        scanf("%f", &c);
        res1 = - b - sqrt(pow(b, 2) - (4 * a * c)) / (2 * a);
        res2 = - b - sqrt(pow(b, 2) + (4 * a * c)) / (2 * a);
        printf("x1 = %f y x2 = %f", res1, res2);
    }
    else if (opc == 3)
    {
        float a, b, c;
        printf("Digite a: ");
        scanf("%f", &a);
        printf("Digite b: ");
        scanf("%f", &b);
        c = sqrt(a*a + b*b);
        printf("El valor de c es: %f", c);
    }
    else if (opc == 4)
    {
        printf("Fin del programa...");
    }
    return 0;
}