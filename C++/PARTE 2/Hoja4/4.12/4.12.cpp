/* 12. Hacer un programa que encuentre el elemento más grande, y el más pequeño
		 de un array, y después los intercambie por los que
		 ocupan la primera y la última posición.                    */

#include <stdio.h>        // Entrada salida
#define M 4               // MxN seran las dimensiones de la matriz
#define N 4

void main()
{
int matriz[M][N];               // Declaramos un Array Bidimensional
int contador,contador2;         // Dos variables para recorrerlo
int enano=25000,grandote=-25000;// Y donde guardaremos el numero pequeño y grande

printf("\tIntroduzca los %dx%d elementos por filas\n\n",M,N);
/* El bucle escrito a contunuacion recorre toda la matriz M x N, pidiendo el
elemento de la posicion [1..M] x [1..N].                     */

for (contador=0;contador<M;contador++)
	  {
		 for (contador2=0;contador2<N;contador2++)
				{
				printf("Escriba el elemento %d x %d: ",contador+1,contador2+1);
				scanf("%d",&matriz[contador][contador2]);
				if (matriz[contador][contador2]<enano)
					enano=matriz[contador][contador2];
				if (matriz[contador][contador2]>grandote)
					grandote=matriz[contador][contador2];
				}
		 printf("\n");
	  }

printf("\n\n\tEl elemento mas pequeño de la matriz es: %d",enano);
printf("\n\tEl elemento mas grande de la matriz es: %d\n\n",grandote);

// Intercambiamos los valores y escribimos la matriz:
matriz[0][0]=enano;
matriz[M-1][N-1]=grandote;

for (contador=0;contador<M;contador++)
	  {
		 for (contador2=0;contador2<N;contador2++)
				printf("%d\t",matriz[contador][contador2]);
		 printf("\n");
	  }
}