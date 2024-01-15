/* 9.	Hacer un programa que sume los elementos de un vector  que sean más
		grandes que un número dado que se ha de introducir por teclado. 	*/

#include <stdio.h>        // Entrada salida
#define MxN 4             // MxN seran las dimensiones de la matriz cuadrada (10)

void main()
{
int matriz[MxN][MxN];          // Declaramos un Array Bidimensional Cuadrado
int contador,contador2,suma=0; // Dos variables para recorrerlo y la de suma
int numero;							 // Y la variable donde guardaremos el numero-limite

printf("\¿A partir de que numero quieres sumar elementos? ");
scanf("%d",&numero);

printf("\tIntroduzca los %dx%d elementos por filas\n\n",MxN,MxN);
/* El bucle escrito a contunuacion recorre toda la matriz MxN x MxN, pidiendo el
elemento de la posicion [1..MxN] x [1..MxN].
Al leerlo comprueba si es o no mayor que el numero-limite que se leyo al principio
Si es mayor, se suma.
*/

for (contador=0;contador<MxN;contador++)
	  {
		 for (contador2=0;contador2<MxN;contador2++)
				{
				printf("Escriba el elemento %d x %d: ",contador+1,contador2+1);
				scanf("%d",&matriz[contador][contador2]);
				if (matriz[contador][contador2]>numero)
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

printf("\n\n\tLa suma de los elementos mayores de %d de la matriz es: %d",numero,suma);
}