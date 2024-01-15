/* 7.	Se dispone de un vector T de 50 elementos reales distintos de cero.
		Crear un nuevo vector en el que todos los elementos resulten de dividir
		de los elementos de la tabla T por el elemento T[k],
		siendo k un valor introducido por el usuario.       							*/

#include <stdio.h>     	// Cabecera de Entrada Y Salida
#include <conio.h>      // Cabecera para getch, getche...

#define  DIMENSION 10   // Dimension del ArraY

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////
/* */

/* Procedimiento que lea el ArraY, asegurandose que el valor no es cero:      */

	void leer(int array[DIMENSION])
	{
	int aux;
		for (aux=0;aux<DIMENSION;aux++)
			{
			do
				{
				printf("Introduzca el numero %d: ",aux+1);
					scanf("%d",&array[aux]);
				}
			while (array[aux]==0);
			}
	}

/* Procedimiento encargado de dividir todos los elementos de un array por el
	elemento de ese array que se indique el la posicion: 								*/

	void divide(int array[DIMENSION], int posicion)
	{
	int aux;
		for (aux=0;aux<DIMENSION;aux++)
			 array[aux]=array[aux]/array[posicion];
	}

/* Procedimiento que se encarga de escribir un array:    							*/

	void escribe(int array[DIMENSION])
	{
	int aux;
		for (aux=0;aux<DIMENSION;aux++)
			printf("%d\t",array[aux]);
	}

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
	int array[DIMENSION],posicion;

	leer(array);

	do{
		printf("\n\n\tIntroduzca la posicion del numero por la que desea dividir: ");
		scanf("%d",&posicion);
		}
	while(posicion<1 || posicion>DIMENSION);

	divide(array,posicion-1);

	printf("\n\n\n\nEl Array Resultante de la division es:\t");
	escribe(array);

	printf("\n\n\n\tPresione Cualquier tecla para salir.");
		getch();
	return 69;
	}

