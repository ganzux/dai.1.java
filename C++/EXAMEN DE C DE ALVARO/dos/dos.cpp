#include <stdio.h>     				
#include <conio.h>             
#include <string.h>      		
#define ESC 0x1b        			

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

// funcion que calcula la suma entre dos numeros siendo a menor que b
int suma (int b)
{
// i para recorrer todos los número y acumulador para acumular
int i,acumulador=0;
// bucle desde a hasta b, incluyéndolo:
for (i=1;i<=b;i++)
// sumamos a acumulador lo que va valiendo i
    acumulador+=i;
// y devolvemos acumulador
return acumulador;   
}

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
// Declaramos las variables:
	char car;
	int n,i,i2,suma1,suma2,hecho=0;
// Metemos todo el programa en un bucle DO-WHILE hasta presionar ESC.
	do{
       printf("\n\nDame el limite para calcular los centros: ");
          scanf("%d",&n);

// Tenemos que recorrer desde 1 hasta n
    for (i=1;i<=n;i++)
        {
// almacenamos en suma1 la suma desde 1 hasta i-1
        suma1=suma(i-1);
// damos a suma2 0 para podernos meter por lo menos una vez en en bucle
        suma2=0;
// hecho se pone a cero
        hecho=0;
// ahora, mientras suma2 sea menor o igual que suma1 y no se haya hecho , calcularemos suma2
            for(i2=i+1;suma2<suma1 && hecho==0;i2++)
                 {
// suma2 será la suma desde i+1 hasta i2
                 suma2+=i2;
// si suma2=suma1, el numero es centro, luego imprimimos y salimos.
                 if(suma1==suma2)
                     {
                     printf("El numero %d es un centro.\n",i);
// y ponemos hecho a 1, por lo que saldrá del bucle segundo5
                     hecho=1;
                     }
                 }                        
        }
    printf("\nNo hay mas centros numericos que calcular");

          
// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir u otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
	}

