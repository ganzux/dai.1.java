/* 1.	Tenemos un array de dimensión 30. Se supone que en las 20 primeras
		posiciones existen datos. Se pide realizar la suma de estos 20
		primeros elementos, desplazarlos una posición y
		depositar la suma en la primera posición del array.            */

#include <stdio.h>             // Entrada/Salida de datos
#define N 30           			 // Dimension del ArraY

// Procedimiento que pone Un ArraY Unidimensional a 0:
void acero (int vector[N])
{
int recorrer;
for (recorrer=0;recorrer<N;recorrer++)
			vector[recorrer]='\0';
}

// Funcion que lee Un ArraY Unidimensional hasta N-10 y almacene la suma:
int leer (int matriz[N])
{
int recorrer,suma=0;
for (recorrer=0;recorrer<N-10;recorrer++)
			{
			printf("Numero de posicion %d :\t",recorrer+1);
			scanf("%d",&matriz[recorrer]);
			suma=suma+matriz[recorrer];
			}
return suma;
}

// Procedimiento que mueva los valores "a la derecha" y almacene la suma en el 0:
void correvalores (int matriz[N], int suma)
{
int aux;								 // La usaremos para recorrer el ArraY

// Movemos los valores una posicion a la derecha:
for(aux=N-1;aux>0;aux--)
	matriz[aux]=matriz[aux-1];
// Damos al primer valor del Vector el numero que hay almacenado en Suma:
matriz[0]=suma;
}

// Procedimiento que Presenta una matriz por pantalla
void escribe (int matriz[N])
{
int recorrer;
printf("\n\n\n");
for (recorrer=0;recorrer<N;recorrer++)
		 printf("%d\t",matriz[recorrer]);
}

////////////////////////////////////////////////////////////////////////////////
void main ()
{
int array[N],suma;
// Ponemos el ArraY a cero:
acero(array);
// Leemos los datos y almacenamos la suma en la variable:
suma=leer(array);
// Corremos los valores hacia la derecha:
correvalores(array,suma);
// Escribimos el Array Resultante:
escribe(array);
}
////////////////////////////////////////////////////////////////////////////////
