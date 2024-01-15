/* NOMBRE:    SOPITO
DESCRIPCION:  Programa que genera una sopa de Letras
FECHA INICIO: 1 / III / 2006
VERSION:      1.0

HISTORICO:
1/III:  Generamos estructura principal
4/III:  Diseñamos el menu, integrado en un bucle do-while y bajo funcion menu()
7/III:  Ponemos nombre al programa: SoPiTo.
        Diseñamos la salida del programa e implementamos que salga solo con ESC
        Diseño el algoritmo que rellena una matriz con letras aleatorias
8/III:  Algoritmo que muestra una matriz por pantalla.
        Algoritmo que recoge las X palabras que quiera el usuario: palabros.
        Algoritmo que introduce las palabras de manera ordenada en el vector.
10/III: Modificamos, gracias a Eva, algunos algoritmos.
        Creo el algoritmo de creación de la matriz.
        Creo el algoritmo que pide el número de palabras
11/III: Modifico el algoritmo de salida para que libere la memoria con free.
12/III: Definimos limites para la matriz y para el numero de palabras
13/III: Esbozamos el incluir las palabras dentro de la Sopa de Letras
15/III: fghtm: Genera un HTM con la Sopa de Letras :) :) :) :)
16/III: Genereamos los cruces de las palabras
        Modificamos la función que rellena con caracteres aleatorios la sopa de
        letras para que ponga aproximadamente un 60 % de consonantes y un 40 %
        de vocales. A la vez, incluímos la letra Ñ.
17/III: Termino el menu, genero los creditos y doy las últimas pinceladas.
*/
#include "cabecera.h"
#include "funciones.h"

// Estructura principal del programa
int main(void)
{
char op='1';
char **matriz=NULL,**palabras=NULL;
int filas,columnas,numerodepal;
int hecho[3]={0,0,0};                    // Variable de seguridad

srand (time(NULL));
do
	{
	 op=menu();
		 switch(op)
		 {
		 case '1':              // Introducir palabras
			 numerodepal=numerodepalabras();
			 palabras=palabros(numerodepal);
			 hecho[0]=1;
		 break;

		 case '2':              // Generar SL
			 if (hecho[0]==1)
                {
                dimensiones(&filas,&columnas);
                matriz=crea(filas,columnas);
                borra(matriz,filas,columnas);
                hecho[1]=1;
                }
             else
                 {
                 printf("\nHas de introducir antes las palabras.\nPresiona cualquier tecla para continuar.");
                 getch(); 
                 }      
		 break;

		 case '3':              // Mostrar SL
		     if (hecho[0]==1 && hecho[1]==1)
			    {
                coloca(matriz,filas,columnas,palabras,numerodepal);
			    printf("\nRESULTADO DE LA SOPA\n");
			    printf("========= == == ====\n");
                escribe(matriz,filas,columnas);
			    rellena(matriz,filas,columnas);
			    printf("SOPA DE LETRAS FINAL\n");
			    printf("==== == ====== =====\n");			    
                escribe(matriz,filas,columnas);
                hecho[2]=1;
                }      
             else
                 {
                 printf("\nHas de introducir antes las palabras y generar la Matriz.\nPresiona cualquier tecla para continuar.");
                 getch(); 
                 }
         break;

		 case '4':              // Guardamos la Sopa de letras
		     if (hecho[0]==1 && hecho[1]==1 && hecho[2]==1)
                {
			    fflush(stdin);
			    fghtm(matriz,filas,columnas,palabras,numerodepal);                
                } 
             else
                 {
                 printf("\nHas de mostrar antes la Sopa de letras.\nPresiona cualquier tecla para continuar.");
                 getch(); 
                 }
		 break;
		 
		 case '5':              // Créditos
			 fflush(stdin);
			 creditos();        // Al ser la última, no hace falta el BREAK
		 }
//clrscr();

	}
while(op!=ESC);
salida(matriz,filas,palabras,numerodepal);
return 69;
}
// Fin de la estructura principal del programa
