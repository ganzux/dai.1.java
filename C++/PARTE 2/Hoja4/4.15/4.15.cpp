/* 15. Hacer un programa que sume los elementos introducidos en dos vectores,
T1 y T2 hacia otro vector T3, de la manera siguiente:
el primer elemento de T1 con último elemento de T2 hacia el primer elemento de T3,
el segundo elemento de T1 con el penúltimo elemento de T2 hacia el segundo elemento de T3, …
*/

#include <stdio.h>        // Entrada salida
#define N 4               // N sera la longitud del vector

// Procedimiento que pone Un ArraY Unidimensional a 0:
void acero (int vector[N])
{
int recorrer;
for (recorrer=0;recorrer<N;recorrer++)
			vector[recorrer]='\0';
}

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

// Procedimiento que suma en un vector T3 otros dos vectores T1 y T2 de la forma
// especificada en el enunciado. Muestra el Vector T3 por pantalla.
void sumaeimpresion (int T1[N],int T2[N], int T3[N])
{
int aux;

for (aux=0;aux<N;aux++)
	{
	T3[aux]=T1[aux]+T2[N-1-aux];
	printf("%d\n",T3[aux]);
	}
}


////////////////////////////////////////////////////////////////////////////////
void main()
{
int T1[N],T2[N],T3[N]; 						// Los tres vectores que se piden

acero(T1);     								// Mas vale prevenir que curar: ponemos
acero(T2);                             // los tres vectores que hemos declarado
acero(T3);                             // a cero.

printf("\n\n\t\tPRIMER VECTOR:\n");    // Leemos el primer vector
	leer(T1);
printf("\n\n\t\tSEGUNDO VECTOR:\n");   // Leemos el segundo Vector
leer(T2);

printf("\n\n\t\tVECTOR SUMA:\n");      // Sumamos e imprimimos :)
sumaeimpresion (T1,T2,T3);
}
