#include <stdio.h>     	// Cabecera de Entrada Y Salida
#include <conio.h>      // Para el getch()
#include <string.h>     // Trabajo con cadenas de caracteres
#include <stdlib.h>     // Lo uso para la reserva dinamica de memoria
#define ESC 0x1b        // Tecla Escape :)
#define MAX 500       

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

// Funcion que hace lo que dicta el ejercicio:
char * Duplicar (char palabra[MAX])
{
int longitud,i,j=0;
char *vector=NULL;                 // vector es un puntero a un char
longitud=strlen(palabra);          // almacenamos la longitud

if (longitud>0)                    // si la longitud es mayor de cero
  {
  vector = (char *) malloc ((longitud*2)*sizeof (char));
                                   // reservamos memoria             
  for (i=0;i<longitud;i++,j++)     // y vamos copiando la cadena
    {
    vector[j]=palabra[i];
    j++;
    vector[j]=palabra[i];
    }
  vector[j]='\0';
  }

if (vector == NULL)                // si vector sigue apuntando a NULL
		printf ("Operacion incorrecta");  
return vector;                     // retornamos el puntero al final       
}

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////

	int main()
	{
	char car,palabraoriginal[MAX],*vector=NULL;
// Bucle principal que se repite mientras no se pulse ESCAPE
	do
		{
         printf("Deme la palabra\n");
         gets(palabraoriginal);
         fflush(stdin);
         vector=Duplicar(palabraoriginal);
         if (vector!=NULL)
             {
             puts(vector);
             free(vector); 
             }
// Captamos la tecla para salir o volver al principio del programa:
		printf("\n\n\nPresion ESC para salir u otra tecla para continuar.");
			car=getch();
        system("CLS");
		}
	while(car!=ESC);
	return 1;
	}
