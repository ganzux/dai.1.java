// 6.11. Se introduce una cadena de caracteres de máximo 25 caracteres,
// Indicar si es un palíndromo (Se lee igual al derecho que al revés,
// salvo los espacios en blanco)

#include <stdio.h>            // Cabecera de Entrada Y Salida
#include <conio.h>            // Para el getch()
#include <string.h>           // Trabajo con cadenas de caracteres
#define ESC 0x1b              // Tecla Escape :)
#define  MAX 26               // Dimensiones maximas

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

/* Procedimiento que borra un array (espacio en blanco por estetica)          */
	void borra(char matriz[MAX])
	{
	int aux;
// Hacemos el FOR decreciente y escribimos:
	for (aux=MAX;aux>=0;aux--)
		matriz[aux]='\0';
	}
/* Fin del Procedimiento que borra el Array*/

/* Procedimiento que lea un array de caracteres								  */
	void lee(char matriz[MAX])
	{
	printf("Introduzca la cadena y presione ENTER: ");
	gets(matriz);
	}
/* Fin del Procedimiento*/

/* Procedimiento que corre un espacio hacia la izquierda desde una posición dada*/
	void corre (char matriz[MAX], int posicion)
	 {
	 int aux;
	 for (aux=posicion;matriz[aux]!='\0';aux++)         // Bucle que recorre todo el array
			matriz[aux]=matriz[aux+1];// dsd posicion y corre los valores
	 matriz[aux]='\0';
	 printf("%d: ",strlen(matriz));puts(matriz);
	}
/* Fin del procedimiento corre*/

/* Procedimiento que quita los espacios en blanco de una cadena de caracteres */
	void quitablancos (char matriz[MAX])
	 {
	 int aux;
	 for (aux=0;aux<strlen(matriz);aux++) // Bucle que recorre toda la cadena
		  if (matriz[aux]==' ')       // Si la posición es espacio blanco
				{
				corre(matriz,aux);      // llama al procedimiento corre en pos. aux
				aux--;
            }
	 }
/* Fin del procedimiento quitablancos*/

/* Procedimiento que diga si una cadena es palindroma o no. La cadena no puede
   contener espacios en blanco.      */
	void palindroma (char matriz[MAX])
    {
    int aux,testigo=1,longitud;        // testigo que dice que es palindromo
    matriz = strlwr (matriz);          // convertimos en minúsculas la cadena
    longitud=strlen(matriz);           // almacenamos su longitud
	 for (aux=0;aux<(longitud/2) && testigo==1;aux++) // Bucle que recorre la mitad del array
		if (matriz[aux]!=matriz[longitud-aux-1])       // Compara 1º con ultima y asi sucesivamente
         testigo=0;                                  // si no coinciden, no es palindromo
    if (testigo==1)                                  // Si testigo es 1
		printf("\n\n\nCadena Palindroma.");            // la cadena es palíndroma

    else if (testigo==0)                      // Si testigo es 0
    	printf("\n\n\nCadena NO Palindroma.");// la cadena NO es palíndroma
    }
/* Fin del procedimiento palindroma*/


////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
// Declaramos las variables:
	char cadena[MAX],car;
// Metemos todo el programa en un bucle DO-WHILE hasta presionar ESC.
	do{
// Borramos la pantalla:
	clrscr();
// Borramos el Array:
	borra(cadena);
// Leemos la cadena:
	printf("CADENA \n=======\n");
		lee(cadena);
// Detectamos los espacios en blanco y los borramos de la matriz:
   quitablancos (cadena);
// Llamamos al procedimiento palindroma, para que vea si lo es o no.
   palindroma(cadena);
// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir o cualquier otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
	}

