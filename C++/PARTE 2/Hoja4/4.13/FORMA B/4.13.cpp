/* 13. Hacer un programa que diga si un valor introducido desde teclado se
		 encuentra o no en un vector. Si está en el,
		 ha de mostrar la posición que ocupa.  					*/

#include <stdio.h>        // Entrada salida
#define N 5               // Dimensiones del vector

// Procedimiento que lee Un ArraY Unidimensional hasta N:
void leer (int matriz[N])
{
int recorrer;
for (recorrer=0;recorrer<N;recorrer++)
			{
			printf("Numero de posicion %d :\t",recorrer+1);
			scanf("%d",&matriz[recorrer]);
			}
}

// Funcion que busca un numero num en una matriz de N elementos, devolviendo -1
// si el numero no esta en la lista.
int olfatea (int matriz[N], int num)
{
int recorrer,posicion,salir=-1;
for (recorrer=0;recorrer<N && salir==-1;recorrer++)
			{
			if (matriz[recorrer]==num)
				{
				posicion=recorrer;
				salir=1;
				}
			}
if (recorrer==N && salir==-1)
	posicion=-2;

return posicion+1;
}


////////////////////////////////////////////////////////////////////////////////
void main()
{
int matriz[N];                // Declaramos un Array Unidimensional
int numero,posicion;          // Guardaremos el numero y la posicion

leer (matriz);                                  // Leemos la matriz

printf("Deme el numero que quier buscar: ");    // Leemos el numero a buscar
	scanf("%d",&numero);

posicion=olfatea(matriz,numero);

printf("\n\t El elemento %d se encuentra en la posicion %d",numero,posicion);
}
