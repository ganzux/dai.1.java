/* 6.	Programa que lea una matriz cuadrada, la presente por pantalla y nos
escriba la suma de todos los números que no están en la diagonal principal. */

#include <stdio.h>        // Entrada salida
#define MxN 3             // MxN seran las dimensiones de la matriz cuadrada

void main()
{
int matriz[MxN][MxN];            // Declaramos un Array Bidimensional Cuadrado
int contador,contador2,suma=0;   // Dos variables para recorrerlo y una de suma

printf("\tIntroduzca los %dx%d elementos por filas\n\n",MxN,MxN);
/* El bucle escrito a contunuacion recorre toda la matriz MxN x MxN, pidiendo el
elemento de la posicion [1..MxN] x [1..MxN].
Al leer el numero, comprueba que no esta en la diagonal principal, añadiendo su
valor a la variable suma, que al inicio del programa se puso a cero.
El comprobar si esta en la D.P. se realiza mediante un IF, que verifica que los
contadores no son iguales. */

for (contador=0;contador<MxN;contador++)
	  {
		 for (contador2=0;contador2<MxN;contador2++)
				{
				printf("Escriba el elemento %d x %d: ",contador+1,contador2+1);
				scanf("%d",&matriz[contador][contador2]);

				if (contador!=contador2)
					 suma=suma+matriz[contador][contador2];
				}
	  }
// El siguiente bucle escribe la matriz en pantalla. Añade un salto de linea.
printf("\n\n\n");
for (contador=0;contador<MxN;contador++)
	  {
		 for (contador2=0;contador2<MxN;contador2++)
				printf("\t%d ",matriz[contador][contador2]);
		 printf("\n");
	  }

// Escribimos, por ultimo, la suma de los elementos.
printf("\n\nLa suma de los elementos que no estan en la diagonal principal es %d",suma);
}
