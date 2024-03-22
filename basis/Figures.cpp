#include <stdio.h>
#include <cmath>
#include <math.h>
// 10 ejercicios
int main()
{

    float b, h, p, a, r, ap;
    int opc;
    do
    {
        printf("Digite el numero de figura a calcular perimetro y area: \n"
               "1.Rectangulo\n"
               "2.Cuadrado\n"
               "3.Triangulo equilatero\n"
               "4.Circulo\n"
               "5.Pentagono regular\n"
               "6.Salir\n");
        scanf("%d", &opc);
        if (opc < 1 || opc > 6)
        {
            printf("Opcion no valida, intentelo de nuevo...\n");
        }

    } while (opc < 1 || opc > 6);
    if (opc == 1)
    {
        printf("Digite la base del rectangulo: ");
        scanf("%f", &b);
        printf("Digite la altura del rectangulo: ");
        scanf("%f", &h);
        p = 2 * (b + h);
        a = b * h;
        printf("El perimetro del rectangulo es: %f \n", p);
        printf("El area del rectangulo es: %f \n", a);
    }
    else if (opc == 2)
    {
        printf("Digite el lado del cuadrado: ");
        scanf("%f", &b);
        p = 4 * b;
        a = b * b;
        printf("El perimetro del cuadrado es: %f \n", p);
        printf("El area del cuadrado es: %f \n", a);
    }
    else if (opc == 3)
    {
        printf("Digite la base del triangulo: ");
        scanf("%f", &b);
        printf("Digite la altura del triangulo: ");
        scanf("%f", &h);
        p = b * 3;
        a = (b * h) / 2;
        printf("El perimetro del triangulo es: %f \n", p);
        printf("El area del triangulo es: %f \n", a);
    }
    else if (opc == 4)
    {
        printf("Digite el radio del circulo: ");
        scanf("%f", &r);
        a = M_PI * pow(r, 2);
        p = (2 * M_PI) * r;
        printf("El area del circulo es: %f \n", a);
        printf("El perimetro del circulo es: %f \n", p);
    }
    else if (opc == 5)
    {
        printf("Digite el lado del pentagono: ");
        scanf("%f", &b);
        printf("Digite el apotema del pentagono: ");
        scanf("%f", &ap);
        p = b * 5;
        a = (p * ap) / 2;
        printf("El perimetro del pentagono es: %f \n", p);
        printf("El area del pentagono es: %f \n", a);
    }
    else if (opc == 6)
    {
        printf("Fin del programa...\n");
    }
    return 0;
}