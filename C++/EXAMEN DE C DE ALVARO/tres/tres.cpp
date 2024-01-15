#include <stdio.h>     				
#include <conio.h>             
#include <string.h>      		
#define ESC 0x1b 
#define MAX 200       			

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

// Funcion que lee una cadena de carateres:
void lee(char cadena[MAX])
{
printf("\nIntroduce la cadena y presiona ENTER:\n\t");
fflush(stdin);
     fgets(cadena,MAX,stdin);
}
// Fin de la funcion de leer.

// Funcion que realiza el enunciado del ejercicio:
void insertador(char cadena1[MAX],char cadena2[MAX],int n)
{
int i,longitud,cont=0;
char temporal[MAX];
longitud=strlen(cadena1);

// Borramos la cadena temporal:
for (i=0;i<MAX;i++)
    temporal[i]='\0';

// Copiamos en la cadena temporal a pàrtir del caracter n de la cadena1
for (i=n;i<longitud;i++)
    {
    temporal[cont]=cadena1[i];
    cont++;
    }

// Borramos los caracteres a partir de n-1 de cadena1
for (i=n-1;i<MAX;i++)
    cadena1[i]='\0';

// Concatenamos la cadena2 en cadena1:
    strcat(cadena1,cadena2);

// Volvemos a limpiar los residuos de cadena1 (el último caracter es intro)
  cadena1[strlen(cadena1)-1]='\0';

// Y concatenamos la cadena temporal en la cadena1:
    strcat(cadena1,temporal); 
}
// fin del insertador

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
// Declaramos las variables:
	char car,cadena1[MAX],cadena2[MAX];
	int pos;
// Metemos todo el programa en un bucle DO-WHILE hasta presionar ESC.
	do{
    lee(cadena1);
    lee(cadena2);
    printf("Por favor, deme la posicion desde la que quiere insertar: ");
         scanf("%d",&pos);
    insertador(cadena1,cadena2,pos);
    printf("\nLa cadena resultante sera: \n\t%s",cadena1);
// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir u otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
	}

