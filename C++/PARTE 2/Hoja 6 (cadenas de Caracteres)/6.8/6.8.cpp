/* 6.8. Se introduce por teclado una serie de caracteres (máximo 15)
en minúscula hasta que se introduce el carácter ´x´ (carácter para terminar
que no debe almacenarse). Almacenarlos en una cadena de caracteres y
posteriormente mostrar esa cadena en mayúsculas                              */

#include <stdio.h>     				 // Cabecera de Entrada Y Salida
#include <conio.h>                // Para el getch()
#include <string.h>      			 // Trabajo con cadenas de caracteres
#define ESC 0x1b        			 // Tecla Escape :)
#define  X 16   			          // Dimensiones maximas

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

/* Funcion que vacie un array                                					   */
	void vacia(char matriz[X])
	{
	int corredor=0;
	for (corredor=0;corredor<X;corredor++)
		matriz[corredor]='\0';
	}

/* Funcion que lea un array de caracteres	hasta 15 o x     					   */
	void lee(char matriz[X])
	{
	int corredor=0;
	char car='m';
	printf("Introduzca la cadena y presione x: ");

	while(corredor<X && car!='x' && car!='X')
	  {
		car=getche();
		if (car!='x' && car!='X')
			 matriz[corredor]=car;
		corredor++;
	  }
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

// Vaciamos el array:
	vacia(cadena);
// Leemos la cadena:
	printf("CADENA \n=======\n");
		lee(cadena);
// Pasamos a mayusculas:
	strupr(cadena);
// Mostramos por pantalla:
	printf("\n\nLa cadena en mayusculas sera: ");
	puts(cadena);

// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir o cualquier otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
	}
