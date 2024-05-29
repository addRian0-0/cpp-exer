#include "VariablesApp.h"

const char responses[NUMBER_SECTIONS][NUMBER_QUESTIONS][LENGTH_RESPONSE] = {
    {// Situacion previa antes del estallido de la primera guerra mundial (10)
     "Alianzas entre las grandes potencias europeas",
     "Creciente militarismo y carrera armamentista",
     "Tensiones nacionalistas en los Balcanes",
     "Rivalidades coloniales entre potencias europeas",
     "Asesinato del archiduque Francisco Fernando",
     "Crisis de Marruecos",
     "Crisis de Bosnia",
     "La paz armada",
     "La Triple Entente",
     "La Triple Alianza",

     // Consecuencias economicas, politicas y sociales de la primera guerra mundial (10)
     "Tratado de Versalles",
     "Desintegracion de los imperios austrohungaro y otomano",
     "Creacion de la Liga de las Naciones",
     "Inflacion y deuda en Europa",
     "Cambio de fronteras en Europa",
     "Ascenso de Estados Unidos como potencia mundial",
     "Revolucion rusa y creacion de la URSS",
     "Movimientos de independencia en colonias",
     "Desempleo masivo y crisis social en Europa",
     "Crisis economica de la posguerra",

     // La revolucion socialista 1917 (10)
     "Caida del zarismo",
     "Revolucion de Febrero",
     "Revolucion de Octubre",
     "Gobierno provisional de Kerensky",
     "Ascenso de Lenin",
     "Toma del Palacio de Invierno",
     "Guerra Civil Rusa",
     "Tratado de Brest-Litovsk",
     "Creacion del Ejercito Rojo",
     "Fundacion de la URSS",

     // La crisis economica mundial de 1929-1933 (10)
     "Crack de la Bolsa de Nueva York",
     "Gran Depresion",
     "New Deal de Franklin D. Roosevelt",
     "Altos niveles de desempleo",
     "Quiebras bancarias",
     "Reduccion del comercio internacional",
     "Crisis agricola",
     "Aumento de la pobreza",
     "Medidas de austeridad en Europa",
     "Descontento social y politico",

     // La segunda guerra mundial: causas y consecuencias (10)
     "Ascenso del nazismo en Alemania",
     "Invasion de Polonia",
     "Alianzas del Eje y los Aliados",
     "Holocausto",
     "Bombardeo de Hiroshima y Nagasaki",
     "Descolonizacion de Asia y Africa",
     "Creacion de la ONU",
     "Guerra Fria",
     "Juicios de Nuremberg",
     "Plan Marshall",

     // Los nuevos movimientos de liberacion colonial (10)
     "Independencia de India",
     "Guerra de Argelia",
     "Descolonizacion de Africa",
     "Independencia de Indonesia",
     "Movimiento por los derechos civiles en Estados Unidos",
     "Revolucion cubana",
     "Guerra de Vietnam",
     "Apartheid en Sudafrica",
     "Guerra de Corea",
     "Revolucion irani",

     // Revolucion industrial (10)
     "Invencion de la maquina de vapor",
     "Desarrollo del ferrocarril",
     "Revolucion agraria",
     "Urbanizacion masiva",
     "Surgimiento de fabricas",
     "Condiciones laborales precarias",
     "Movimiento ludita",
     "Inicios del sindicalismo",
     "Expansion del capitalismo",
     "Innovaciones tecnologicas en textiles",

     // Historia de Mexico (10)
     "Independencia de Mexico",
     "Revolucion Mexicana",
     "Conquista de Mexico",
     "Porfiriato",
     "Guerra de Reforma",
     "Intervencion francesa",
     "Gobierno de Benito Juarez",
     "Tratado de Guadalupe Hidalgo",
     "Caida de Tenochtitlan",
     "Cardenas y la expropiacion petrolera",

     // La edad media (10)
     "Caida del Imperio Romano",
     "Fundacion del Sacro Imperio Romano Germanico",
     "Peste Negra",
     "Cruzadas",
     "Feudalismo",
     "Invasiones vikingas",
     "Guerra de los Cien Anos",
     "Renacimiento Carolingio",
     "Magna Carta",
     "Descubrimiento de America",

     // La ilustracion (10)
     "Publicacion de la Enciclopedia",
     "Teoria de la separacion de poderes de Montesquieu",
     "Contrato social de Rousseau",
     "Descubrimientos cientificos de Newton",
     "Critica de la razon pura de Kant",
     "Despotismo ilustrado",
     "Revolucion francesa",
     "Independencia de Estados Unidos",
     "Difusion del liberalismo",
     "Declive del absolutismo"},
    // Conceptos de Fisica, Quimica, Biologia
    {
        "Fotosintesis",
        "Genetica",
        "Evolucion",
        "Celula",
        "ADN",
        "ARN",
        "Metabolismo",
        "Enzima",
        "Proteina",
        "Carbohidrato",
        "Lipido",
        "Homeostasis",
        "Mutacion",
        "Seleccion natural",
        "Especiacion",
        "Reproduccion",
        "Division celular",
        "Organelo",
        "Tejido",
        "Organo",
        "Sistema nervioso",
        "Sistema inmunologico",
        "Ecologia",
        "Bioma",
        "Ecosistema",
        "Simbiosis",
        "Comunidad",
        "Poblacion",
        "Biodiversidad",
        "Clonacion",
        "Microbiologia",
        "Fisiologia",
        "Zoologia",
        "Botanica"
        "Movimiento",
        "Fuerza",
        "Energia",
        "Trabajo",
        "Potencia",
        "Masa",
        "Peso",
        "Gravedad",
        "Inercia",
        "Velocidad",
        "Aceleracion",
        "Ley de Newton",
        "Friccion",
        "Impulso",
        "Momento",
        "Conservacion de energia",
        "Termodinamica",
        "Calor",
        "Temperatura",
        "Electromagnetismo",
        "Corriente electrica",
        "Resistencia",
        "Voltaje",
        "Circuito",
        "Magnetismo",
        "Ondas",
        "Frecuencia",
        "Amplitud",
        "Reflexion",
        "Refraccion",
        "Optica",
        "Mecanica cuantica",
        "Relatividad"
        "Atomo",
        "Molecula",
        "Elemento",
        "Compuesto",
        "Reaccion quimica",
        "Enlace quimico",
        "pH",
        "Acido",
        "Base",
        "Sal",
        "Electrolito",
        "Solucion",
        "Solvente",
        "Soluto",
        "Concentracion",
        "Molaridad",
        "Estequiometria",
        "Oxidacion",
        "Reduccion",
        "Isotopo",
        "Tabla periodica",
        "Grupo",
        "Periodo",
        "Metal",
        "No metal",
        "Metaloide",
        "Gas noble",
        "Liquido",
        "Solido",
        "Plasma",
        "Catalisis",
        "Cinetica quimica",
        "Termoquimica",
        "Quimica organica"}};

