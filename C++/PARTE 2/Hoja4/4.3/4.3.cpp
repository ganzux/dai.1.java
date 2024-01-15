// 3. Programa que lea las notas correspondientes a los alumnos de un determinado
// curso, las almacene en un array y dé como resultado la nota media del curso.
// Hacerlo mediante funciones.

#include <stdio.h>         // Entrada salida
#define DIMEN 3            // Dimensiones del ArraY

// Procedimiento que lee Una Matriz  (en este caso las notas)
void leer (int matriz[DIMEN])
{
int recorrer;
for (recorrer=0;recorrer<DIMEN;recorrer++)
         {
         printf("Nota de posicion %d:\t",recorrer+1);
         scanf("%d",&matriz[recorrer]);
         }
}

// Funcion que calcula la media de los elementos de una matriz:
int media (int matriz[DIMEN])
{
int recorrer,suma=0;
float media=0;
for (recorrer=0;recorrer<DIMEN;recorrer++)
       suma=suma+matriz[recorrer];
media=suma/DIMEN;
return media;
}

// Programa Principal
void main()
{
int matriz[DIMEN];
leer(matriz);
printf("\n\n\tLa media de las notas es %d",media(matriz));
scanf("%d",&matriz[0]);
}
