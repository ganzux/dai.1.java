// 5. Programa que calcule el máximo de los valores de un vector entre la
//		posición 0 y la posición P.

#include <stdio.h>         // Entrada salida
#define M 06               // Dimensiones del ArraY

// Procedimiento que lee Una Matriz
void leer (int matriz[M])
{
int recorrer;
for (recorrer=0;recorrer<M;recorrer++)
			{
			 printf("Elemento %d: ",recorrer+1);
			 scanf("%d",&matriz[recorrer]);
			}
}

// Funcion que calcula el maximo desde 0 hasta P:
int maximo(int array[M],int posicion)
{
int recorrer,maximo=0;
for(recorrer=0;recorrer<posicion-1;recorrer++)
	{
	if (array[recorrer]>maximo)
		maximo=array[recorrer];
	}
return maximo;
}

////////////////////////////////////////////////////////////////////////////////
// Programa Principal
int main()
{
int matriz[M],posicion,max;
leer(matriz);

do
	{
	printf("\n\tPor favor, introduzca una posicion: ");
		scanf("%d",&posicion);
	}
while(posicion<1 || posicion>M);

max=maximo(matriz,posicion);

printf("El mayor numero que esta antes de la posicion %d es %d",posicion,max);

return 69;
}
