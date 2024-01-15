// 4.	Programa que sume las filas de una matriz NxM y ponga
//      dicha suma en una columna añadida N+1.

#include <stdio.h>         // Entrada salida
#define M 3                // Dimensiones del ArraY
#define N 3                // Dimensiones del ArraY

// Procedimiento que lee Una Matriz
void leer (int matriz[M][N+1])
{
int recorrer,recorrer2;
for (recorrer=0;recorrer<M;recorrer++)
		  {
		  for (recorrer2=0;recorrer2<N;recorrer2++)
					 {
					 printf("Elemento %d x %d: ",recorrer+1,recorrer2+1);
					 scanf("%d",&matriz[recorrer][recorrer2]);
					 }
		  printf("\n");
		  }
}

// Procedimiento que pone a cero la ultima columna de la matriz:
void sumadoracero (int matriz[M][N+1])
{
int recorrer;
for (recorrer=0;recorrer<M;recorrer++)
		matriz[recorrer][N]=0;
}


// Procedimiento que SUMA las filas de un Array y las almacena en la ultima
// columna:
void sumadordefilas (int matriz[M][N+1])
{
int recorrer,recorrer2;
for (recorrer=0;recorrer<M;recorrer++)
		  {
		  for (recorrer2=0;recorrer2<N;recorrer2++)
					matriz[recorrer][N]=matriz[recorrer][N]+matriz[recorrer][recorrer2];
		  }
}

// Procedimiento que Presenta una matriz por pantalla
void escribe (int matriz[M][N+1])
{
int recorrer,recorrer2;
printf("\n\n\n");
for (recorrer=0;recorrer<M;recorrer++)
		  {
		  for (recorrer2=0;recorrer2<=N;recorrer2++)
				  printf("%d\t",matriz[recorrer][recorrer2]);
		  printf("\n");
		  }
}


// Programa Principal
int main()
{
int matriz[M][N+1];
leer(matriz);
sumadoracero(matriz);
sumadordefilas(matriz);
escribe(matriz);
return 69;
}
