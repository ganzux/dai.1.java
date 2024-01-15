// 3.	Programa que sume todos los elementos de una matriz cuadrada NxN
//      que estén por encima de la diagonal principal.

#include <stdio.h>             // Libreria de entrada y salida
#define  DIMEN 3               // Dimensiones estándar para la matriz cuadrada

// Procedimiento que lee Una Matriz
void leer (int matriz[DIMEN][DIMEN])
{
int recorrer,recorrer2;
for (recorrer=0;recorrer<DIMEN;recorrer++)
         {
         for (recorrer2=0;recorrer2<DIMEN;recorrer2++)
                {
                printf("Nota de posicion %d x %d:\t",recorrer+1,recorrer2+1);
                scanf("%d",&matriz[recorrer][recorrer2]);
                }
         printf("\n");
         }
}

// Procedimiento que Presenta una matriz por pantalla
void escribe (int matriz[DIMEN][DIMEN])
{
int recorrer,recorrer2;
printf("\n\n\n");
for (recorrer=0;recorrer<DIMEN;recorrer++)
		  {
		  for (recorrer2=0;recorrer2<DIMEN;recorrer2++)
					 printf("%d\t",matriz[recorrer][recorrer2]);
		  printf("\n");
		  }
}

// Funcion que suma los elementos superiores a la diagonal ppal:
int sumasupdiag(int matriz[DIMEN][DIMEN])
{
int recorrer,recorrer2,suma=0;

for (recorrer=0;recorrer<DIMEN;recorrer++)
			{
			for (recorrer2=0;recorrer2<DIMEN;recorrer2++)
					 {
					 if (recorrer2>recorrer)
							 suma=suma+matriz[recorrer][recorrer2];
					 }
			}
return suma;
}

///////////////////////////////////////////////////////////////////////////////

int main()
{
int matriz[DIMEN][DIMEN],suma;

leer (matriz);
suma=sumasupdiag(matriz);
escribe (matriz);

printf("\n\nLa suma de los elementos superiores a la diagonal principal es %d",suma);
return 69;
}
