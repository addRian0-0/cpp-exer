#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strcmp
#include <time.h>   // time
#include <ctype.h>  // toupper

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

char test[6][3][150] = {
    {"¿Cuál fue la causa principal del estallido de la Primera Guerra Mundial?",
     "¿Qué imperios se desintegraron tras la Primera Guerra Mundial?",
     "¿Cuál fue el evento que desencadenó la Primera Guerra Mundial?"},
    {"¿Cuál fue una de las principales consecuencias económicas de la Primera Guerra Mundial?",
     "¿Qué tratado puso fin oficialmente a la Primera Guerra Mundial?",
     "¿Qué país sufrió una revolución como consecuencia directa de la Primera Guerra Mundial?"},
    {"¿En qué año ocurrió la Revolución Rusa?",
     "¿Quién fue el líder principal de la Revolución Rusa de 1917?",
     "¿Cuál fue una de las principales causas de la Revolución Rusa?"},
    {"¿Qué evento marcó el inicio de la Gran Depresión en 1929?",
     "¿Cuál fue una de las consecuencias sociales de la crisis económica mundial de 1929?",
     "¿Qué política implementada por el gobierno de Estados Unidos ayudó a mitigar los efectos de la Gran Depresión?"},
    {"¿Qué país invadió Alemania para dar inicio a la Segunda Guerra Mundial?",
     "¿Cuál fue una de las principales consecuencias políticas de la Segunda Guerra Mundial?",
     "¿Qué conferencia definió la división de Alemania después de la Segunda Guerra Mundial?"},
    {"¿Qué movimiento buscaba la independencia de las colonias africanas en el siglo XX?",
     "¿Cuál fue uno de los métodos utilizados por los movimientos de liberación colonial?",
     "¿Qué país fue un importante líder en el movimiento de no alineación durante la descolonización?"}};

char responsesOpt[6][3][4][150] = {
    {{"El asesinato del archiduque Francisco Fernando", "La rivalidad entre Gran Bretaña y Alemania", "La carrera armamentística", "El imperialismo"},
     {"El Imperio Austrohúngaro, el Imperio Ruso y el Imperio Otomano", "El Imperio Británico y el Imperio Alemán", "El Imperio Francés y el Imperio Alemán", "El Imperio Austrohúngaro y el Imperio Británico"},
     {"El asesinato del archiduque Francisco Fernando", "El conflicto en los Balcanes", "La carrera armamentística", "El tratado de Versalles"}},
    {{"La devastación económica en Europa", "La creación de la Liga de Naciones", "El ascenso del comunismo en Rusia", "La independencia de las colonias africanas"},
     {"El Tratado de Versalles", "El Tratado de Trianon", "El Tratado de Saint-Germain", "El Tratado de Brest-Litovsk"},
     {"Rusia", "Francia", "Reino Unido", "Italia"}},
    {{"1917", "1918", "1920", "1921"},
     {"Vladimir Lenin", "Joseph Stalin", "Leon Trotsky", "Nikolai Bukharin"},
     {"La participación de Rusia en la Primera Guerra Mundial", "La influencia de la Revolución Francesa", "La independencia de las colonias", "La rivalidad entre Rusia y Alemania"}},
    {{"El colapso de la bolsa de Nueva York", "El inicio de la Segunda Guerra Mundial", "La Revolución Rusa", "El fin de la Primera Guerra Mundial"},
     {"El aumento del desempleo", "El crecimiento económico", "La expansión territorial", "La reducción de la deuda nacional"},
     {"El New Deal", "El Tratado de Versalles", "La Liga de Naciones", "La Política de Buen Vecino"}},
    {{"Polonia", "Francia", "Reino Unido", "Estados Unidos"},
     {"La creación de la ONU", "El ascenso del comunismo", "La independencia de India", "La fundación de la OTAN"},
     {"La Conferencia de Yalta", "La Conferencia de Potsdam", "La Conferencia de Teherán", "La Conferencia de París"}},
    {{"El panafricanismo", "El colonialismo", "El comunismo", "El imperialismo"},
     {"La resistencia pacífica", "La colonización", "La expansión territorial", "La guerra fría"},
     {"India", "China", "Egipto", "Brasil"}}};

bool resCheck[6][3][4] = {
    {
        {true, false, false, false}, // Causa principal del estallido
        {true, false, false, false}, // Imperios desintegrados
        {true, false, false, false}  // Evento desencadenante
    },
    {
        {true, false, false, false}, // Consecuencia económica
        {true, false, false, false}, // Tratado de fin
        {true, false, false, false}  // País en revolución
    },
    {
        {true, false, false, false}, // Año de la revolución
        {true, false, false, false}, // Líder principal
        {true, false, false, false}  // Causa principal
    },
    {
        {true, false, false, false}, // Inicio de la Depresión
        {true, false, false, false}, // Consecuencia social
        {true, false, false, false}  // Política de mitigación
    },
    {
        {true, false, false, false}, // Invasión de Alemania
        {true, false, false, false}, // Consecuencia política
        {false, true, false, false}  // División de Alemania
    },
    {
        {true, false, false, false}, // Movimiento de independencia
        {true, false, false, false}, // Métodos utilizados
        {true, false, false, false}  // Líder en no alineación
    }};

bool randomQuestions[6][3];

void Welcome();
void SelectRandomQuestions();
int ShowQAndA();
int CheckAnswer(int, int, int);

int main()
{
    int prom;
    Welcome();
    getchar();
    system(CLEAR_COMMAND);
    srand(time(NULL));
    SelectRandomQuestions();
    prom = ShowQAndA();
    printf("Puntuacion final: %d/12...", prom);
    return 0;
}

void Welcome()
{
    printf("Bienvenido a este test de  historia... \n\n"
           "Se te realizaran 12 preguntas y al final se evaluara tu promedio c:\n"
           "Los temas seran los siguientes: \n\n"
           "\t1. Situación previa antes del estallido de la primera guerra mundial.\n"
           "\t2. Las consecuencias económicas, políticas y sociales de la primera guerra mundial. \n"
           "\t3. La revolución socialista 1917.\n"
           "\t4. La crisis económica mundial de 1929-1933.\n"
           "\t5. La segunda guerra mundial: causas y consecuencias. \n"
           "\t6. Los nuevos movimientos de liberación colonial.\n\n"
           "Presiona Enter para continuar...\n");
}

void SelectRandomQuestions()
{
    int seccion;
    int question;

    for (int i = 0; i < 6; i++)
    {
        question = rand() % 3;
        // true la pregunta que no se mostrara
        randomQuestions[i][question] = true;
    }
}

int ShowQAndA()
{

    int res;
    int prom = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (randomQuestions[i][j] == false)
            {
                printf("Puntuacion actual: %d/12\n\n", prom);
                printf("\n%s  \n\n", test[i][j]);
                for (int k = 0; k < 4; k++)
                {
                    printf("\t%d.- %s\n", k, responsesOpt[i][j][k]);
                }
                printf("\nDigite el numero de la respuesta correcta: ");
                scanf(" %d", &res);
                prom = CheckAnswer(i, j, res) + prom;
                system(CLEAR_COMMAND);
            }
        }
    }
    return prom;
}

int CheckAnswer(int i, int j, int res){
    return (resCheck[i][j][res] == true) ? 1 : 0;
}