/* #include <stdio.h>
#include <cmath>
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
} */
/* #include <stdio.h>
#include <cmath>
#include <math.h>
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
} */
/* #include <stdio.h>
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
} */
/* Edad requerida
#include <stdio.h>
int main(){
    int edad;
    printf("Digite la edad de la persona: \n");
    scanf("%d", &edad);
    if(edad >= 18){
        printf("Bienvenido al bar\n");
    }else{
        printf("Vuelve cuando tengas 18...\n");
    }
    return 0;
}
 */
/* Comparacion de dos numeros
#include <stdio.h>
int main(){
    float x, y;
    printf("Digite el primer numero: \n");
    scanf("%f", &x);
    printf("Digite el segundo numero: \n");
    scanf("%f", &y);
    if(x == y){
        printf("Los dos numeros son iguales");
    }else if(x > y){
        printf("El primer numero es mayor al segundo\n");
    }else if( y > x){
        printf("El segundo numero es mayor al primero\n");
    }
    return 0;
}
 */
/* Evaluar calificacion
#include <stdio.h>
int main(){
    int calf;
    printf("Digite la calificacion: \n");
    scanf("%d", &calf);
    if(calf >= 6){
        printf("Aprobado...\n");
    }else{
        printf("Reprobado...\n");
    }
    return 0;
} */
/* Tipo de triangulo
#include <stdio.h>
int main(){
    int l1, l2, l3;
    printf("Digite los tres lados del triangulo: \n");
    scanf("%d %d %d", &l1, &l2, &l3);
    if(l1 == l2 && l2 == l3){
        printf("Triangulo equilatero\n");
    }else if(l1 == l2 || l2 == l3 || l1 == l3){
        printf("Triangulo isoceles\n");
    }else if(l1 != l2 && l2 != l3 && l1 != l3){
        printf("Triangulo escaleno\n");
    }
    return 0;
}
 */
/* Tipo de angulo
#include <stdio.h>
int main(){
    int ang;
    printf("Digite el angulo: \n");
    scanf("%d", &ang);
    if(ang == 90){
        printf("Angulo recto\n");
    }else if(ang < 90 && ang > 0){
        printf("Angulo agudo\n");
    }else if(ang > 90 && ang < 180){
        printf("Angulo obtuso\n");
    }else if(ang == 180){
        printf("Angulo obtuso\n");
    }else if(ang == 360){
        printf("Angulo completo\n");
    }
    return 0;
} */
/* Calculo de salario
#include <stdio.h>
int main(){
    float salHr, hr, salTot;
    printf("Digite el salario por hora: \n");
    scanf("%f", &salHr);
    printf("Digite las horas trabajadas: \n");
    scanf("%f", &hr);
    if(hr <= 40){
        salTot = hr * salHr;
    }else if(  hr > 40 && hr < 51){
        salTot = (hr * salHr) + (hr - 40) * 2;
    }else if(hr > 51 && hr < 80){
        salTot = (hr * salHr) + (hr - 51) * 3;
    }
    printf("El salario bruto es de:\n %f", salTot);
    return 0;
} */
/*Ordenado
#include <stdio.h>
int main(){
    int x, y, z, cal;
    printf("Digite los tres numeros: \n");
    scanf("%d %d %d", &x, &y, &z);
    cal = x - y;
    if(cal > 0){
        cal = z - y;
        cal > 0 ? printf("%d %d %d \n", z, y, x) : printf("%d %d %d \n", y, z, x);
    }else if( cal < 0){
        cal = z - x;
        cal > 0 ? printf("%d %d %d \n", z, x, y) : printf("%d %d %d \n", x, z, y);
    }
    return 0;
} */
/*Clave de carrera
#include <stdio.h>
int main()
{
    char clave;

    printf("Ingrese la clave de la carrera:\n");
    printf("a - Administracion de Empresas\n");
    printf("i - Ingenieria en Informatica\n");
    printf("t - Ingenieria en Transporte\n");
    printf("f - Ingenieria Ferroviaria\n");
    printf("l - Ingenieria Industrial\n");
    printf("c - Ciencias de la Informatica\n");
    scanf(" %c", &clave);

    switch (clave)
    {
    case 'a':
        printf("Administracion de Empresas\n");
        break;
    case 'i':
        printf("Ingenieria en Informatica\n");
        break;
    case 't':
        printf("Ingenieria en Transporte\n");
        break;
    case 'f':
        printf("Ingenieria Ferroviaria\n");
        break;
    case 'l':
        printf("Ingenieria Industrial\n");
        break;
    case 'c':
        printf("Ciencias de la Informatica\n");
        break;
    default:
        printf("Clave no valida. Por favor, ingrese una clave correcta.\n");
        break;
    }

    return 0;
} */
/*Dia de la semana
#include <stdio.h>
int main() {
    int dia;
    printf("Ingrese el número del día (1 = Lunes, 2 = Martes, ..., 7 = Domingo): ");
    scanf("%d", &dia);
    switch (dia) {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miércoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sábado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Número inválido. Por favor, ingrese un número entre 1 y 7.\n");
            break;
    }

    return 0;
} */
/*Mes del año
#include <stdio.h>
int main() {
    int mes;
    printf("Ingrese el número del mes (1 = Enero, 2 = Febrero, ..., 12 = Diciembre): ");
    scanf("%d", &mes);
    switch (mes) {
        case 1:
            printf("Enero\n");
            break;
        case 2:
            printf("Febrero\n");
            break;
        case 3:
            printf("Marzo\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Mayo\n");
            break;
        case 6:
            printf("Junio\n");
            break;
        case 7:
            printf("Julio\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Septiembre\n");
            break;
        case 10:
            printf("Octubre\n");
            break;
        case 11:
            printf("Noviembre\n");
            break;
        case 12:
            printf("Diciembre\n");
            break;
        default:
            printf("Número inválido. Por favor, ingrese un número entre 1 y 12.\n");
            break;
    }
    return 0;
}
 */
