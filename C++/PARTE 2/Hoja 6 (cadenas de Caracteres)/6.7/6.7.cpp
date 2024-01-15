// A) El resultado de la suma
// B) Los números introducidos, en orden contrario.
// C) La dirección de memoria del 1er elemento
// D) La dirección del segundo elemento del vector.

#include <stdio.h>     	// Cabecera de Entrada Y Salida
#include <conio.h>      // Para el getch()
#include <string.h>     // Trabajo con cadenas de caracteres
#define ESC 0x1b        // Tecla Escape :)
#define  MAX 20         // Dimensiones maximas

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

// Procedimiento que pone un array a cero:
	void acero(int matriz[MAX])
	{
	int aux;
	for (aux=MAX;aux>=0;aux--)
	    matriz[aux]=0;
	}
// Fin del procedimiento acero.

// Procedimiento que lea un array de números hasta el numero -1.
	void lee(int matriz[MAX])
	{
	int salida=0,contador=0;
	printf("Introduzca los numeros; El numero -1 será la salida.\n\n");
    do
	  {
	  printf("Introduzaca el numero %d :\t",contador+1);
	  scanf("%d",&matriz[contador]);
	  if (matriz[contador]==-1)
		salida=1;
	  contador++;
      fflush(stdin);
	  }
	while(salida==0 && contador<MAX);
	}
// Fin de la Funcion lee.

// Funcion que suma los elemntos de una matriz menos el menos 1 (-1):
	int sumador (int matriz[MAX])
    {
    int aux,suma=0;
    for (aux=0;aux<=MAX;aux++)
    	if (matriz[aux]!=-1)
        	suma=suma+matriz[aux];
    return suma;
    }
// Fin de la funcion suma

// Procedimiento que escribe un array en orden contrario:
	void escribealreves(int matriz[MAX])
	{
	int aux;
    printf("Escribimos los numeros en orden contrario: \n");
	for (aux=MAX-1;aux>=0;aux--)
	    printf("%d\t",matriz[aux]);
	}
// Fin del procedimiento escribealreves.


////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
// Declaramos las variables:
	char car;
	int matriz[MAX],suma;
// Hacemos un bucle principal que se repita hasta que se presione ESCAPE.
	do
	{
// Ponemos el array "a cero"
	acero(matriz);
// Borramos la pantalla:

// Tomamos los datos y sumamos:
	lee(matriz);
    suma=sumador(matriz);
// Escribimos la suma por pantalla:
	printf("\n\n\tLa suma de los números es: %d.\n\n\n",suma);
// Mostramos los numeros en orden inverso;
	escribealreves(matriz);
// Dirección de memoria del primer elemento:
	printf("\nLa direccion de memoria del primer elemento es %p.",matriz);
// Dirección de memoria del segundo elemento:
	printf("\nLa direccion de memoria del segundo elemento es %p.",matriz+1);
// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir o cualquier otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
    }
