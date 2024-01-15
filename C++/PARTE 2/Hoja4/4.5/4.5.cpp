// 5. Programa que lea un array de dos dimensiones, copie el array en otro
//    array y visualice éste último array por filas. Hacerlo mediante funciones.

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

// Procedimiento que copia Una Matriz en otra
void copia (int matriz[DIMEN][DIMEN],int matriz2[DIMEN][DIMEN])
{
int recorrer,recorrer2;
for (recorrer=0;recorrer<DIMEN;recorrer++)
        {
        for (recorrer2=0;recorrer2<DIMEN;recorrer2++)
               matriz2[recorrer][recorrer2]=matriz[recorrer][recorrer2];
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
int matriz[DIMEN][DIMEN],matriz2[DIMEN][DIMEN];
leer(matriz);
copia(matriz,matriz2);
escribe(matriz2);
scanf("%d",&matriz[0][0]);
}