/* Evaluar calificaciones
#include <stdio.h>
int main()
{
    int calf;
    char opc;
    do
    {
        printf("Digite una calificacion: \n");
        scanf("%d", &calf);
        if (calf >= 6)
        {
            printf("Aprobado...\n");
        }
        else
        {
            printf("Reprobado...\n");
        }
        printf("¿Desea volver a evaluar?(Si = s, S || No = n, N): \n");
        scanf(" %c", &opc);
    }while(opc == 'S' || opc == 's');
    return 0;
} */
/* Calificacion, mensajes
#include <stdio.h>
int main() {
    int calificacion;
    printf("Ingrese una calificacion (del 1 al 10): ");
    scanf("%d", &calificacion);
    switch (calificacion) {
        case 1:
            printf("Mmm...\n");
            break;
        case 2:
            printf("No te rindas, busca ayuda y práctica más.\n");
            break;
        case 3:
            printf("Sigue esforzándote, hay espacio para mejorar.\n");
            break;
        case 4:
            printf("Sigue esforzándote, hay espacio para mejorar.\n");
            break;
        case 5:
            printf("Sigue esforzándote, hay espacio para mejorar.\n");
            break;
        case 6:
            printf("Vas por buen camino, pero puedes hacerlo mejor.\n");
            break;
        case 7:
            printf("Vas por buen camino, pero puedes hacerlo mejor.\n");
            break;
        case 8:
            printf("Buen trabajo, estás avanzando correctamente.\n");
            break;
        case 9:
            printf("¡Excelente desempeño! Sigue así.\n");
            break;
        case 10:
            printf("¡Perfecto! Has dominado este tema.\n");
            break;
        default:
            printf("Calificación inválida. Asegúrate de ingresar un número del 1 al 10.\n");
            break;
    }
    return 0;
} */
/* Calculo salarios while
#include <stdio.h>
int main()
{
    float salHr, hr, salTot, cont, totalSalarioTR;
    char opc;
    cont = 0;
    totalSalarioTR = 0;
    do
    {
        cont=cont+1;
        printf("Digite el salario por hora: \n");
        scanf("%f", &salHr);
        printf("Digite las horas trabajadas: \n");
        scanf("%f", &hr);
        if (hr <= 40)
        {
            salTot = hr * salHr;
        }
        else if (hr > 40 && hr < 51)
        {
            salTot = (hr * salHr) + (hr - 40) * 2;
        }
        else if (hr > 51 && hr < 80)
        {
            salTot = (hr * salHr) + (hr - 51) * 3;
        }
        printf("El salario bruto es de: %f \n", salTot);
        totalSalarioTR = (totalSalarioTR + salTot) / cont;
        printf("¿Desea calcular otro salario? (Si = s, S || No = n, N): \n");
        scanf(" %c", &opc);
    } while (opc == 'S' || opc == 's');
    printf("El numero de salarios calculados es: %f \n", cont);
    printf("El promedio de salario es: %f \n", totalSalarioTR);
    return 0;
} */
