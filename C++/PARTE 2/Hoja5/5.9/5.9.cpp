// 9. Programa que permita introducir datos en un vector y mantenga
//    el vector siempre ordenado.

////////////////////////////////////////////////////////////////////////////////
/////////////////////     CABECERAS Y DEFINICIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ESC 0x1b
#define  MAX 5
////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

// Procedimiento que permite ordenar un array mediante seleccion:
	void ordena(int matriz[MAX])
	{
	int aux,aux2,cambio;
    for (aux=0;aux<MAX-1;aux++)                  // Bucle ppal: 0..MAX-1
    	{
        for (aux2=aux+1;aux2<MAX;aux2++)         // Bucle 2: aux+1..MAX
        	{
            if (matriz[aux]>matriz[aux2])        // Si es mayor, tendremos
                   {                             // que hacer el cambio.
                   cambio=matriz[aux];
                   matriz[aux]=matriz[aux2];
                   matriz[aux2]=cambio;
                   }
            }
        }
    }
// The End

// Procedimiento que lea un array numerico
	void lee(int matriz[MAX])
	{
    int n;
	printf("Introduzca la cadena y presione ENTER: ");
	for(n=0;n<MAX;n++)                                  // Bucle ppal que lee
    	{                                               // la matriz
        printf("Numero en la posicion %d: ",n+1);
        scanf("%d",&matriz[n]);
        }
    ordena(matriz);
	}
// Fin del Procedimiento

// Procedimiento que presenta un array numerico por pantalla
	void presenta(int matriz[MAX])
	{
    int n;
	for(n=0;n<MAX;n++)                                  // Bucle ppal. que
        printf("%d, ",matriz[n]);                       // presenta la matriz
	}                                                   // por pantalla
// Fin del Procedimiento

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
// Declaramos las variables:
	char car;
    int matriz[MAX];
// Metemos todo el programa en un bucle DO-WHILE hasta presionar ESC.
	do{
// Borramos la pantalla:
	clrscr();
// Leemos la cadena:
    lee(matriz);
    presenta(matriz);
// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir o cualquier otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
	}





