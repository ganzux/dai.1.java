#include <stdio.h>     				
#include <conio.h>             
#include <string.h>      		
#define ESC 0x1b        			

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

// Funcion a la que pasamos dos numeros: el primero es el premiado y el segundo
// es el que queremos validar. Si es premiado -si coincide la primera o ultima
// cifra con la del otro- devuelve 1. Si no lo es, devolvrerá cero.

unsigned int Es_premiado(unsigned int primero,unsigned int segundo)
{
if (primero%10 == segundo%10)
   return 1;
else if (primero/10000 == segundo/10000)
   return 1;
else
   return 0; 
}

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
// Declaramos las variables:
	char car;
	int n1,n2,boolean;      // n1 y n2 para almacenar los numeros y boolean
                            // para almacenar si es o no premiado (I/O,1/0...)
// Metemos todo el programa en un bucle DO-WHILE hasta presionar ESC.
	do{
// Pedimos el primer número
       printf("\n\nDeme su numero: ");
                    scanf("%d",&n1);
// Pedimos el segundo número
       printf("Deme el numero premiado: ");
                    scanf("%d",&n2);
// Llamamos a la funcion y lo almacenamos en boolean
       boolean=Es_premiado(n1,n2);
// Si boolean es uno, es que es premiado
       if (boolean==1)
          printf("\n\nEHHORABUENA, tu numero ha sido premiado.\nPuedes recoger el premio en cualquiera de nuestras oficinas.");
// En caso contrario, no :(
       else
          printf("\n\nMALA SUERTE :(\nPero no te desanimes y sigue jugando con nosotros :)"); 
// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir u otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
	}

