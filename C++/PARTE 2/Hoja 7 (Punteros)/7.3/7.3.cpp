// 3. Análisis de una línea de texto.

// Queremos analizar una línea de texto examinando cada
// carácter y determinando a que categoría pertenece.

// En particular, queremos contar el número de vocales, consonantes, dígitos,
// espacios en blanco y otros caracteres.

// Realizar un programa de forma que la línea de texto se lea dentro del
// programa principal y sea pasada a una función donde será analizada la línea
// y devuelva el nº de vocales, etc.
// La línea de texto puede contener mayúsculas o minúsculas.

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
	int digitos=0,otros=0;                      // contadores a cero
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
			blancos++;
// Si no, si esta en el rango de letras, sumamos uno al contador de consonantes
		else if(cadena[n]>=0x61 && cadena[n]<=0x7A)
			consonantes++;
// Si no se da nada de lo anterios, sumamos uno al contador de otros caracteres
		else otros++;
		}
// Imprimimos por pantalla el resulato final:
		printf("\n\nVocales:\t%d\nConsonantes:\t%d\nEspacios:\t%d\n",vocales,consonantes,blancos);
		printf("Digitos:\t%d\nOtros caract.:\t%d",digitos,otros);
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

printf("\n               _.'^^'.                                                    ");
printf("\n    _      _.-' ((@)) '.   ./\\/\\/\\/\\/\\/\\,.---.__                    ");
printf("\n ..'o'...-'      ~~~    '~/\\/\\/\\/\\/\\/\\__.---.   `-._                ");
printf("\n:                          /\\/\\/\\/\\,-'              `-.__             ");
printf("\n^VvvvvvvvvvvVvVv                   |                     `-._             ");
printf("\n  ;^^^^^^^^^^^`      /             `\\        /               `-._        ");
printf("\n   ```````````````'.`                `\\     (                    `'-._   ");
printf("\n            .-----'`   /\\              `\\    )--.______.______._______`/");
printf("\n           (((------'``  `'--------'`(((----'                             ");
printf("\n\n                     By WwW . AlVaRiTo . NeT");


	return 69;
	}
