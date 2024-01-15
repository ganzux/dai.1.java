// 7. Hacer una función que lea 2 números enteros y llame a otra función
// para que  intercambie los valores  y los valores cambiados se imprimar
// mediante el uso de otra función imprimir.

#include <stdio.h>     			  // Cabecera de Entrada Y Salida
#include <conio.h>                // Para el getch()
#include <string.h>      		  // Trabajo con cadenas de caracteres
#define ESC 0x1b        		  // Tecla Escape :)

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

// Funcion que lee dos numeros enteros:
	void PLeer(int *a, int *b)
	{
	printf("Por favor, introduzca el valor de la variable a: ");
		scanf("%d",a);
	printf("Por favor, introduzca el valor de la variable b: ");
		scanf("%d",b);
	}
// Fin de la funcion que lee dos numeros enteros.

// Funcion que intercambia los valores de dos enteros:
	void PIntercambia(int *a, int *b)
	{
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
	}
// Fin de la funcion que intercambia los valores

// Funcion que escribe dos numeros enteros:
	void Escribe(int a, int b)
	{
	printf("Valor de la variable a: %d",a);
	printf("\nValor de la variable b: %d",b);
	}                                      
// Fin de la funcion que lee dos numeros enteros.

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
	char car;
	int a,b;
// Bucle principal que se repite mientras no se pulse ESCAPE
	do
		{
		PLeer(&a,&b);
		PIntercambia(&a,&b);
	  	Escribe(a,b);
// Captamos la tecla para salir o volver al principio del programa:
		printf("\n\n\nPresion ESC para salir u otra tecla para continuar.");
			car=getch();
// Borramos la pantalla
		clrscr();
}
	while(car!=ESC);
printf("\n   _______________          |*\\_/*|________   \n");
printf("  |  ___________  |        ||_/-\\_|______  |  \n");
printf("  | |           | |        | |           | |  \n");
printf("  | |   0   0   | |        | |   0   0   | |  \n");
printf("  | |     -     | |        | |     -     | |  \n");
printf("  | |   \\___/   | |        | |   \\___/   | |  \n");
printf("  | |___     ___| |        | |___________| |  \n");
printf("  |_____|\\_/|_____|        |_______________|  \n");
printf("    _|__|/ \\|_|_.... iTo ....._|________|_    \n");
printf("   / ********** \\            / ********** \\   \n");
printf(" /  ************  \\        /  ************  \\ \n");
printf("--------------------      --------------------\n");
printf("\n\n By WwW . AlVaRiTo . NeT");

	return 69;
	}
