#include <stdio.h>     	// Cabecera de Entrada Y Salida
#include <conio.h>      // Para el getch()
#include <string.h>     // Trabajo con cadenas de caracteres
#include <stdlib.h>     // Lo uso para la reserva dinamica de memoria
#define MAX 5
#define LON 20       

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

typedef struct socio                        // estructura socio
			{
				char nombre[LON];
				char apellidos[LON];
				char telefono[LON];
				int edad;
				float peso;
};

// funcion de alta de socios
int rellenar_socio(struct socio soc[MAX])
{
int n=0,otro;
do{
    system("CLS");                             // borramos la pantalla
    printf("\nSocio %d\n=========",n+1);       // y pedimos todos los
    printf("\nDeme el Nombre del socio: ");    // datos del socio
    gets(soc[n].nombre);
    printf("Deme los apellidos del socio: ");
    gets(soc[n].apellidos);
    printf("Deme el telefono del socio: ");
    gets(soc[n].telefono);
    printf("Deme la edad del socio: ");
    scanf("%d",&(soc[n].edad));
    fflush(stdin);
    printf("Deme el peso del socio: ");
    scanf("%f",&(soc[n].peso));
    fflush(stdin);
    printf("\n\n\nEl Socio ha sido guardado con exito.");
    
    do{                                                    //Bucle validado entre 
    printf("\nDesea introducir otro? (1=Si/2=No) --> ");   //1 y 2, que pide si se
        otro=getche();                                     //quiere meter otro
        if (otro!='1' && otro!='2')                        //socio o no.
           printf("\nOpcion no valida!");                  //Si es distinto
    }while(otro!='1' && otro!='2');                        //se indica al user
    n++;
   }                                // se siguen pidiendo socios mientras que el
while (otro=='1' && n<MAX);         // usuario quiera y esté dentro del límite
if (n==MAX)                         // si emos llegado al limite
   {                                // el sistema nos informará
   printf("\n\n\nSe ha alcanzado el limite establecido.\n\n");
   system("PAUSE");
   }
return n;
}

void visualizar_socios(struct socio soc[MAX],int n)
{
int i;
if (n!=0)  // Controlamos el poder escribir algun socio
{
for (i=0;i<n;i++)
    {
    system("CLS");
    printf("SOCIO %d\n===== ==\n\n",i+1);
    printf("Nombre:\t\t");puts(soc[i].nombre);
    printf("Apellidos:\t");    puts(soc[i].apellidos);
    printf("Telefono:\t");    puts(soc[i].telefono);
    printf("Edad:\t\t%d",soc[i].edad);
    printf("\nPeso:\t\t%f\n\n",soc[i].peso);
    system("PAUSE");
    }
}
else {
     printf("\n\nNo hay ningun socio a mostrar.\n\n");
     system("PAUSE");
     }
}



////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////

	int main()
	{
	char car;
	int n=0;
	struct socio soc[MAX];
// Bucle principal que se repite mientras no se pulse ESCAPE
	do
		{
        system("CLS");
        printf("MENU PRINCIPAL\n==== =========\n");
        printf("\t1.- Rellenar Socios\n\t2.- Visualizar Socios\n\t3.- Salir");
        
		car=getch();
switch(car)
		 {
		 case '1':              // Introducir socios
			 n=rellenar_socio(soc);
		 break;

		 case '2':              // Ver socios
			 visualizar_socios(soc,n);
          }       
        
       if (car!='1' && car!='2' && car!='3')
           {
           printf("\n\n\n\nHa pulsado una opcion no valida\n\n");
           system("PAUSE");
           }
		}
	while(car!='3');
	return 1;
	}
