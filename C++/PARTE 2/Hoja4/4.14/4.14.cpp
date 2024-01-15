/* 14.	Hacer un programa que diga cuantas veces aparece
			en un vector un valor introducido desde teclado.	*/

#include <stdio.h>        // Entrada salida
#define M 4               // MxN seran las dimensiones de la matriz
#define N 4

void main()
{
int matriz[M][N];         // Declaramos un Array Bidimensional
int contador,contador2;   // Dos variables para recorrerlo
int numero,veces=0;	     // Y donde guardaremos el numero y la veces que aparece

printf("Deme el numero que quier buscar: ");
	scanf("%d",&numero);

printf("\n\tIntroduzca los %dx%d elementos por filas\n\n",M,N);
/* El bucle escrito a contunuacion recorre toda la matriz M x N, pidiendo el
elemento de la posicion [1..M] x [1..N].                     */

for (contador=0;contador<M;contador++)
	  {
		 for (contador2=0;contador2<N;contador2++)
				{
				printf("Escriba el elemento %d x %d: ",contador+1,contador2+1);
				scanf("%d",&matriz[contador][contador2]);
				if (matriz[contador][contador2]==numero)
						veces++;
				}
		 printf("\n");
	  }

printf("\n\t El elemento %d se encuentra %d veces.",numero,veces);
}
