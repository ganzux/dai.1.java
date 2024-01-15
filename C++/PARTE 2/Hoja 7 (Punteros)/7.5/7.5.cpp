// 5. Realizar un programa que acepte n�meros enteros y los ordene de forma 
// creciente. Es obligatorio la utilizaci�n de arrays din�micos.

	#include <stdio.h>
	#include <conio.h>
	#include <string.h>
	#include <stdlib.h>

	#define  MAX    200  // Tama�o m�ximo

// Funciones que utilizaremos en el programa

// Dimensiones de la Matriz
void dimensiones(int *tamano)
{
*tamano=MAX-1;
do{
	  system("cls");
	  if (*tamano>MAX || *tamano<1)
		  printf("Han de ser mas de 0 y menos de %d.\n",MAX+1);
	  printf("Cuantos numeros:\t\t");
	  scanf("%d",tamano);
}while(*tamano>MAX || *tamano<1);
fflush(stdin);
}
// fin de la funcion que lee las dimensiones

// Algoritmo que crea una matriz:
int * crea(int tamano)
{
int *matriz;

matriz=(int *) malloc (tamano*sizeof(int));
return matriz;
}
// Fin de la creaci�n

// Algoritmo que rellena una matriz con numeros aleatorios (0..9):
void rellena(int *matriz,int tamano)
{
int i1;               // Indice para recorrer la matriz
for (i1=0;i1<tamano;i1++)
     matriz[i1]=rand()%1000;
}
// Fin del algoritmo rellena

// Funci�n que escribe una matriz de doble dimensi�n:
void escribe(int *matriz, int tamano)
{
int i;
for (i=0;i<tamano;i++)
    printf("%d\t",matriz[i]);
printf("\n");

}
// Fin de la escritura

// Liberaci�n de la memoria
void salida(int *matriz,int tamano)
{
free(matriz);
printf("\n\n\n\n\tPresione Cualquier tecla para terminar...");
getch();
}
// Fin de la salida

// Ordenaci�n
void ordena(int *matriz,int tamano)
{
	int aux,aux2;
    int cambio;
    for (aux=0;aux<tamano;aux++)                  // Bucle ppal: 0..MAX-1
    	{
        for (aux2=aux+1;aux2<tamano;aux2++)         // Bucle 2: aux+1..MAX
        	{
            if (matriz[aux]>matriz[aux2])        // Si es mayor, tendremos
                   {                             // que hacer el cambio.
                   cambio=matriz[aux];
                   matriz[aux]=matriz[aux2];
                   matriz[aux2]=cambio;
                   }
            }
        }
}
// Fin de la ordenaci�n

// No hay mas funciones

int main()
{
int *matriz,tamano;
dimensiones(&tamano);        // Almacenamos las dimensiones,
matriz=crea(tamano);         // Creamos la Matriz,
rellena(matriz,tamano);      // La rellenamos,
ordena(matriz,tamano);       // la ordenamos,
escribe(matriz,tamano);      // La escribimos por pantalla,
salida(matriz,tamano);       // Y liberamos la memoria.
}
