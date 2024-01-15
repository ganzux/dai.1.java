// Si mi cabecera no está definida, la defino
#ifndef misfunciones
	#define misfunciones
// Funciones que utilizaremos en el programa

/* Funcion MENU: Muestra un menu por pantalla y devuelve la opcion dentro de
   un rango de opciones.*/
int menu()
{
int op='1';
do
	{
	system("cls");
	printf("\t   MENU PRINCIPAL\n");
	printf("\t   ==== =========\n\n\n");
	printf("\t1.\tIntroducir Palabras");
	printf("\n\t2.\tGenerar Sopa de Letras");
	printf("\n\t3.\tMostrar Sopa de Letras");
	printf("\n\t4.\tGuardar Sopa de Letras");
	printf("\n\t5.\tCreditos");
	printf("\n\tESC.\tSALIR\n\n\n\t");

	if (op!='1' && op!='2' && op!='3' && op!='4' && op!='5' && op!=ESC)
		printf("\n\n\n\t\tOPCION NO VALIDA. POR FAVOR, SELECCIONE OTRA");

	op=getch();
	}
while(op!='1' && op!='2' && op!='3' && op!='4' && op!='5' && op!=ESC);
return op;
	}
// Fin del Menu

// Dibujo de salida y liberación de la memoria
void salida(char **matriz,int filas,char **palabras,int numerodepal)
{
int i;
system("cls");
printf("\nDiseñado por Alvaro Alcedo Moreno en Marzo de 2006\n");
printf("Lenguaje Utilizado: C++\n");
printf("Finalidad: Proyecto que recoja la mayor parte de los conocimientos adquiridos.\n");
printf("Agradecimientos: Acepto donativos :)\n");
printf("WeB:\tWwW . AlVaRiTo . NeT\n");
printf("E-Mail:\titoito@gmail.com\n");

// Liberamos la memoria de matriz y palabras con la funcion FREE:
if (matriz!=NULL)
   {
   for (i=0;i<filas;i++)
	 free(matriz[i]);
   free(matriz);
   }
if (palabras!=NULL)   
   {                  
   for (i=0;i<numerodepal;i++)
	 free(palabras[i]);
   free(palabras);
   }
printf("\n\n\n\n\tPresione Cualquier tecla para terminar...");
getch();
// FIN DEL PROGRAMA
}
// Fin de la salida

// Algoritmo que crea una matriz:
char ** crea(int filas, int columnas)
{
char **matriz;
int i;                // Indice para recorrer la matriz

matriz=(char **) malloc (filas*sizeof(char *));
if (matriz!=NULL)
	for (i=0;i<filas;i++)
		 matriz[i]=(char *) malloc(columnas*sizeof(char));
return matriz;
}
// Fin del algoritmo de crear

// Algoritmo que "borra" (pone en cada posicion un blanco) una matriz:
void borra(char **matriz,int filas, int columnas)
{
int i1,i2;                // Indice para recorrer las 2 dimensiones de matriz
for (i1=0;i1<filas;i1++)
	for (i2=0;i2<columnas;i2++)
		matriz[i1][i2]=' ';
}
// Fin del algoritmo de borrado


// Algoritmo que rellena una matriz con letras aleatorias:
void rellena(char **matriz,int filas, int columnas)
{
int i1,i2;               // Indices para recorrer las 2 dimensiones de matriz
int letraleatoria;       // Aqui almacenaremos el ASCII aleatoriamente (65-90)
int vocaloconsonante;    // Aleatorio donde diremos si es vocal o consonante
// Doble bucle anidado que recorre la matriz:
for (i1=0;i1<filas;i1++)
	for (i2=0;i2<columnas;i2++)
		if (matriz[i1][i2]==' ' || matriz[i1][i2]=='\0')  // Si la posicion no tiene nada metido
			{
			vocaloconsonante=rand()%10;            // Aleatorio entre 0 y 9
            if (vocaloconsonante<4)                // 40 % para consonantes
               {
               letraleatoria=rand()%26 + 65;       // Genera una letra aleatoria
               if (letraleatoria==85)              // Si tenemos un 85
                  letraleatoria=165;               // lo cambiamos por la Ñ
               }
			else                                   // Más del 60% para vocales
			     {
                 letraleatoria=rand()%5;           // Aleatorio entre 0 y 4
                 switch(letraleatoria)
                     {
                     case 0:                       // Si el aleatorio es cero
                         letraleatoria=65;         // la letra será A
                     break;
                     
                     case 1:                       // Si el aleatorio es uno
                         letraleatoria=69;         // la letra será E
                     break;
                     
                     case 2:                       // Si el aleatorio es dos
                         letraleatoria=73;         // la letra será I
                     break;
                     
                     case 3:                       // Si el aleatorio es tres
                         letraleatoria=79;         // la letra será O
                     break;
                     
                     case 4:                       // Si el aleatorio es cuatro
                         letraleatoria=85;         // la letra será U
                     }
                 }
                                                   
            matriz[i1][i2]=(char)letraleatoria;    // Y la guardas en la posicion
			}
}
// Fin del algoritmo rellena

