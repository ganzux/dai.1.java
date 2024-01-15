/* 11. Hacer un programa que encuentre que posición
		 ocupa el elemento más pequeño de un array.        */

#include <stdio.h>        // Entrada salida
#define MxN 4             // MxN seran las dimensiones de la matriz cuadrada

void main()
{
int matriz[MxN][MxN];          // Declaramos un Array Bidimensional Cuadrado
int contador,contador2;        // Dos variables para recorrerlo
int enano=25000; 					 // Y donde guardaremos el numero mas pequeño

printf("\tIntroduzca los %dx%d elementos por filas\n\n",MxN,MxN);
/* El bucle escrito a contunuacion recorre toda la matriz MxN x MxN, pidiendo el
elemento de la posicion [1..MxN] x [1..MxN].                     */

for (contador=0;contador<MxN;contador++)
	  {
		 for (contador2=0;contador2<MxN;contador2++)
				{
				printf("Escriba el elemento %d x %d: ",contador+1,contador2+1);
				scanf("%d",&matriz[contador][contador2]);
				if (matriz[contador][contador2]<enano)
					enano=matriz[contador][contador2];
				}
		 printf("\n");
	  }

printf("\n\n\tEl elemento mas pequeño de la matriz es: %d",enano);
}