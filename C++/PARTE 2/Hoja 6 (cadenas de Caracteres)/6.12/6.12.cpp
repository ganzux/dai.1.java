// 12. Se introducen por teclado 10 cadenas de caracteres  de máximo 15
// caracteres cada una, que se almacenarán en un array.
// Ordenar alfabéticamente y visualizar ordenado dicho array.

////////////////////////////////////////////////////////////////////////////////
/////////////////////     CABECERAS Y DEFINICIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define ESC 0x1b         // Tecla Escape
#define LONGITUD 15      // Longitud de las palabras
#define PALABRAS 10      // Numero de palabras a ordenar
////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

// Procedimiento que permite ordenar un array mediante seleccion:
// Modificado para que ordene alfabeticamente mediante strcmp= <, >, 0
	void ordena(char cadenas[PALABRAS][LONGITUD])
	{
// aux y aux 2 para recorrer las cadenas. En comparacion meteremos el valor de
// la funcion strcmp, que si es mayor que cero es que es menor alfabeticamente.
	int aux,aux2,comparacion;
// cambio sera donde almacenemos la palabras al hacer el cambio
	char cambio[LONGITUD];
// Bucle ppal: 0..MAX-1
	 for (aux=0;aux<PALABRAS-1;aux++)
		{
// Bucle 2: aux+1..MAX
		  for (aux2=aux+1;aux2<PALABRAS;aux2++)
			{
// Miramos a ver si realmente cadenas[aux] es menor que cadenas[aux2]
				comparacion=strcmp(cadenas[aux],cadenas[aux2]);
// Si asi es, tendremos que hacer el cambio utilizando un array intermedio
				if (comparacion>0)
						 {
// Para la copia utilizaremos la funcion strcpy(1,2), que copia cadenas de
						 strcpy(cambio,cadenas[aux]);
// caracteres desde el argumento 2 hasta el argumento 1.
						 strcpy(cadenas[aux],cadenas[aux2]);
// Podriamos haber implementado otra funcion con este cambio, pero lo vi excesivo
						 strcpy(cadenas[aux2],cambio);
						 }
				}
		  }
	 }
// The End

// Procedimiento que lea un array de LONGITUD caracteres y PALABRAS posiciones:
	void lee(char cadenas[PALABRAS][LONGITUD])
	{
// n sirve para recorrer las PALABRAS palabras que hay
	int n;
	printf("Introduzca las cadenas y presione ENTER:\n\n");
// Emepezamos el bucle
	for(n=0;n<PALABRAS;n++)
		{
// Dame la cadena 1, Dame la cadena 2, 3, 4, 5 ... Dame la cadena PALABRAS
		 printf("Cadena numero %d: \t",n+1);
// gets "mete" todas las pulsaciones hasta presionar ENTER
				  gets(cadenas[n]);
		  }
	}
// Fin del Procedimiento

// Procedimiento que presenta un array de caracteres por pantalla
	void presenta(char cadenas[PALABRAS][LONGITUD])
	{
// Variable para recorrer el bucle
	int n;
	printf("\n\n\tOrdenacion del array de caracteres: \n\n");
// Recorremos el bucle desde 0 hasta PALABRAS-1
	for(n=0;n<PALABRAS;n++)
		{
// Incluimos una tabulacion y el numero de la posicion nueva
		printf("\t%d.- ",n+1);
// puts presenta un array hasta que encuentra la tecla ENTER, saltando de linea
		puts(cadenas[n]);
      }
	}
// Fin del Procedimiento

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
// Declaramos las variables:
	char car;
	char cadenas[PALABRAS][LONGITUD];
// Metemos todo el programa en un bucle DO-WHILE hasta presionar ESC.
	do{
// Borramos la pantalla:

// Leemos las cadenas:
	 lee(cadenas);
// Ordenamos las cadenas:
	 ordena(cadenas);
// Presentamos las cadenas por pantalla:
	 presenta(cadenas);
// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir o cualquier otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
	}