// Funcion que escribe una matriz por pantalla:
void escribe(char **matriz, int filas, int columnas)
{
int i1,i2;                // Indices para recorrer las 2 dimensiones de matriz
								  // Doble bucle anidado que recorre la matriz:
for (i1=0;i1<filas;i1++)
	{
	for (i2=0;i2<columnas;i2++)
		printf("%c ",matriz[i1][i2]);
	printf("\n");
	}
getch();
}
// Fin de la funcion escribe

// funcion que lee cuantas palabras necesitamos
int numerodepalabras()
{
int cuantas=MAXPAL-1;
do{
	  system("cls");
	  if (cuantas>MAXPAL || cuantas<MINPAL)
		  printf("Han de ser mas de %d palabras y menos de %d.\n",MINPAL-1,MAXPAL+1);
	  printf("NUMERO DE PALABRAS:\t");
	  scanf("%d",&cuantas);
}while(cuantas>MAXPAL || cuantas<MINPAL);
return cuantas;
}

// Funcion PALABROS, encargada de almacenarlas en un array de caracteres:
char ** palabros(int palabras)
{
int i;
char **vector;

vector=(char **) malloc(palabras*sizeof(char *));

for (i=0;i<palabras;i++)
	vector[i]=(char *)malloc(LONGI*sizeof(char));
printf("\n");
if (vector!=NULL)
	for (i=0;i<palabras;i++)
	{
	fflush(stdin);
	printf("Dame la palabra %d:\t",i+1);
	fgets(vector[i],LONGI,stdin);
	strupr(vector[i]);
	fflush(stdin);
	}
return vector;
	}
// Fin de PALABROS


// funcion que lee las dimensiones de la matriz sopa de letras
void dimensiones(int *filas,int *columnas)
{
*filas=MAXFIL-1;
do{
	  system("cls");
	  if (*filas>MAXFIL || *filas<MINFIL)
		  printf("Han de ser mas de %d filas y menos de %d.\n",MINFIL-1,MAXFIL+1);
	  printf("FILAS:\t\t");
	  scanf("%d",filas);
}while(*filas>MAXFIL || *filas<MINFIL);
fflush(stdin);
*columnas=MAXCOL-1;
do{
	  if (*columnas>MAXCOL || *columnas<MINCOL)
		  printf("Han de ser mas de %d columnas y menos de %d.\n",MINCOL-1,MAXCOL+1);
	  printf("COLUMNAS:\t");
	  scanf("%d",columnas);
}while(*columnas>MAXCOL || *columnas<MINCOL);
}
// fin de la funcion que lee las dimensiones

/* Funcion que recibe una matriz y su tamaño, unas palabras y cuantas son.
Procede a generar un numero aleatorios:
El numero, de 0 a 3, lo utilizaremos para meter la palabra dentro del
Array: 0 horizontal, 1 vertical, 2 diagonal derecha y 3 diagonal izquierda. */

void coloca(char **matriz,int filas,int columnas,char **palabra,int cuantaspal)
{
int aleatorio;			   // Aqui guardaremos los numeros aleatorios
int i,i1;   				// Indices para recorrer en bucles
int x,y;                    // lo utilizaremos para movernos por la matriz,
									 // almacenando en ella la palabra
int longitud;               // Almacenaremos la longitud de la palabra.
int fila,columna;           // Aleatorios donde guardaremos donde ubicar la palabra
int cabe;               // Bool para saber si una palabra puede escribirse
int cruzabien;
for (i=0;i<cuantaspal;i++)
	{
	longitud=strlen(palabra[i]);
	aleatorio=rand()%4;     // Genera un numero aleatorio entre 0 y 3 (0 .. 3).
	 switch(aleatorio)
		 {
		 case 0:              // En caso de que el número aleatorio sea cero,
				x=1;            // recorreremos en vertical
				y=0;
		 break;

		 case 1:              // En caso de que el número aleatorio sea uno,
				x=0;            // recorreremos en horizontal.
				y=1;
		 break;

		 case 2:              // En caso de que el número aleatorio dea dos,
				x=1;            // recorreremos la Y y la X de uno en uno.
				y=1;
		 break;

		 case 3:              // En caso de que el número aleatorio sea tres,
				x=1;            // recorreremos la X de uno en uno y recorreremos
				y=-1;           // la Y hacia abajo, o sea, de menos uno en menos
		 }                    // uno. Como es el último, no hace falta el Break.

// Ahora, según los índices X e Y, recorreremos la matriz tantas veces como
// palabras se tengan y ubicaremos las palabras en la matriz, según otro número
// aleatorio que genereremos para las coordenadas donde empieze la palabra.
		do
		 {
// Generamos aleatoriamente la posicion de la palabra
		 fila=rand()%filas;       // Aleatorio entre 0 y filas
		 columna=rand()%columnas; // Aleatorio entre 0 y columnas
// En principio la palabra no "cabe"
		 cabe=0;
		 cruzabien=1;
// Seguidamente miraremos si las dimensiones de la palabra caben en la estructura
		 if (((longitud*x)+fila<filas)&&((longitud*y)+columna<columnas))
			cabe=1;
// Bucle de seguridad que comprueba los cruces de palabras:
		 if (cabe==1)
			for (i1=0;i1<longitud-1;i1++)
// Si la posicion es distinta de vacio, y no coincide, el cruce estara mal.
				 if (matriz[fila+(x*i1)][columna+(y*i1)]!=' ' &&
				 matriz[fila+(x*i1)][columna+(y*i1)]!=palabra[i][i1])
						{
                        cruzabien=1;
                        cabe=0;
                        }

// Si ha pasado el bucle de seguridad, guardamos la palabra
		 if (cabe==1 && cruzabien==1)
			for (i1=0;i1<longitud-1;i1++)
				 matriz[fila+(x*i1)][columna+(y*i1)]=palabra[i][i1];
			
		 }
		 while(cabe==0 && cruzabien==1);
	}
}
// Fin de la funcion que coloca las palabras.

