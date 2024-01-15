/* 10. Hacer un programa que sume los elementos de un vector más grandes
		 que el que ocupa una posición determinada. La posición se ha de
		 introducir desde el teclado, y el programa ha de controlar que mientras
		 esta no sea válida (entre 0 y 9) se ha de continuar pidiendo.         */

#include <stdio.h>        // Entrada salida
#define M 5              // M sera las dimension del Array

// Procedimiento que lee Un ArraY Unidimensional hasta N:
void leer (int matriz[M])
{
int recorrer;
for (recorrer=0;recorrer<M;recorrer++)
			{
			printf("Numero de posicion %d :\t",recorrer+1);
			scanf("%d",&matriz[recorrer]);
			}
}

// Muestra el Vector T3 por pantalla.
void impresion (int T3[M])
{
int aux;
printf("\n\n\n\n");
for (aux=0;aux<M;aux++)
	printf("%d\t",T3[aux]);
}

// Pedimos la posicion del elemento y la guardamos en numero mediante funcion:
int posicionvalida (int posicion)
{
do{
	printf("\n\nIntroduzca la posicion del numero-limite: ");
	scanf("%d",&posicion);
  }
while (posicion<1 || posicion>10);
return posicion-1;  // Retornamos X-1 xq en C++ los arrays van desde 0 hasta N
}

// Sumamos los elementos superiores a numero:
int suma (int matriz[M], int posicion)
{
int contador,suma=0;
for (contador=0;contador<M;contador++)
	  {
			if (matriz[contador]>matriz[posicion])
				suma=suma+matriz[contador];
	  }
return suma;
}

////////////////////////////////////////////////////////////////////////////////
void main()
{
int matriz[M];
int sumas;
int posicion,posicionreal;

printf("\tIntroduzca los %d elementos \n\n",M);

leer (matriz);
impresion(matriz);
posicionreal=posicionvalida(posicion);
sumas=suma(matriz,posicionreal);
printf("\n\n\tLa suma de los elementos mayores es: %d",sumas);
}
////////////////////////////////////////////////////////////////////////////////