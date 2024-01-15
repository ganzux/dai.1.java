/* 6.6	Dada una lista de países y sus capitales:
Escribir un programa interactivo que acepte el nombre de un país como entrada
y escriba su correspondiente capital, y viceversa. Diseñar el programa para que
se ejecute de forma repetida mientras el usuario lo desee.                    */

#include <stdio.h>     				 // Cabecera de Entrada Y Salida
#include <conio.h>                // Para el getch()
#include <string.h>      			 // Trabajo con cadenas de caracteres
#define ESC 0x1b        			 // Tecla Escape :)
#define TEXTO 21  		          // Dimensiones maximas del texto
#define NUMERO 51                 // Numero de paises y sus capitales

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////
/* Procedimiento que lea un array de caracteres										   */
	void lee(char matriz[TEXTO])
	{
	printf("Introduzca el pais o la capital y presione ENTER: ");
	gets(matriz);
	}
						/* Fin del Procedimiento*/

/* Procedimiento que compara las cadenas. Recorreremos todo el array con los
paises y capitales, comparandolo con la cadena dada. Haciendo uso del comparador
srtcmp, daremos como resultado bueno el cero.
Si al finalizar la comparacion resultase que no existe coincidencia, dariamos
un mensaje de error al usuario.																*/
	void compara(char listado[NUMERO][2][TEXTO],char buscamos[TEXTO])
	{
	int aux,corredor,salir=0;
// Pasamos la cadena a minusculas:
	strlwr(buscamos);

	for (corredor=0;corredor<NUMERO && salir==0;corredor++)
		{
		aux=strcmp(listado[corredor][0],buscamos);     // Comparamos las cadenas
		if (aux==0)                                    // Si pais es igual
			{                                           // salir sera 1
			salir=1;                                    // y escribimos la capital
			printf("Su capital es ");puts(listado[corredor][1]);
			}

		else                                           // SI NO:
			{
			aux=strcmp(listado[corredor][1],buscamos);  // Comparamos las cadenas
			if (aux==0)                                 // Si la capi es igual
				{                                        // salir sera 1
				salir=1;                                // y escribimos el pais
				printf("Es la capital de ");puts(listado[corredor][0]);
				}
			}
		}
	if (salir==0)
		printf("\n\n\nERROR 00000001: No Disponible En La Base De Datos ;)");
	}
						/* Fin del Procedimiento*/


////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
// Declaramos las variables:
	char pc[NUMERO][2][TEXTO]={{"belgica","bruselas"},{"españa","madrid"},
	{"portugal","lisboa"},{"francia","paris"},{"italia","roma"},
	{"alemania","berlin"},{"rusia","moscu"},{"reino unido","londres"},
	{"albania","tirana"}, {"andorra","andorra la vella"},{"armenia","erevan"},
	{"austria","viena"},{"azerbaiyan","baku"},{"bielorrusia","minsk"},
	{"bosnia-herzegovina","sarajevo"},{"bulgaria","sofia"},{"chipre","nicosia"},
	{"croacia","zagreb"},{"dinamarca","copenhague"},{"eslovaquia","bratislava"},
	{"eslovenia","liubliana"},{"estonia","tallin"},{"finlandia","helsinki"},
	{"georgia","tiflis"},{"grecia","atenas"},{"holanda","amsterdam"},
	{"hungría","budapest"},{"irlanda","dublin"},{"islandia","reykjavik"},
	{"kazajstan","almaty"},{"kirguizistan","bishkek"},{"letonia","riga"},
	{"liechtenstein","vaduz"},{"lituania","vilna"},{"luxemburgo","luxemburgo"},
	{"malta","la valletta"},{"moldova","chisinau"},{"monaco","monaco"},
	{"noruega","oslo"},{"polonia","varsovia"},{"republica checa","praga"},
	{"rumania","bucarest"},{"san marino","san marino"},{"santa sede","vaticano"},
	{"suecia","estocolmo"},{"suiza","berna"},{"tayikistan","dushanbe"},
	{"turkmenistan","ashgabat"},{"ucrania","kiev"},{"uzbekistan","tashkent"},
	{"yugoslavia","belgrado"}};
	char car,busca[TEXTO];
// Metemos todo el programa en un bucle DO-WHILE hasta presionar ESC.
	do{
// Borramos la pantalla:


	lee(busca);
	compara(pc,busca);

// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir o cualquier otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
	}


/*
TODOS LOS PAISES Y SUS CAPITALES EN EUROPA:

http://www.culturageneral.net/capitalesmonedas/
*/
