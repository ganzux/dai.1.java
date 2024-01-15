// 4. Modificar el ejercicio 1 de forma que también se cuenten
// el número total de palabras y el número total de caracteres.

#include <stdio.h>     				 // Cabecera de Entrada Y Salida
#include <conio.h>                // Para el getch()
#include <string.h>      			 // Trabajo con cadenas de caracteres
#define ESC 0x1b        			 // Tecla Escape :)
#define  MAX 150   			       // Dimensiones maximas de la cadena

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

/* Funcion a la que pasamos una cadena y la examina: */
	void examina(char cadena[MAX])
	{
	int n;                                      // n para recorrer toda la cadena
	int vocales=0,consonantes=0,blancos=0;      // inicializamos todos los
	int digitos=0,otros=0,palabras=1;           // contadores a cero, menos palabras
// que se inicializa a uno porque la primera palabra no la cuenta el algoritmo
	strlwr(cadena);                             // pasamos a minusculas la cadena
	for (n=0;n<strlen(cadena);n++)              // recorremos toda la cadena escrita
		{
// Si es una vocal, sumamos uno al contador de vocales
		if(cadena[n]=='a' ||cadena[n]=='e' ||cadena[n]=='i' ||cadena[n]=='o' ||cadena[n]=='u')
			vocales++;
// Si no, si es un numero, sumamos uno al contador de numeros
		else if(cadena[n]>0x29 && cadena[n]<0x40)
			digitos++;
// Si no, si es un espacio en blanco, sumamos uno al contador de espacio en blanco
		else if(cadena[n]==' ')
			{
			blancos++;
// Si, siendo un espacio en blanco, el que le sigue NO lo es, sumamos uno a palabras
// Podria haberle dado otro rango de valores, pero pense que era "rizar el rizo"
// porque tendria que haber mirado tildes, dieresis...
			if (cadena[n+1]!=' ' && cadena[n+1]!='\0')
				palabras++;
			}
// Si no, si esta en el rango de letras, sumamos uno al contador de consonantes
		else if(cadena[n]>=0x61 && cadena[n]<=0x7A)
			consonantes++;
// Si no se da nada de lo anterios, sumamos uno al contador de otros caracteres
		else otros++;
		}
// Imprimimos por pantalla el resulato final:
		printf("\n\nVocales:\t%d\nConsonantes:\t%d\nEspacios:\t%d\n",vocales,consonantes,blancos);
		printf("Digitos:\t%d\nOtros caract.:\t%d",digitos,otros);
		printf("\n\nTotal caract.:\t%d\n\nTotal palabras:\t%d",n,palabras);
	}
/* Fin de la funcion examinadora*/

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
	char car,cadena[MAX];
// Bucle principal que se repite mientras no se pulse ESCAPE
	do
		{
// Pedimos la cadena al usuario
		printf("Introduzca la cadena a examinar y presione ENTER:\n\t");
			gets(cadena);
// Y le aplicamos la funcion "examina"
		examina(cadena);
// Captamos la tecla para salir o volver al principio del programa:
		printf("\n\n\nPresion ESC para salir u otra tecla para continuar.");
			car=getch();
// Borramos la pantalla
		clrscr();
		}
	while(car!=ESC);

printf("              \\\\\\\\|///                    \n");
printf("            \\\\  .-.-  //                 \n");
printf(".            (  .@.@  )                  \n");
printf("+-------oOOo-----(_)-----oOOo---------+  \n");
printf("|                                     |  \n");
printf("|     By WwW . AlVaRiTo . NeT         |  \n");
printf("|                                     |  \n");
printf("+---------------------Oooo------------+  \n");


	return 69;
	}
