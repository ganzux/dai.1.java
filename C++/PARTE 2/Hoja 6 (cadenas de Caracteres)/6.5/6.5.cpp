// 5. Sobre el supuesto del ejercicio anterior, hacer un programa que mientras
// se desee, permita consultar el número de alumnos matriculados en una
// asignatura concreta de un grupo concreto.
//
// El programa  preguntará por teclado el nombre del grupo y el nombre de la
// asignatura y mostrará la información solicitada.
// Los nombres de los grupos y las asignaturas son:
// ESOA, ESOB, ESOC, .....  , ESOH
// MATEMÁTICAS, INGÉS, LENGUA, CIENCIAS, TECNOLOGÍA

#include <stdio.h>      // Cabecera de Entrada Y Salida
#include <conio.h>      // Para el getch()
#include <string.h>     // Trabajo con cadenas de caracteres
#define ESC 0x1b        // Tecla Escape :)
#define  MAX 20         // Maximos alumnos matriculados
#define GRUPOS 8        // Numero de grupos en el centro escolar
#define ASIGNATURAS 5   // Numero de asignaturas del centro

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

// Funcion que lee el numero de alumnos matriculados en cada asignatura; valido
// los datos entre 0 y MAX y recorro el array
	void leealumnos(int matriz[GRUPOS][ASIGNATURAS],char materias[ASIGNATURAS][12])
	{
    int salida,corre1,corre2;
    for (corre1=0;corre1<GRUPOS;corre1++)
    	{
        for (corre2=0;corre2<ASIGNATURAS;corre2++)
        	{
            do
    		  {
        	  salida=1;
        	  printf("Numero de alumnos de la clase ESO%c y asignatura %s: ",corre1+65,materias[corre2]);
        	  scanf("%d",&matriz[corre1][corre2]);
              fflush(stdin);
        	  if (matriz[corre1][corre2]<0 || matriz[corre1][corre2]>MAX)
        		{
            	salida=0;
            	printf("\aE\aRROR: Han de ser como minimo 0 y como maximo %d\n\n",MAX);
            	}
        	  }
    		  while(salida==0);
            }
            printf("\n");
        }
    }
// Fin del procedimiento leealumnos


// Funcion que escribe un array de ASIGNATURAS posiciones:
	void escribe(int matriz[ASIGNATURAS])
    {
    int corre1;
    for (corre1=0;corre1<ASIGNATURAS;corre1++)
              printf("Asignatura %d: %d alumnos\n",corre1+1,matriz[corre1]);
    }
// Fin del procedimiento acero

// Procedimiento que borra la pantalla implementado ante la imposibilidad
// de usar clrscr();
   void borramos()
   {
   int n;
   for (n=0;n<40;n++)
       printf("\n");
   }
// Fin del borrado de pantalla

// Procedimiento que presenta las opciones por pantalla:
	void presentaopciones()
    	{
        printf("Nombres de los grupos: ESOA, ESOB, ESOC ... ESOH");
        printf("\nNombres de las asignaturas: MATEMATICAS, INGLES, LENGUA, CIENCIAS y TECNOLOGIA");
        }
// Fin del procedimiento que presenta grupòs y asignaturas :)

// Funcion que lee el grupo y devuelve su posicion numerica
   int leegrupo(char clases[GRUPOS][5])
   {
   char grupo[5];
   int n=0,testigo=0;
      printf("\n\nGRUPO: ");
      gets(grupo);
      strupr(grupo);
      for (n=0;n<GRUPOS && testigo!=1;n++)
       {
       if (strcmp(grupo,clases[n])==0)
          testigo=1;
       else testigo=-1;
       }
       n--;
       }
   if (testigo==1)
      return n;
   else return -1;
   }
// Fin de buscar el grupo :)

// Funcion que lee asignatura y devuelve su posicion numerica
   int leeasignatura(char materias[ASIGNATURAS][12])
   {
   char materia[12];
   int n=0,testigo=0;
   printf("\n\nMATERIA: ");
   gets(materia);
   strupr(materia);
   for (n=0;n<ASIGNATURAS && testigo!=1;n++)
       {
       if (strcmp(materia,materias[n])==0)
          testigo=1;
       else testigo=-1;
       }
   n--;
   if (testigo==1)
      return n;
   else return -1;
   }
// Fin de buscar la asignatura :)

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	int main()
	{
// Declaramos las variables:
	char car;
    int matriz[GRUPOS][ASIGNATURAS],asig,grup;
	char clases[GRUPOS][5]={"ESOA","ESOB","ESOC","ESOD","ESOE","ESOF","ESOG","ESOH"};
    char materias[ASIGNATURAS][12]={"MATEMATICAS","INGLES","CIENCIAS","LENGUA","TECNOLOGIA"};
    leealumnos(matriz,materias);
    do{
        presentaopciones();
        grup=leegrupo(clases);
        asig=leeasignatura(materias);
        if (grup!=-1 && asig!=-1)
           printf("\n\nNUMERO DE ALUMNOS: %d",matriz[grup][asig]);
        else printf("\n\nASIGNATURA O GRUPO NO VALIDOS");
// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir o cualquier otra tecla para continuar.");
		car=getch();
	borramos();
	}
	while(car!=ESC);
	return 69;
    }
