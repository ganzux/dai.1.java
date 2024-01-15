// 4. Programa que asigne datos a un array de dos dimensiones y a continuación
// escriba las sumas correspondientes de las filas del array.
// Hacerlo mediante funciones.

#include <stdio.h>         // Entrada salida
#define DIMEN 3            // Dimensiones del ArraY

// Procedimiento que lee Una Matriz
void leer (int matriz[DIMEN][DIMEN])
{
int recorrer,recorrer2;
for (recorrer=0;recorrer<DIMEN;recorrer++)
        {
        for (recorrer2=0;recorrer2<DIMEN;recorrer2++)
                {
                printf("Elemento %d x %d: ",recorrer+1,recorrer2+1);
                scanf("%d",&matriz[recorrer][recorrer2]);
                }
        printf("\n");
        }
}

// Procedimiento que SUMA las filas de un Array:
void sumadordefilas (int matriz[DIMEN][DIMEN],int suma[DIMEN])
{
int recorrer,recorrer2;
// Ponemos el sumador a cero:
for (recorrer=0;recorrer<DIMEN;recorrer++)
        suma[recorrer]=0;
// Sumamos las filas:
for (recorrer=0;recorrer<DIMEN;recorrer++)
        {
        for (recorrer2=0;recorrer2<DIMEN;recorrer2++)
               suma[recorrer]=suma[recorrer]+matriz[recorrer][recorrer2];
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

// Programa Principal
void main()
{
int matriz[DIMEN][DIMEN],suma[DIMEN],recorrer,recorrer2;
leer(matriz);
sumadordefilas(matriz,suma);
for (recorrer=0;recorrer<DIMEN;recorrer++)
        {
        for (recorrer2=0;recorrer2<DIMEN;recorrer2++)
                printf("%d\t",matriz[recorrer][recorrer2]);
        printf("= %d\n",suma[recorrer]);
        }
scanf("%d",&matriz[0][0]);
}
