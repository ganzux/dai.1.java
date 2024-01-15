/*3. Programa que lee de teclado el nombre y el precio de 10 frutas y que
permita consultar el precio de las frutas mientras se desee.
Si la fruta sobre la que se desea consultar el precio no está,
se indicará mediante un mensaje. (Si se desea, el precio y el nombre de las 10
frutas puede inicializarse en la declaración).                                */

#include <stdio.h>     		  // Cabecera de Entrada Y Salida
#include <conio.h>            // Para el getch()
#include <string.h>      	  // Trabajo con cadenas de caracteres
#define ESC 0x1b        	  // Tecla Escape :)
#define  X 10   		      // Dimensiones maximas

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

/* Procedimiento que lea un array de 10 frutas y sus precios				  */
	void lee(char matriz[X][X], int precios[X])
	{
        int aux;
        for (aux=0;aux<X;aux++)
                {
                printf("\nDeme la fruta %d: ",aux+1);
					gets(matriz[aux]);
                printf("Deme el precio de %s:",matriz[aux]);
                	scanf("%d",&precios[aux]);
                fflush(stdin);
                }
	}
/* Fin del Procedimiento*/

/* Procedimiento encargado de comparar un array de una fruta (busca) con un
conjunto de arrays (matriz). Si lo encuentra muestra su porecio y sale.*/
        void compara(char busca[X], char matriz[X][X], int precios[X])
        {
        int aux,salir=0;
        for (aux=0;aux<X && salir==0;aux++)
                {
                if (strcmp(busca,matriz[aux])==0)
                        {
                        salir=1;
                        printf("\n\n\nEl precio de la fruta es %d",precios[aux]);
                        }
                }
        if (salir==0)
                printf("\n\n\n\s\s\sEsa fruta no esta en la BDD.");
        }

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
// Declaramos las variables:
	char frutas[X][X],buscamos[X],car;
        int precios[X];
    lee(frutas,precios);
// Metemos todo el programa en un bucle DO-WHILE hasta presionar ESC.
	do{
// Borramos la pantalla:
	clrscr();
    printf("\n\nDame la fruta a buscar: ");
    gets(buscamos);
    compara(buscamos,frutas,precios);
// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir o cualquier otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
	}