// Funcion que guarda la matriz resultante en un archivo HTML
int fghtm (char ** matriz,int filas,int columnas,char **palabras,int numpal)
{
	FILE * archivo = NULL;
	int i,i1;
	char nombre[20];

	printf("\n\nDeme el nombre del archivo (solo 8 digitos alfanumericos): ");
	fgets(nombre,8,stdin);
// Limpiamos el enter:
	nombre[strlen(nombre)-1]='\0';
printf("Generando Documento HTM...");

	strcat(nombre,".htm");
	archivo = fopen (nombre, "wt");
	if (archivo == NULL)
		{
		printf("\nERROR\nNo hay suficiente memoria\n\tPresione Cualquier tecla para continuar");
		getch();
		return 1;
		}

	  fprintf(archivo,"<html>\n<head>\n<title>Sopa de Letras de WwW.AlVaRiTo.NeT</title>\n</head>");
	  fprintf(archivo,"\n<body>\n<p align=\"center\">Sopa de Letras Generada por <a href=\"http:/www.alvarito.net/\"><b>WwW . AlVaRiTo . NeT</b></a>\n<br>Agradecimientos en <a href=\"mailto:itoito@gmail.com\">itoito@gmail.com</a><br>\n<hr color=\"#008000\" width=\"50%\" size=\"5\">");
	  fprintf(archivo,"\n<div align=\"center\">\n\n<table border=\"0\" cellspacing=\"0\" width=\"90%\" cellpadding=\"0\">\n");


	for (i=0;i<filas;i++)
		{
		fprintf(archivo,"<tr>\n");
		for (i1=0;i1<columnas;i1++)
			fprintf(archivo,"\t<td align=\"left\">%c</td>\n", matriz[i][i1]);
		fprintf(archivo,"</tr>\n");
		}
	fprintf(archivo,"\n</table>\n</center>\n</div>\n<hr color=\"#008000\" width=\"50%\" size=\"5\"><p align=\"left\"><br>\nPalabras Escondidas:<br>");
	for (i1=0;i1<numpal;i1++)
		fprintf(archivo,"\n<li>%s<br>", palabras[i1]);

	fclose(archivo);
	printf("\n\nHTM generado con exito\n\tPresione Cualquier tecla para continuar");
	getch();
	return 0;
}
// Fin de la generacion del HTM

void creditos()
{
system("cls");
printf("\nDise%cado por Alvaro Alcedo Moreno en marzo de 2006\n\n",164);
printf("                .---. .---.     %c Quiero una Sopita        \n",173);
printf("               :     : o   :      dise%cada por iTo !       \n",164);
printf("           _..-:   o :     :-.._    /                      \n");
printf("       .-\'\'  \'  `---\' `---\' \"   ``-.                       \n");
printf("     .\'   \"   \'  \"  .    \"  . \'  \"  `.                     \n");
printf("    :   \'.---.,,.,...,.,.,.,..---.  \' ;                    \n");
printf("    `. \" `.                     .' \" .'                    \n");
printf("     `.  '`.                   .' ' .'                     \n");
printf("      `.    `-._           _.-' \"  .'  .----.              \n");
printf("        `. \"    '\"--...--\"'  . ' .'  .'  o   `.            \n");
printf("        .'`-._'    \" .     \" _.-'`. :       o  :           \n");
printf("      .'      ```--.....--'''    ' `:_ o       :           \n");
printf("    .'    \"     '         \"     \"   ; `.;\";\";\";'           \n");
printf("   ;         '       \"       '     . ; .' ; ; ;            \n");
printf("  ;     '         '       '   \"    .'      .-'             \n");
printf("  '  \"     \"   '      \"           \"    _.-'                \n");
printf("\n\t     WwW . AlVaRiTo . NeT\n");
printf("\n\nPresione cualquier tecla para continuar.\n\t");
getch();
}

// No hay mas funciones
#endif