const char clues[NUMBER_SECTIONS][NUMBER_QUESTIONS][NUMBER_CLUES][LENGTH_CLUE] = {
    {// Situacion previa antes del estallido de la primera guerra mundial
     {"Formacion de alianzas militares", "Rivalidades coloniales", "Tensiones en los Balcanes"},
     {"Aumento del gasto militar", "Competencia entre armadas", "Desarrollo de nuevas armas"},
     {"Conflictos etnicos", "Disputas territoriales", "Intervencion de grandes potencias"},
     {"Disputa por territorios en África", "Incidentes diplomaticos", "Tensiones entre Alemania y Francia"},
     {"Atentado en Sarajevo", "Victima: heredero del trono austrohungaro", "Desencadenante directo de la guerra"},
     {"Enfrentamiento entre Francia y Alemania", "Crisis en el norte de África", "Preludio a la guerra mundial"},
     {"Anexion de Bosnia por Austria-Hungria", "Reaccion de Serbia y Rusia", "Crisis diplomatica"},
     {"Paz fragil mantenida por alianzas", "Preparativos para la guerra", "Relativa estabilidad"},
     {"Alianza entre Francia, Rusia y Gran Bretaña", "Respuesta a la Triple Alianza", "Asegurar apoyo mutuo"},
     {"Alianza entre Alemania, Austria-Hungria e Italia", "Contrapeso a la Triple Entente", "Acuerdo defensivo"},

     // Consecuencias economicas, politicas y sociales de la primera guerra mundial
     {"Firmado en 1919", "Imposicion de reparaciones a Alemania", "Redibujo el mapa de Europa"},
     {"Desaparicion de antiguos imperios", "Nuevos estados independientes", "Reconfiguracion politica"},
     {"Organizacion internacional", "Promover la paz y la cooperacion", "Fracaso en prevenir la Segunda Guerra Mundial"},
     {"Deuda masiva", "Reparaciones de guerra", "Crisis economica en Alemania"},
     {"Nuevas fronteras nacionales", "Territorios transferidos", "Creacion de nuevos paises"},
     {"Crecimiento economico y militar", "Expansion territorial", "Mayor influencia global"},
     {"Revolucion bolchevique", "Guerra civil", "Formacion de un estado comunista"},
     {"Lucha por la independencia", "Descontento colonial", "Influencia de la guerra"},
     {"Desempleo y pobreza", "Tensiones sociales", "Cambios en las estructuras laborales"},
     {"Hiperinflacion", "Desestabilizacion economica", "Problemas de posguerra"},

     // La revolucion socialista 1917
     {"Fin de la dinastia Romanov", "Descontento popular", "Revueltas y protestas"},
     {"Formacion de soviets", "Gobierno provisional", "Descontento militar"},
     {"Toma del poder por los bolcheviques", "Liderazgo de Lenin", "Cambio radical de gobierno"},
     {"Gobierno temporal", "Intento de reformas", "Fracaso en estabilizar el pais"},
     {"Lider de los bolcheviques", "Promesas de paz, tierra y pan", "Establecimiento del comunismo"},
     {"Ataque simbolico", "Control del gobierno", "Inicio del regimen bolchevique"},
     {"Enfrentamiento entre rojos y blancos", "Intervencion extranjera", "Victoria bolchevique"},
     {"Tratado con Alemania", "Fin de la participacion en la Primera Guerra Mundial", "Perdida de territorios"},
     {"Fuerza militar comunista", "Liderazgo de Trotsky", "Defensa de la revolucion"},
     {"Union de Republicas Socialistas Sovieticas", "Nuevo estado comunista", "Liderazgo de Lenin"},

     // La crisis economica mundial de 1929-1933
     {"Caida del mercado de valores", "Gran perdida financiera", "Inicio de la Gran Depresion"},
     {"Recesion economica global", "Desempleo masivo", "Cierre de bancos"},
     {"Programa de reformas", "Politica de Franklin D. Roosevelt", "Recuperacion economica"},
     {"Altos niveles de desempleo", "Cierre de empresas", "Dificultades economicas"},
     {"Falta de confianza en bancos", "Retiros masivos de dinero", "Quiebras bancarias"},
     {"Disminucion del comercio", "Proteccionismo", "Aumento de aranceles"},
     {"Sobreproduccion agricola", "Caida de precios", "Perdida de ingresos para agricultores"},
     {"Crecimiento de la pobreza", "Hogares sin ingresos", "Aumento de la mendicidad"},
     {"Reduccion del gasto publico", "Medidas fiscales", "Austeridad en gobiernos"},
     {"Protestas y disturbios", "Cambios politicos", "Descontento popular"},

     // La segunda guerra mundial: causas y consecuencias
     {"Dictadura de Adolf Hitler", "Expansion territorial alemana", "Antisemitismo"},
     {"Invasion alemana en 1939", "Inicio del conflicto global", "Ocupacion de Polonia"},
     {"Alemania, Italia y Japon", "Reino Unido, Estados Unidos y la URSS", "Conflicto global"},
     {"Genocidio de seis millones de judios", "Campos de concentracion", "Crimenes contra la humanidad"},
     {"Ataques nucleares en Japon", "Fin de la guerra en el Pacifico", "Destruccion masiva"},
     {"Fin del dominio colonial", "Independencia de paises asiaticos y africanos", "Cambio en la geopolitica"},
     {"Sustitucion de la Liga de las Naciones", "Mantenimiento de la paz", "Promocion de la cooperacion internacional"},
     {"Enfrentamiento ideologico", "Capitalismo vs. comunismo", "Carrera armamentista"},
     {"Juicio a lideres nazis", "Crimenes de guerra", "Responsabilidad y justicia"},
     {"Ayuda economica a Europa", "Recuperacion posguerra", "Fortalecimiento de la economia europea"},

     // Los nuevos movimientos de liberacion colonial
     {"Liderado por Gandhi", "Independencia en 1947", "Movimiento de no violencia"},
     {"Lucha contra Francia", "Independencia en 1962", "Guerra de liberacion"},
     {"Independencia de paises africanos", "Movimientos de liberacion", "Fin del colonialismo europeo"},
     {"Lucha contra los Paises Bajos", "Independencia en 1949", "Movimientos nacionalistas"},
     {"Derechos civiles para afroamericanos", "Liderazgo de Martin Luther King", "Marcha sobre Washington"},
     {"Revolucion en 1959", "Fidel Castro", "Transformacion politica y social"},
     {"Conflicto prolongado", "Intervencion estadounidense", "Guerra de independencia de Vietnam"},
     {"Politica de segregacion racial", "Lucha de Nelson Mandela", "Fin del apartheid en 1994"},
     {"Division de Corea", "Guerra entre el norte y el sur", "Intervencion de la ONU"},
     {"Revolucion islamica en 1979", "Fin del regimen del Sha", "Establecimiento de una republica islamica"},

     // Revolucion industrial
     {"James Watt", "Energia a vapor", "Innovacion tecnologica"},
     {"Red de transporte", "Facilitacion del comercio", "Desarrollo industrial"},
     {"Nuevas tecnicas agricolas", "Aumento de la produccion", "Transformacion rural"},
     {"Crecimiento de ciudades", "Migracion del campo a la ciudad", "Condiciones de vida urbana"},
     {"Surgimiento de grandes fabricas", "Produccion en masa", "Innovaciones en manufactura"},
     {"Largas jornadas laborales", "Condiciones insalubres", "Trabajo infantil"},
     {"Destruccion de maquinas", "Resistencia al cambio tecnologico", "Protestas laborales"},
     {"Formacion de sindicatos", "Lucha por derechos laborales", "Mejora de condiciones laborales"},
     {"Expansion del sistema capitalista", "Inversiones y mercados", "Desarrollo economico"},
     {"Innovaciones en la industria textil", "Maquina de hilar", "Telar mecanico"},

     // Historia de Mexico
     {"Miguel Hidalgo", "Grito de Dolores", "Fin del dominio español"},
     {"Lucha armada en 1910", "Francisco Villa y Emiliano Zapata", "Reformas sociales"},
     {"Hernan Cortes", "Conquista del imperio azteca", "Siglo XVI"},
     {"Porfirio Diaz", "Larga dictadura", "Desarrollo economico y represion"},
     {"Liberales vs. conservadores", "Reforma liberal", "Benito Juarez"},
     {"Segundo Imperio Mexicano", "Napoleon III", "Maximiliano de Habsburgo"},
     {"Presidente liberal", "Reformas laicas", "Leyes de Reforma"},
     {"Tratado con Estados Unidos", "Perdida de territorio", "California y Nuevo Mexico"},
     {"Conquista de los españoles", "Capital azteca", "Caida en 1521"},
     {"Nacionalizacion del petroleo", "Lazaro Cardenas", "Reformas economicas"},

     // La edad media
     {"Fin del imperio occidental", "Invasiones barbaras", "Siglo V"},
     {"Alianza de estados europeos", "Sacerdotes y emperadores", "Fundado en 800"},
     {"Pandemia mortal", "Siglo XIV", "Gran mortalidad en Europa"},
     {"Guerras religiosas", "Recuperacion de Tierra Santa", "Campañas militares"},
     {"Sistema social y economico", "Señores y vasallos", "Sociedad agraria"},
     {"Guerreros escandinavos", "Exploracion y saqueo", "Alta Edad Media"},
     {"Conflicto entre Inglaterra y Francia", "Duracion de 116 años", "Juana de Arco"},
     {"Renovacion cultural y educativa", "Emperador Carlomagno", "Escuelas monasticas"},
     {"Carta Magna en 1215", "Rey Juan sin Tierra", "Primera limitacion al poder real"},
     {"Cristobal Colon", "Nueva ruta hacia las Indias", "Descubrimiento en 1492"},

     // La ilustracion
     {"Publicacion entre 1751 y 1772", "Denis Diderot", "Compilacion del conocimiento"},
     {"Separacion de poderes", "Teoria politica", "El espiritu de las leyes"},
     {"Teoria del contrato social", "Soberania popular", "Inspiracion para la Revolucion Francesa"},
     {"Ley de la gravedad", "Principia Mathematica", "Avances en fisica y matematicas"},
     {"Immanuel Kant", "Filosofia critica", "Critica a la razon pura"},
     {"Gobierno absolutista reformado", "Monarcas ilustrados", "Reformas economicas y educativas"},
     {"Revolucion en 1789", "Fin del Antiguo Regimen", "Declaracion de los Derechos del Hombre"},
     {"Declaracion de independencia en 1776", "Liderazgo de George Washington", "Creacion de una nueva nacion"},
     {"Difusion de ideas liberales", "Derechos individuales", "Soberania nacional"},
     {"Debilitamiento de monarquias absolutas", "Ascenso del parlamentarismo", "Transicion hacia democracias liberales"}},
    {
        {"Proceso por el cual las plantas convierten la luz solar en energia quimica",
         "Ocurre en los cloroplastos",
         "Produce oxigeno como subproducto"},

        {"Estudio de la herencia biologica",
         "Implica el analisis de los genes y su transmision",
         "Fundamentada por Mendel"},

        {"Cambio en las caracteristicas de los seres vivos a lo largo del tiempo",
         "Basado en la seleccion natural",
         "Explica la diversidad de especies"},

        {"Unidad basica de la vida",
         "Contiene organelos como el nucleo y las mitocondrias",
         "Existen celulas procariotas y eucariotas"},

        {"Molecula que lleva la informacion genetica",
         "Doble helice",
         "Compuesta por nucleotidos"},

        {"Molecula similar al ADN, pero de cadena sencilla",
         "Participa en la sintesis de proteinas",
         "Existen varios tipos, como el ARNm y el ARNt"},

        {"Conjunto de reacciones quimicas en el organismo",
         "Incluye anabolismo y catabolismo",
         "Mantiene la vida"},

        {"Catalizador biologico",
         "Acelera las reacciones quimicas",
         "Especificidad de sustrato"},

        {"Molecula compuesta por aminoacidos",
         "Realiza diversas funciones en el cuerpo",
         "Incluye enzimas, anticuerpos y hormonas"},

        {"Fuente primaria de energia para el organismo",
         "Incluye azucares, almidones y fibra",
         "Componentes importantes en la dieta"},

        {"Molecula organica insoluble en agua",
         "Incluye grasas, aceites y esteroides",
         "Almacenan energia a largo plazo"},

        {"Capacidad del organismo para mantener un ambiente interno estable",
         "Incluye la regulacion de temperatura y pH",
         "Es crucial para el funcionamiento adecuado"},

        {"Cambio en la secuencia de nucleotidos del ADN",
         "Puede ser beneficiosa, neutra o perjudicial",
         "Fuente de variabilidad genetica"},

        {"Proceso por el cual los organismos mejor adaptados sobreviven y se reproducen",
         "Concepto central en la teoria de la evolucion",
         "Desarrollado por Charles Darwin"},

        {"Formacion de nuevas especies a partir de una ancestral",
         "Implica el aislamiento reproductivo",
         "Puede ser alopatrica o simpatrica"},

        {"Proceso mediante el cual los organismos producen descendencia",
         "Puede ser sexual o asexual",
         "Es crucial para la perpetuacion de la especie"},

        {"Proceso mediante el cual una celula se divide en dos",
         "Incluye mitosis y meiosis",
         "Es esencial para el crecimiento y la reproduccion"},

        {"Estructura especializada dentro de la celula",
         "Incluye el nucleo, mitocondrias, y cloroplastos",
         "Realiza funciones especificas necesarias para la vida"},

        {"Grupo de celulas que realizan una funcion especifica",
         "Incluye tejidos epitelial, conectivo, muscular y nervioso",
         "Forma los organos"},

        {"Estructura compuesta de varios tejidos que realiza una funcion especifica",
         "Incluye el corazon, pulmones y higado",
         "Parte de sistemas mayores"},

        {"Red de celulas y fibras que coordina las funciones del cuerpo",
         "Incluye el cerebro, medula espinal y nervios",
         "Controla respuestas y procesa informacion"},

        {"Sistema que defiende el cuerpo contra patogenos",
         "Incluye linfocitos, anticuerpos y celulas fagociticas",
         "Clave para la salud y la supervivencia"},

        {"Estudio de las interacciones entre los organismos y su ambiente",
         "Incluye factores bioticos y abioticos",
         "Fundamental para la comprension de los ecosistemas"},

        {"Region con un clima y flora y fauna caracteristicos",
         "Incluye tundras, bosques, desiertos y selvas",
         "Es un componente clave de la ecologia global"},

        {"Conjunto de comunidades que interactuan en un area",
         "Incluye organismos vivos y su entorno fisico",
         "Funciona como una unidad con flujos de energia y ciclos de nutrientes"},

        {"Relacion cercana y a largo plazo entre dos o mas especies",
         "Incluye mutualismo, comensalismo y parasitismo",
         "Clave para la evolucion de muchas especies"},

        {"Grupo de diferentes especies que viven en el mismo lugar e interactuan",
         "Forma parte de un ecosistema",
         "Incluye relaciones como la depredacion y la competencia"},

        {"Grupo de individuos de la misma especie que viven en una area especifica",
         "Interactuan y se reproducen entre si",
         "Pueden experimentar cambios en tamaño y estructura"},

        {"Variedad de vida en un area particular",
         "Incluye diversidad de especies, genetica y de ecosistemas",
         "Crucial para la resiliencia de los ecosistemas"},

        {"Proceso de crear una copia geneticamente identica de un organismo",
         "Incluye clonacion natural y artificial",
         "Utilizada en investigaciones y aplicaciones medicas"},

        {"Estudio de microorganismos",
         "Incluye bacterias, virus, hongos y protozoos",
         "Clave para la medicina y la biotecnologia"},

        {"Estudio de las funciones y procesos de los organismos vivos",
         "Incluye la fisiologia humana, animal y vegetal",
         "Fundamental para entender la salud y enfermedad"},

        {"Estudio de los animales",
         "Incluye su clasificacion, estructura, y comportamiento",
         "Fundamental para la conservacion y el manejo de la fauna"},

        {"Estudio de las plantas",
         "Incluye su clasificacion, estructura, y procesos vitales",
         "Clave para la agricultura y la ecologia"},

        {"Interaccion que cambia el estado de movimiento de un objeto",
         "Puede ser de contacto o a distancia",
         "Sigue las leyes de Newton"},

        {"Capacidad para realizar trabajo",
         "Puede ser cinetica, potencial, termica, etc.",
         "Se mide en joules"},

        {"Producto de una fuerza aplicada sobre un objeto y la distancia recorrida",
         "Se mide en joules",
         "Es una forma de transferencia de energia"},

        {"Tasa a la cual se realiza trabajo",
         "Se mide en vatios",
         "P = Trabajo / Tiempo"},

        {"Cantidad de materia en un objeto",
         "Se mide en kilogramos",
         "Diferente del peso"},

        {"Fuerza con la que la gravedad atrae un objeto",
         "Depende de la masa y la aceleracion gravitacional",
         "Se mide en newtons"},

        {"Fuerza que atrae los objetos hacia el centro de la Tierra",
         "Causa que los objetos caigan",
         "Su aceleracion es aproximadamente 9.8 m/s²"},

        {"Tendencia de un objeto a resistir cambios en su estado de movimiento",
         "Relacionado con la masa",
         "Ley de la inercia"},

        {"Rapidez y direccion del movimiento de un objeto",
         "Es un vector",
         "Se mide en metros por segundo"},

        {"Cambio de la velocidad con respecto al tiempo",
         "Se mide en metros por segundo cuadrado",
         "Puede ser positiva o negativa"},

        {"Tres principios fundamentales que describen el movimiento y la fuerza",
         "Formuladas por Isaac Newton",
         "Incluyen la inercia, la fuerza y la accion-reaccion"},

        {"Resistencia que un objeto encuentra al moverse sobre una superficie",
         "Puede ser estatica o cinetica",
         "Depende de las caracteristicas de las superficies en contacto"},

        {"Producto de la fuerza aplicada sobre un objeto y el tiempo durante el cual actua",
         "Causa un cambio en el momento del objeto",
         "Se mide en newtons por segundo"},

        {"Producto de la masa de un objeto y su velocidad",
         "Es un vector",
         "Se conserva en ausencia de fuerzas externas"},

        {"Principio segun el cual la energia no se crea ni se destruye",
         "Solo se transforma",
         "Es fundamental en la fisica"},

        {"Rama de la fisica que estudia el calor y la temperatura",
         "Incluye las leyes de la termodinamica",
         "Se aplica a sistemas macroscopicos"},

        {"Forma de energia que se transfiere entre cuerpos",
         "Fluye de los objetos calientes a los frios",
         "Se mide en joules"},

        {"Medida de la energia termica promedio de las particulas en un objeto",
         "Se mide en grados Celsius, Fahrenheit o Kelvin",
         "Afecta el estado de la materia"},

        {"Estudio de los fenomenos electricos y magneticos",
         "Incluye la electricidad y el magnetismo",
         "Fundamental para la tecnologia moderna"},

        {"Flujo de carga electrica a traves de un material conductor",
         "Se mide en amperios",
         "Puede ser continua o alterna"},

        {"Oposicion al flujo de corriente en un circuito",
         "Se mide en ohmios",
         "Depende del material y la temperatura"},

        {"Diferencia de potencial electrico entre dos puntos",
         "Se mide en voltios",
         "Es lo que impulsa la corriente electrica"},

        {"Interconexion de componentes electricos",
         "Puede ser en serie o paralelo",
         "Permite el paso de la corriente electrica"},

        {"Fuerza de atraccion o repulsion entre objetos debido a sus cargas",
         "Relacionado con el movimiento de electrones",
         "Es la base de muchos dispositivos electronicos"},

        {"Perturbacion que se propaga a traves de un medio",
         "Incluye ondas mecanicas y electromagneticas",
         "Transporta energia sin transportar materia"},

        {"Numero de ondas que pasan por un punto en un segundo",
         "Se mide en hertzios",
         "Esta relacionada con la energia de la onda"},

        {"Maxima desviacion de un punto de una onda respecto a su posicion de equilibrio",
         "Determina la intensidad de la onda",
         "Se mide en metros"},

        {"Cambio de direccion de una onda al chocar con una superficie",
         "Sigue la ley de la reflexion",
         "El angulo de incidencia es igual al angulo de reflexion"},

        {"Cambio de direccion de una onda al pasar de un medio a otro",
         "Se debe a la diferencia en la velocidad de la onda en los medios",
         "Es responsable de fenomenos como el arco iris"},

        {"Rama de la fisica que estudia la luz y sus propiedades",
         "Incluye la reflexion, refraccion y dispersion",
         "Es fundamental para el diseño de lentes y sistemas opticos"},

        {"Estudio de los sistemas fisicos a escala de atomos y particulas subatomicas",
         "Implica principios de incertidumbre y dualidad onda-particula",
         "Revoluciono la comprension de la naturaleza"},

        {"Teoria que describe el movimiento de los cuerpos a velocidades cercanas a la luz",
         "Formulada por Albert Einstein",
         "Incluye la relatividad especial y general"},

        {"Unidad basica de la materia",
         "Compuesto por protones, neutrones y electrones",
         "Forma los elementos quimicos"},

        {"Combinacion de dos o mas atomos",
         "Puede ser de elementos iguales o diferentes",
         "Forma las sustancias quimicas"},

        {"Sustancia que no puede descomponerse en sustancias mas simples",
         "Formada por un solo tipo de atomo",
         "Cada uno tiene un numero atomico unico"},

        {"Sustancia formada por la union de dos o mas elementos",
         "Tiene propiedades diferentes a las de los elementos que lo componen",
         "Puede ser descompuesto en una reaccion quimica"},

        {"Proceso en el cual una o mas sustancias se transforman en otras",
         "Incluye la ruptura y formacion de enlaces quimicos",
         "Se representa mediante ecuaciones quimicas"},

        {"Fuerza que mantiene unidos a los atomos en una molecula",
         "Incluye enlaces covalentes, ionicos y metalicos",
         "Es fundamental para la estabilidad de los compuestos"},

        {"Medida de la acidez o alcalinidad de una solucion",
         "Se mide en una escala de 0 a 14",
         "El pH 7 es neutro"},

        {"Sustancia que libera iones de hidrogeno (H⁺) en solucion",
         "Tiene un pH menor que 7",
         "Incluye el acido clorhidrico y el acido acetico"},

        {"Sustancia que libera iones hidroxilo (OH⁻) en solucion",
         "Tiene un pH mayor que 7",
         "Incluye el hidroxido de sodio y el hidroxido de calcio"},

        {"Compuesto resultante de la reaccion entre un acido y una base",
         "Comunmente es soluble en agua",
         "Ejemplos incluyen el cloruro de sodio"},

        {"Sustancia que se disocia en iones en solucion y conduce electricidad",
         "Incluye sales, acidos y bases",
         "Es esencial para la funcion celular"},

        {"Mezcla homogenea de dos o mas sustancias",
         "Tiene una fase dispersa y una fase dispersante",
         "Ejemplos incluyen el aire y las soluciones salinas"},

        {"Sustancia que disuelve a otra para formar una solucion",
         "El agua es el solvente universal",
         "Puede ser polar o no polar"},

        {"Sustancia que se disuelve en un solvente",
         "Puede ser un solido, liquido o gas",
         "Forma parte de una solucion"},

        {"Medida de la cantidad de soluto en una cantidad dada de solvente",
         "Se expresa en moles por litro",
         "Es crucial para las reacciones quimicas"},

        {"Numero de moles de soluto por litro de solucion",
         "Expresada como mol/L",
         "Se utiliza para calcular la cantidad de reactivos y productos en una reaccion"},

        {"Calculo de las relaciones cuantitativas entre los reactivos y productos en una reaccion quimica",
         "Basado en la ley de la conservacion de la masa",
         "Es fundamental para la quimica analitica"},

        {"Perdida de electrones por un atomo o ion",
         "Aumenta el estado de oxidacion",
         "Es un componente clave de las reacciones redox"},

        {"Ganancia de electrones por un atomo o ion",
         "Disminuye el estado de oxidacion",
         "Acompaña a la oxidacion en las reacciones redox"},

        {"Átomos del mismo elemento con diferente numero de neutrones",
         "Tienen diferentes masas atomicas",
         "Ejemplos incluyen el carbono-12 y el carbono-14"},

        {"Tabla que organiza los elementos quimicos segun su numero atomico",
         "Muestra tendencias periodicas en las propiedades",
         "Creada por Dmitri Mendeleyev"},

        {"Columna vertical en la tabla periodica",
         "Los elementos en un grupo tienen propiedades similares",
         "Ejemplos incluyen los metales alcalinos y los halogenos"},

        {"Fila horizontal en la tabla periodica",
         "Los elementos en un periodo tienen el mismo numero de capas de electrones",
         "Muestra la tendencia en el radio atomico y la energia de ionizacion"},

        {"Elemento que es buen conductor de electricidad y calor",
         "Suele ser maleable y ductil",
         "Incluye el hierro, cobre y aluminio"},

        {"Elemento que es mal conductor de electricidad y calor",
         "Suele ser quebradizo y opaco",
         "Incluye el carbono, oxigeno y azufre"},

        {"Elemento con propiedades intermedias entre metales y no metales",
         "Semiconductores de electricidad",
         "Incluyen el silicio y el germanio"},

        {"Elemento del grupo 18 de la tabla periodica",
         "Gases inertes y no reactivos",
         "Incluye el helio, neon y argon"},

        {"Estado de la materia con volumen definido pero forma indefinida",
         "Las particulas estan en contacto cercano pero pueden deslizarse unas sobre otras",
         "Incluye el agua y el mercurio"},

        {"Estado de la materia con forma y volumen definidos",
         "Las particulas estan en una estructura fija y ordenada",
         "Incluye el hierro y el hielo"},

        {"Estado de la materia con particulas cargadas que se mueven libremente",
         "Es comun en las estrellas y el espacio",
         "Conductividad electrica y magnetica alta"},

        {"Aceleracion de una reaccion quimica por una sustancia",
         "La sustancia no se consume en la reaccion",
         "Incluye enzimas y metales de transicion"},

        {"Estudio de la velocidad de las reacciones quimicas",
         "Depende de factores como la concentracion, temperatura y catalizadores",
         "Es crucial para la industria quimica"},

        {"Rama de la quimica que estudia los cambios de energia en las reacciones quimicas",
         "Incluye la entalpia y la entropia",
         "Es fundamental para la comprension de las reacciones exotermicas y endotermicas"},

        {"Rama de la quimica que estudia los compuestos del carbono",
         "Incluye hidrocarburos, alcoholes, acidos y mas",
         "Es crucial para la vida y la industria farmaceutica"},
    }};