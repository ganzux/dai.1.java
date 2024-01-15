// 4. Programa que lee de teclado el nº de alumnos que hay matriculados en cada
// grupo  de la ESO de un centro docente, por cada asignatura.
// En el centro existen 8 grupos, cada uno con 5 asignaturas.
// Una vez leídos y guardados los datos en memoria, calcular y visualizar el
// total de alumnos matriculados por cada asignatura.

#include <stdio.h>      // Cabecera de Entrada Y Salida
#include <conio.h>      // Para el getch()
#include <string.h>     // Trabajo con cadenas de caracteres
#define ESC 0x1b        // Tecla Escape :)
#define  MAX 20         // Maximos alumnos matriculados
#define GRUPOS 2        // Numero de grupos en el centro escolar
#define ASIGNATURAS 3   // Numero de asignaturas del centro

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

// Funcion que lee el numero de alumnos matriculados en cada asignatura; valido
// los datos entre 0 y MAX y recorro el array
	void leealumnos(int matriz[GRUPOS][ASIGNATURAS])
    {
    int salida,corre1,corre2;
    for (corre1=0;corre1<GRUPOS;corre1++)
    	{
        for (corre2=0;corre2<ASIGNATURAS;corre2++)
        	{
            do
    		  {
        	  salida=1;
        	  printf("Numero de alumnos de la clase %d y asignatura %d: ",corre1+1,corre2+1);
        	  scanf("%d",&matriz[corre1][corre2]);
        	  if (matriz[corre1][corre2]<0 || matriz[corre1][corre2]>MAX)
        		{
            	salida=0;
            	printf("\aE\aRROR: Han de ser mas de 0 y menos de %d\n\n",MAX);
            	}
        	  }
    		  while(salida==0);
            }
        }
    }
// Fin del procedimiento leealumnos

// Funcion que pone a cero un array de ASIGNATURAS posiciones:
	void acero(int matriz[ASIGNATURAS])
    {
    int corre1;
    for (corre1=0;corre1<ASIGNATURAS;corre1++)
              matriz[corre1]=0;
    }
// Fin del procedimiento acero

// Funcion que escribe un array de ASIGNATURAS posiciones:
	void escribe(int matriz[ASIGNATURAS])
    {
    int corre1;
    for (corre1=0;corre1<ASIGNATURAS;corre1++)
              printf("Asignatura %d: %d alumnos\n",corre1+1,matriz[corre1]);
    }
// Fin del procedimiento acero

// Funcion que calcula y visualiza el nuimero total de alumnos matriuculados
// por cada asignatura
	void calculo(int matriz[GRUPOS][ASIGNATURAS])
    {
    int corre1,corre2,totales[ASIGNATURAS];
    acero(totales);
    for (corre1=0;corre1<GRUPOS;corre1++)
        for (corre2=0;corre2<ASIGNATURAS;corre2++)
             totales[corre2]=totales[corre2]+matriz[corre1][corre2];
    escribe(totales);
    }
// Fin del procedimiento calculo


////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
// Declaramos las variables:
	char car;
	int matriz[GRUPOS][ASIGNATURAS];
    do{
    leealumnos(matriz);
    calculo(matriz);
 // Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir o cualquier otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
    }


