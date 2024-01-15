#include <stdio.h>     	// Cabecera de Entrada Y Salida
#include <conio.h>      // Para el getch()
#include <string.h>     // Trabajo con cadenas de caracteres
#include <stdlib.h>     // Lo uso para la reserva dinamica de memoria
#define MAX 5
#define LON 20       

////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

typedef struct socio
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
    system("CLS");
    printf("\nSocio %d\n=========",n+1);
    printf("\nDeme el Nombre del socio: ");
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
    do{
    printf("\nDesea introducir otro? (1=Si/2=No) --> ");
        otro=getche();
        if (otro!='1' && otro!='2')
           printf("\nOpcion no valida!");
    }while(otro!='1' && otro!='2');
    n++;
   }
while (otro=='1' && n<MAX);
if (n==MAX)
   {
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

struct socio *buscar_socio(struct socio soc[MAX],int num,char *apellidos)
{
int n,salir=0,comparacion;
struct socio * buscado=NULL;     // buscado es puntero a socio
if (num!=0)                      // Controlamos que existan Socios
{
for (n=0;n<num && salir==0;n++)  // Recorremos los socios mientras existan o 
    {                            // no lo hayamos encontrado
    comparacion=strcmp(apellidos,soc[n].apellidos);
    if (comparacion==0)          // Si son iguales                 
       {
       buscado=&soc[n];          // apuntamos a soc de n
       salir=1;                  // y salimos
       }
    }
}

else {
     printf("\n\nHa de introducir Socios antes de buscarlos\n\n");
     system("PAUSE");
     }
return buscado;
}

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////

	int main()
	{
	char car,apellido[LON];
	int n=0;
	struct socio soc[MAX],*buscado=NULL;
// Bucle principal que se repite mientras no se pulse ESCAPE
	do
		{
        system("CLS");
        printf("MENU PRINCIPAL\n==== =========\n");
        printf("\t1.- Rellenar\n\t2.- Visualizar\n\t3.- Buscar\n\t4.- Salir");
        
		car=getch();
switch(car)
		 {
		 case '1':              // Introducir socios
			 n=rellenar_socio(soc);
		 break;

		 case '2':              // Ver socios
			 visualizar_socios(soc,n);
		 break;
		 
		 case '3':             // Búsqueda       
             system("CLS");
             printf("Deme el apellido del socio a buscar: ");
             gets(apellido);
             buscado=buscar_socio(soc,n,apellido);
             if (buscado!=NULL)
                {
                // Si lo hemos encopntrado, lo imprimimos, teniendo especial cuidado
                // con la notación, ya que substituimos el . por ->
                printf("\n\nSOCIO \n=====\n");
                printf("Nombre:\t\t");
                puts(buscado->nombre);
                printf("Apellidos:\t");puts(buscado->apellidos);
                printf("Telefono:\t");puts(buscado->telefono);
                printf("Edad:\t\t%d",buscado->edad);
                printf("\nPeso:\t\t%f\n\n",buscado->peso);
                }
             else        // si no lo ha encontrado, informamos
                printf("NO SE HAN ENCONTRADO COINCIDENCIAS\n\n"); 
             system("PAUSE");
          }       
        
       if (car!='1' && car!='2' && car!='3' && car!='4')
           {
           printf("\n\n\n\nHa pulsado una opcion no valida\n\n");
           system("PAUSE");
           }
		}
	while(car!='4');
	return 1;
	}
