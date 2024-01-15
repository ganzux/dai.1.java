/* 16.  Hacer un programa que diga cuantas veces aparece cada uno de los
        elementos de un array. El programa ha de controlar que un número
        no se analice dos veces; por ejemplo, si hay un 3 en la segunda
        posición y otro en la sexta, el programa ha de decir que el 3 aparece
        dos veces, pero sólo cuando encuentra el que hay en la tercera posición,
        cuando encuentre el que hay a la sexta, no lo tiene que evaluar.
        Sugerencia, utilizar un array auxiliar para ir
        guardando los elementos analizados.                             */

#include <stdio.h>        // Entrada salida
#define MxN 4             // MxN seran las dimensiones del ArraY

void main()
{
int matriz[MxN];            // Declaramos un Array Unidimensional
int contador[MxN][2];       // Para Elementos[0] y Contador de Elementos[1]
int recorrido,recorrido2;   // Variables para recorrer ArraYs
int testigo=0;              // Testigo para no repetir Valores. Booleano ;)

printf("\tIntroduzca los %d elementos \n\n",MxN);

/* El bucle escrito a contunuacion recorre todo el ArraY MxN, pidiendo el
elemento de la posicion [1..MxN]                             */
for (recorrido=0;recorrido<MxN;recorrido++)
	  {
			 printf("Escriba el elemento %d: ",recorrido+1);
			 scanf("%d",&matriz[recorrido]);
	  }

// Ponemos El Contador "a Cero":
for (recorrido=0;recorrido<MxN;recorrido++)
	  {
			 contador[recorrido][0]=0;
			 contador[recorrido][1]=0;
	  }

// El siguiente bucle recorre el ArraY, y guarda los elementos en otra.
// El primer bucle recorre el ArraY
for (recorrido=0;recorrido<MxN;recorrido++)
	  {
// El segundo bucle recorre el ArraY auxiliar, comprobando que esta vacio (0),
// o que es igual al numero del primer bucle.
// Se añade una variable testigo para que, si se cuenta la variable, salte al
// bucle principal.
			 for (recorrido2=0;recorrido2<MxN;recorrido2++)
					 {
					 if ((contador[recorrido2][0]==0 || contador[recorrido2][0]==matriz[recorrido]) && testigo==0)
								{
								contador[recorrido2][0]=matriz[recorrido];
								if(matriz[recorrido]==contador[recorrido2][0])
										contador[recorrido2][1]++;
								testigo=1;
								}
					 }
			 testigo=0;
	  }

for (recorrido=0;recorrido<MxN;recorrido++)
if (contador[recorrido][1]!=0)
printf("Elemento %d: %d veces\n",contador[recorrido][0],contador[recorrido][1]);
}
