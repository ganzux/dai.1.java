/* 6.2. Escribir un programa que lea una línea de texto, la almacene en un array
		  y la escriba hacia atrás. La longitud de la línea no será especificada
		  (se terminará con un retorno de carro), pero se asume que
		  no excederá de 80 caracteres.														*/

#include <stdio.h>     				 // Cabecera de Entrada Y Salida
#include <conio.h>                // Para el getch()
#include <string.h>      			 // Trabajo con cadenas de caracteres
#define ESC 0x1b        			 // Tecla Escape :)
#define  X 80   			          // Dimensiones maximas

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

/* Procedimiento que escribe un array hacia atras. Para ello lo primero que hara
sera ver la longitud del mismo; con ella hara un bucle FOR decreciente desde el
ultimo hasta el primer caracter.															   */
	void escribepatras(char matriz[X])
	{
	int aux;
// Almacenamos en aux la longitud del array:
	aux=strlen(matriz);

// Hacemos el FOR decreciente y escribimos:
// Empezamos en aux-1 porque los arrays comienzan en la posicion 0
	for (aux=aux-1;aux>=0;aux--)
		printf("%c",matriz[aux]);
	}
						/* Fin del Procedimiento*/



////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
// Declaramos las variables:
	char cadena[X],car;
// Metemos todo el programa en un bucle DO-WHILE hasta presionar ESC.
	do{
// Borramos la pantalla:
	clrscr();
// Leemos la cadena:
	printf("CADENA \n=======\n");
		lee(cadena);
// Llamamos a mi procedimiento de escribir:
	escribepatras(cadena);
// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir o cualquier otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
	}
