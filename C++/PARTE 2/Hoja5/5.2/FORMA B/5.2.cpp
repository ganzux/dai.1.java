/*2. Programa que introduzca los 50 primeros números positivos en un vector
	  y escriba la media de dichos números.

Los 50 primeros numeros son: 1,2,3,4,5,6...,48,49 y 50.      
La media será (50+1)*25/50       */

#include <stdio.h>             // Entrada/Salida de datos
#define dimension 50           // Dimension del ArraY

// Funcion que escriba los numeros en el Vector y la media:
int mediaprimeros(int vector[dimension])
{
int aux;		      // La usaremos para recorrer el ArraY
int media;                    // Guardaremos la MEDIA 
for(aux=0;aux<dimension;aux++)
	vector[aux]=aux+1;

media=(dimension+1)*(dimension/2)/dimension;
return media;
}

int main ()

{
int vector[dimension];   		 // Declaramos un Vector con el que poder trabajar
int media,aux;						 // Almacenaremos la media y otra para recorrer
media=mediaprimeros(vector);

// Imprimimos el vector resultante y la media de su suma:
printf("\n\nEl Vector resultante es: ");
for(aux=0;aux<dimension;aux++)
	printf("%d, ",vector[aux]);

printf("\n\nLa Media de su suma es: %d",media);
scanf("%d",&vector[0]);
}
