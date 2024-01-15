// 6.9. Se introduce una cadena de caracteres de máximo 15 caracteres,
//      visualizarlas al revés.

#include <stdio.h>            // Cabecera de Entrada Y Salida
#include <conio.h>            // Para el getch()
#include <string.h>           // Trabajo con cadenas de caracteres
#define ESC 0x1b              // Tecla Escape :)
#define  MAX 16               // Dimensiones maximas

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

/* Procedimiento que borra un array (espacio en blanco por estetica)          */
	void borra(char matriz[MAX])
	{
	int aux;
// Hacemos el FOR decreciente y escribimos:
	for (aux=MAX;aux>=0;aux--)
		matriz[aux]=' ';
	}
/* Fin del Procedimiento*/

/* Procedimiento que lea un array de caracteres										   */
	void lee(char matriz[MAX])
	{
	printf("Introduzca la cadena y presione ENTER: ");
	gets(matriz);
	}
/* Fin del Procedimiento*/

/* Procedimiento que escribe un array hacia atras desde el caracter 15        */
	void escribepatras(char matriz[MAX])
	{
	int aux;
// Hacemos el FOR decreciente y escribimos:
	for (aux=MAX;aux>=0;aux--)
		printf("%c",matriz[aux]);
	}
/* Fin del Procedimiento*/

/* Procedimiento que borra de un array el INTRO (|0) y coloca en su lugar un
	espacio en blanco                                                          */
	void estetico(char matriz[MAX])
	{
	int aux;
// Hacemos el FOR decreciente
	for (aux=MAX;aux>=0;aux--)
		if(matriz[aux]=='\0')
				 matriz[aux]=' ';
	}
/* Fin del Procedimiento*/



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

// Borramos el Array:
	borra(cadena);
// Leemos la cadena:
	printf("CADENA \n=======\n");
		lee(cadena);
// Borramos el INTRO en caso de que hubiese:
	estetico(cadena);
// Llamamos a mi procedimiento de escribir:
	escribepatras(cadena);
// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir o cualquier otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
	}
