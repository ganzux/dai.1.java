// 10. Se introduce una cadena de caracteres de máximo 15 caracteres.
//     Contar cuantas vocales tiene y mostrar un mensaje con el resultado
//     (posibilidad mayúsculas y minúsculas).

#include <stdio.h>     				 // Cabecera de Entrada Y Salida
#include <conio.h>                // Para el getch()
#include <string.h>      			 // Trabajo con cadenas de caracteres
#define ESC 0x1b        			 // Tecla Escape :)
#define  MAX 20   			       // Dimensiones maximas

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////


// Procedimiento que borra Un Array de MAX caracteres:
	void borra (char cadena[MAX])
	{
	int aux;
	for (aux=0;aux<MAX;aux++)
		cadena[aux]='\0';
	}
// Fin del Procedimiento lee

// Procedimiento que lee Un Array de MAX caracteres:
	void lee (char cadena[MAX])
	{
	printf("Introduce una cadena (solo se computaran %d caracteres):\n\t",MAX);
	gets(cadena);
	}
// Fin del Procedimiento lee

// Funcion que cuenta las vocales de una cadena dada y las devuelve en un return
// Para no "tocar la cadena", en vez de pasarlo todo a mayusculas o minusculas,
// ponemos en el IF las cinco vocales en mayusculas y minusculas:
	int cuentavocales (char cadena[MAX])
	{
	int vocales=0,aux;
	for (aux=0;aux<MAX;aux++)
		if (cadena[aux]=='a' || cadena[aux]=='e' || cadena[aux]=='i' || cadena[aux]=='o' || cadena[aux]=='u' || cadena[aux]=='A' || cadena[aux]=='E' || cadena[aux]=='I' || cadena[aux]=='O' || cadena[aux]=='U')
			vocales++;
	return vocales;
	}
// Fin de la Funcion cuentavocales

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
// Declaramos las variables:
	char car,cadena[MAX];

// Metemos todo el programa en un bucle DO-WHILE hasta presionar ESC.
	do{
// Borramos la pantalla:
	clrscr();
// Borramos el contenodo del ArraY:
   borra(cadena);
// Leemos la cadena:
	lee(cadena);
// Calculamos las vocales y visualizamos su suma:
	printf("\n\n\n\n\tEl numero de vocales que contiene la cadena son %d",cuentavocales(cadena));
// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir u otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
	}

