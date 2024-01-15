// 7.6 Se tiene una matriz bidimensional de números positivos de N filas 
// por M columnas que va a almacenar una imagen digital. 
// Se desea realizar sobre ella un proceso de transformación para eliminar 
// posibles ruidos eléctricos en su digitalización. 
// Dicho proceso consiste en alterar cada elemento de la matriz de forma 
// que su valor sea igual a la media de los valores de los elementos que 
// le rodean en la matriz, incluido él mismo. 
// Los valores que se van calculando se almacenan en otra matriz.

#include <stdio.h>     			  // Cabecera de Entrada Y Salida
#include <conio.h>                // Para el getch()
#include <string.h>      		  // Trabajo con cadenas de caracteres
#define ESC 0x1b        		  // Tecla Escape :)
#define M 5                       // M columnas
#define N 5                       // y N filas

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

// Funcion que asigna datos a una matriz de dimensiones MxN
   void datos(int matrizoriginal[M][N])
   {
   matrizoriginal[0][0]=6;
   matrizoriginal[0][1]=9;matrizoriginal[0][2]=4;
   matrizoriginal[0][3]=8;matrizoriginal[0][4]=2;
   
   matrizoriginal[1][0]=6;
   matrizoriginal[1][1]=5;matrizoriginal[1][2]=0;
   matrizoriginal[1][3]=8;matrizoriginal[1][4]=1;
   
   matrizoriginal[2][0]=6;
   matrizoriginal[2][1]=4;matrizoriginal[2][2]=2;
   matrizoriginal[2][3]=5;matrizoriginal[2][4]=6;
   
   matrizoriginal[3][0]=10;
   matrizoriginal[3][1]=1;matrizoriginal[3][2]=2;
   matrizoriginal[3][3]=5;matrizoriginal[3][4]=9;
   
   matrizoriginal[4][0]=0;
   matrizoriginal[4][1]=8;matrizoriginal[4][2]=10;
   matrizoriginal[4][3]=5;matrizoriginal[4][4]=0;
   }
// Fin de la Función

// Calcula la suma de los numeros alrededor:
   int calcula(int matrizoriginal[M][N],int n1, int n2)
   {
   int suma=0,cont=0,n3,n4;
   
   for(n3=n1-1;n3<=n1+1;n3++)
       for(n4=n2-1;n4<=n2+1;n4++)
          if (n3>=0 && n4>=0 && n3<M && n4<N)
             {
             suma=suma+matrizoriginal[n3][n4];
             cont++;
             }
             
   suma=suma/cont;                       
   return suma;        
   }
// fin

// Funcion que cambia todos los elementos de una matriz
   void cambio(int matrizoriginal[M][N], int matriznueva[M][N])
   {
   int n1,n2,valor;
   for (n1=0;n1<M;n1++)
       for (n2=0;n2<N;n2++)
           {
// para cada elemento de la matriz, realizamos la operacion:
           valor=calcula(matrizoriginal,n1,n2);
           matriznueva[n1][n2]=valor;
           }
           
   }
// Fin de la Función de cambio

// Procedimiento que escribe una matriz por pantalla :?
   void escribe(int matriz[M][N])
   {
   int n1,n2;
   for (n1=0;n1<M;n1++)
       {
       for (n2=0;n2<N;n2++)
           printf("%d\t",matriz[n1][n2]);
       printf("\n");
       }
   }
// Fin del procedimiento de escritura.

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
	char car;
	int matrizoriginal[M][N];
	int matriznueva[M][N];
// Bucle principal que se repite mientras no se pulse ESCAPE
	do
		{
        datos(matrizoriginal);
		  printf("MATRIZ ORIGINAL:\n\n");
		  escribe(matrizoriginal);
		  cambio(matrizoriginal,matriznueva);
		  printf("\n\n\nMATRIZ CON CAMBIOS:\n");
		  escribe(matriznueva);
// Captamos la tecla para salir o volver al principio del programa:
		printf("\n\n\nPresion ESC para salir u otra tecla para continuar.");
			car=getch();
// Borramos la pantalla++
		clrscr();
		}
	while(car!=ESC);
// Dibujo del final:

printf("     :''._..---.._.'';                                    \n");
printf("     `.             .'                                    \n");
printf("     .'    ^   ^    `.                                    \n");
printf("    :      a   a      :                 __....._          \n");
printf("    :     _.-0-._     :---'''''-....--''        '.        \n");
printf("     :  .'   :   `.  :                          `,`.      \n");
printf("      `.: '--'--' :.'                             ; ;     \n");
printf("       : `._`-'_.'                                ;.'     \n");
printf("       `.   '''                                   ;       \n");
printf("        `.               '                        ;       \n");
printf("         `.     `        :           `            ;       \n");
printf("          .`.    ;       ;           :           ;        \n");
printf("        .'    `-.'      ;            :          ;`.       \n");
printf("    __.'      .'      .'              :        ;   `.     \n");
printf("  .'      __.'      .'`--..__      _._.'      ;      ;    \n");
printf("  `......'        .'         `''''`.'        ;......-'    \n");
printf("        `.......-'                 `........'             \n");
printf("\n              By   WwW . AlVaRiTo . NeT");





	return 69;
	}
