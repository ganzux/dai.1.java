// 2. Programa que asigne datos enteros a un array unidimensional y a
// continuación escriba el contenido de dicho array.
// Se definirá el número máximo de elementos del array para su declaración,
// pero no se tienen porque introducir todos los elementos, cuando ya no se
// desee introducir más se pulsará -1.
// Tanto asignar datos como escribirlos lo haremos a través de funciones.

#include <stdio.h>         // Entrada salida
#define DIMEN 100          // Dimensiones del ArraY

// Procedimiento que lee Una Matriz hasta el valor -1
void leer (int matriz[DIMEN])
{
int recorrer=0;
do       {
         printf("Nota de posicion %d:\t",recorrer+1);
         scanf("%d",&matriz[recorrer]);
         recorrer++;
         }
while(recorrer<DIMEN && matriz[recorrer-1]!=-1);
printf("\n\n\tFin del ArraY. Has introducido %d elementos.",recorrer--);
}

// Programa Principal
void main()
{
int matriz[DIMEN];
leer(matriz);
scanf("%d",&matriz[0]);
}
