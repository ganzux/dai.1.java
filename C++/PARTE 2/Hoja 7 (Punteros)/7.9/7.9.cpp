// 9.	Realizar una función que recorra una cadena de caracteres 
//      declarado de forma dinámica a través de un puntero

	#include <stdio.h>
	#include <conio.h>
	#include <stdlib.h>
	#include <string.h>
	#define  MAX  99999999  // Tamaño máximo del Array

// Funciones que utilizaremos en el programa

// Funcion que pregunta por las dimensiones y reserva la memoria para la misma:
char *crea(int dimension)
{
// Declaramos dos punteros a char
char *matriz,*matriz2;
int longitud;
dimension=MAX/2;
// Cogemos la longitud máxima de la cadena validándola desde 1 hasta MAX
do{
   system("cls");
   if (dimension<1 || dimension>MAX)
      printf("ERROR: Minimo 1 y maximo %d",MAX);
   printf("\n\tCuantos caracteres quieres meter? ");
   scanf("%d",&dimension);
   }
while(dimension<1 || dimension>MAX);
// Limpiamos residuos
fflush(stdin);
// Reservamos espacio para matriz con las dimensiones que dijo el usuario
matriz=(char *) malloc (dimension*sizeof(char));
printf("Espacio reservado con exito.\n\tIntroduzca ahora la cadena: \n\t");
// Introducimos la cadena, con un maximo de los caracteres que nos dijo
fgets(matriz,dimension,stdin);
// Calculamos la longitud de la cadena
longitud=strlen(matriz);
// Reservamos espacio para matriz2 con la longitud de la cadena
matriz2=(char *) malloc (longitud*sizeof(char));
// Copiamos en matriz2 lo que había en matriz
strcpy(matriz2,matriz);
// Liberamos matriz
free(matriz);
// Devolvemos matriz2
return matriz2;
}
// Fin de la introduccion de datos

// Funcion que recorre la matriz
void recorre (char *matriz)
{
int i,longitud=strlen(matriz);
printf("\n\n\nLa cadena recorrida a traves de un puntero sera:\n\t");
for (i=0;i<longitud;i++)
    printf("%c",*(matriz+i));
printf("\n\n\t");
}
// Fin del ercorrido

// No hay mas funciones

int main()
{
char *array;
int dimension;
array=crea(dimension);
system("PAUSE");
recorre(array);
system("PAUSE");
free(array);
}
