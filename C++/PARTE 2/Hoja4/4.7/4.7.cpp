/* 7.	Programa que intercambie el valor de la fila i con la fila j (
introducidas por teclado) de una matriz cuadrada de orden 7. */

#include <stdio.h>        // Entrada salida
#define MxN 4             // MxN seran las dimensiones de la matriz cuadrada (7)

void main()
{
int matriz[MxN][MxN];       // Declaramos un Array Bidimensional Cuadrado
int contador,contador2,i,j; // Dos variables para recorrerlo y las de cambio.
int auxiliar[MxN];

printf("\tIntroduzca los %dx%d elementos por filas\n\n",MxN,MxN);
/* El bucle escrito a contunuacion recorre toda la matriz MxN x MxN, pidiendo el
elemento de la posicion [1..MxN] x [1..MxN].*/

for (contador=0;contador<MxN;contador++)
	  {
		 for (contador2=0;contador2<MxN;contador2++)
				{
				printf("Escriba el elemento %d x %d: ",contador+1,contador2+1);
				scanf("%d",&matriz[contador][contador2]);
				}
		 printf("\n");
	  }

// El siguiente bucle escribe la matriz en pantalla. Añade un salto de linea.
printf("\n");
for (contador=0;contador<MxN;contador++)
	  {
		 for (contador2=0;contador2<MxN;contador2++)
				printf("\t%d ",matriz[contador][contador2]);
		 printf("\n");
	  }

// Leemos la fila y columna que intercambiaremos, validandolos:
do{
printf("Deseo intercambiar la fila: ");
	scanf("%d",&i);
printf("con la columna: ");
	scanf("%d",&j);
}while ((i>MxN && i<1) && (j>MxN && j<1));

// Como en C++ los arrays comienzan en 0, modificamos los valores de i y j:
i--;j--;
// Sobreescribimos la Matriz Original: para ello almacenamos en el array auxiliar
// la fila que queremos cambiar:
for (contador=0;contador<MxN;contador++)
	auxiliar[contador]=matriz[i][contador];
// Acto seguido, moveremos la culumna a cambiar, a la fila de antes.
for (contador=0;contador<MxN;contador++)
	matriz[i][contador]=matriz[contador][j];
// Para finalizar, copiaremos el valor del array auxiliar a la columna a cambiar
for (contador=0;contador<MxN;contador++)
	matriz[contador][j]=auxiliar[contador];

// El siguiente bucle escribe la matriz en pantalla. Añade un salto de linea.
printf("\n\n\n");
for (contador=0;contador<MxN;contador++)
	  {
		 for (contador2=0;contador2<MxN;contador2++)
				printf("\t%d ",matriz[contador][contador2]);
		 printf("\n");
	  }
}

