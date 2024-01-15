/* 8.	Hacer un programa que sume los números que hay
		en las posiciones pares de un vector de diez elementos. */

#include <stdio.h>        // Entrada salida
#define MxN 4             // MxN seran las dimensiones de la matriz cuadrada (10)

void main()
{
int matriz[MxN][MxN];          // Declaramos un Array Bidimensional Cuadrado
int contador,contador2,suma=0; // Dos variables para recorrerlo y la de suma.


printf("\tIntroduzca los %dx%d elementos por filas\n\n",MxN,MxN);
/* El bucle escrito a contunuacion recorre toda la matriz MxN x MxN, pidiendo el
elemento de la posicion [1..MxN] x [1..MxN].
Al leerlo comprueba si esta o no en posicion par; si lo esta, lo añade a una
variable suma, si no lo esta, pasa al siguiente elemento.

SE HA ENTENDIDO por posiciones pares aquellas cuyas coordenadas son pares, esto
es: 2x2,2x4,2x6...2x2·n
	 4x2,4x4,4,6...4x2·n
	 ...  ...  ...  ...
    2·nx2,2·nx4,2·nx6...  ---> 2·n x 2·n
*/

for (contador=0;contador<MxN;contador++)
	  {
		 for (contador2=0;contador2<MxN;contador2++)
				{
				printf("Escriba el elemento %d x %d: ",contador+1,contador2+1);
				scanf("%d",&matriz[contador][contador2]);
/* Las posiciones pares vienen dadas por contadores impares, ya que la posicion
	1 en C++ realmente es la 0. Por ello, la posicion real del elemento 2, C++
	la toma como elemento 1. Si miramos  el resto de la division entera (modulo)
	de 2, sabremos si se trata de una posicion par o impar.          */
				if (contador%2!=0 && contador2%2!=0)
					suma=suma+matriz[contador][contador2];
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
// Por ultimo mostramos la suma de los elementos pares:

printf("\n\n\tLa suma de los elementos pares de la matriz es: %d",suma);
}