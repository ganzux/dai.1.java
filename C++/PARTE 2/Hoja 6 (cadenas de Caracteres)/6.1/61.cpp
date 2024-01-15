/* 6.1. Programa que lea dos cadenas de teclado
		  y diga cual de ellas es mayor lexicograficamente.                     */

#include <stdio.h>     				 // Cabecera de Entrada Y Salida
#include <conio.h>                // Para el getch()
#include <string.h>      			 // Trabajo con cadenas de caracteres
#define ESC 0x1b        			 // Tecla Escape :)
#define  X 20   			          // Dimensiones maximas

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

/* Procedimiento que lea un array de caracteres										   */
	void lee(char matriz[X])
	{
	printf("Introduzca la cadena y presione ENTER: ");
	gets(matriz);
	}
						/* Fin del Procedimiento*/

/* Procedimiento que compara las cadenas. Al hacer uso de la funcion
(incluida en string.h) strcmp, incluimos un if al que "metemos"
0 si son iguales,
<0 , si cadena1 es menor que cadena2(orden alfb.)
>0, si cadena1 es mayor que cadena2(orden alfab.)
Version 1.2: Como para strcmp las mayusculas estan antes que las minusculas,
pasamos las dos cadenas a minusculas para la comparacion.                     */
	void compara(char matriz1[X],char matriz2[X])
	{
	int aux;
// Pasamos las cadenas a minusculas:
	strlwr(matriz1);
	strlwr(matriz2);
// En aux guardaremos la comparacion de las cadenas:
	aux=strcmp(matriz1,matriz2);
// Hacemos el IF comparador:
	if (aux==0)
		printf("\n\n\nLas dos cadenas son iguales.");
	else if (aux<0)
		printf("\n\n\nLa segunda cadena es mayor que la primera.");
	else
		printf("\n\n\nLa primera cadena es mayor que la segunda.");
	}
						/* Fin del Procedimiento*/



////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
// Declaramos las variables:
	char cadena1[X],cadena2[X],car;
// Metemos todo el programa en un bucle DO-WHILE hasta presionar ESC.
	do{
// Borramos la pantalla:
	clrscr();
// Leemos las cadenas:
	printf("CADENA 1\n========\n");
		lee(cadena1);
	printf("\n\nCADENA 2\n========\n");
		lee(cadena2);
// Comparamos las cadenas llanando a mi procedimiento:
	compara(cadena1,cadena2);
// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir o cualquier otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
	}
