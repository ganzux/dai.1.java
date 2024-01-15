// 8. Crear una matriz de forma dinámica, rellenarla con valores aleatorios
// y después imprimirla.

	#include <stdio.h>
	#include <conio.h>
	#include <string.h>
	#include <stdlib.h>

	#define  MAX    200  // Tamaño máximo

// Funciones que utilizaremos en el programa

// Dimensiones de la Matriz
void dimensiones(int *filas,int *columnas)
{
*filas=MAX-1;
do{
	  system("cls");
	  if (*filas>MAX || *filas<1)
		  printf("Han de ser mas de 0 filas y menos de %d.\n",MAX+1);
	  printf("FILAS:\t\t");
	  scanf("%d",filas);
}while(*filas>MAX || *filas<1);
fflush(stdin);
*columnas=MAX-1;
do{
	  if (*columnas>MAX || *columnas<1)
		  printf("Han de ser mas de 0 columnas y menos de %d.\n",MAX+1);
	  printf("COLUMNAS:\t");
	  scanf("%d",columnas);
}while(*columnas>MAX || *columnas<1);
}
// fin de la funcion que lee las dimensiones

// Algoritmo que crea una matriz:
int ** crea(int filas, int columnas)
{
int **matriz;
int i;                // Indice para recorrer la matriz

matriz=(int **) malloc (filas*sizeof(int *));
if (matriz!=NULL)
	for (i=0;i<filas;i++)
		 matriz[i]=(int *) malloc(columnas*sizeof(int));
return matriz;
}
// Fin de la creación

// Algoritmo que rellena una matriz con numeros aleatorios (0..9):
void rellena(int **matriz,int filas, int columnas)
{
int i1,i2;               // Indices para recorrer las 2 dimensiones de matriz
// Doble bucle anidado que recorre la matriz:
for (i1=0;i1<filas;i1++)
	for (i2=0;i2<columnas;i2++)
	     matriz[i1][i2]=rand()%10;
}
// Fin del algoritmo rellena

// Función que escribe una matriz de doble dimensión:
void escribe(int **matriz, int filas, int columnas)
{
int i,j;
for (i=0;i<filas;i++)
    {
    for (j=0;j<columnas;j++)
        printf("%d\t",matriz[i][j]);
    printf("\n");
    }
}
// Fin de la escritura

// Liberación de la memoria
void salida(int **matriz,int filas)
{
int i;
// Liberamos la memoria de matriz con la funcion FREE:
   for (i=0;i<filas;i++)
	 free(matriz[i]);
   free(matriz);
printf("\n\n\n\n\tPresione Cualquier tecla para terminar...");
getch();
}
// Fin de la salida

// No hay mas funciones

int main()
{
int **matriz,filas,columnas;
dimensiones(&filas,&columnas);       // Almacenamos las dimensiones,
matriz=crea(filas,columnas);         // Creamos la Matriz,
rellena(matriz,filas,columnas);      // La rellenamos,
escribe(matriz,filas,columnas);      // La escribimos por pantalla,
salida(matriz,filas);             // Y liberamos la memoria.
}
