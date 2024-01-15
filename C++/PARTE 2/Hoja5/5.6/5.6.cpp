/* 6.	Las notas de un colegio se tienen en una matriz de 30x5 elementos.
		Se desea listar las notas de cada alumno y su media. Cada alumno tiene
		como mínimo 2 asignaturas aunque no tienen que tener
		obligatoriamente las 5 asignaturas.                                     */

#include <stdio.h>
#include <conio.h>
#define ALUMNOS 3
#define NOTAS 5

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////
/* A todos los arrays les he añadido una columna (ALUMNOS posiciones de memoria
	mas) para almacenar alli la nota media del alumno.

	Añadida la columna NOTAS+1 donde se guarda el numero de asignaturas que tiene
	el alumno.																						*/


/* Procedimiento que borre una matriz Bidimensional									*/

	void borrado(int array[ALUMNOS][NOTAS+2])
	{
	int aux1,aux2;
		for (aux1=0;aux1<ALUMNOS;aux1++)
			{
			for (aux2=0;aux2<NOTAS+2;aux2++)
				array[aux1][aux2]=0;
			}
	}

/* Procedimiento que lea la matriz de las notas de los alumnos: Realmente se
	trata de un procedimiento estandar que lee un array Bidimensional				*/

	void leernotas(int array[ALUMNOS][NOTAS+2])
	{
	int aux1,aux2;
		for (aux1=0;aux1<ALUMNOS;aux1++)
			{
			printf("\nNumero de asignaturas del alumno %d? ",aux1+1);
				scanf("%d",&array[aux1][NOTAS+1]);
			for (aux2=0;aux2<array[aux1][NOTAS+1];aux2++)
				{
				printf("Introduzca la nota %d del alumno %d: ",aux2+1,aux1+1);
					scanf("%d",&array[aux1][aux2]);
				}
			printf("\n");
			}
	}

/* Procedimiento encargado de añadir la media a la [NOTAS] columna: */

	void media(int array[ALUMNOS][NOTAS+2])
	{
	int aux1,aux2;
		for (aux1=0;aux1<ALUMNOS;aux1++)
			{
			for (aux2=0;aux2<NOTAS;aux2++)
				array[aux1][NOTAS]=array[aux1][NOTAS]+array[aux1][aux2];
			array[aux1][NOTAS]=array[aux1][NOTAS]/array[aux1][NOTAS+1];
			}
	}

/* Procedimiento que se encarga de escribir la media de todos los alumnos:    */

	void escribemedia(int array[ALUMNOS][NOTAS+2])
	{
	int aux1;
		for (aux1=0;aux1<ALUMNOS;aux1++)
			printf("\tAlumno %d tiene una media de\t%d\n",aux1+1,array[aux1][NOTAS]);
	}

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
	int nota[ALUMNOS][NOTAS+2];
	borrado(nota);
	leernotas(nota);
	media(nota);
	escribemedia(nota);

	printf("\n\n\n\tPresione Cualquier tecla para salir.");
		getch();
	return 69;
	}
