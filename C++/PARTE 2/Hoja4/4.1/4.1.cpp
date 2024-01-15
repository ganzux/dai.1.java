/* 1.	Programa que cree un array de marcas de coches (Audi, Bmv, Renault, Opel,
etc,), guarde el precio de cada uno de los coches, después pregunte al usuario
cual es su coche preferido, y le devuelva cual es el precio de dicho coche.
Para realizar el programa use Tipos Enumerados. */

#include <stdio.h>   // Entrada salida
#define marcas 5     // marcas de coches para el array
#define longitud 20  // longitud maxima del nombre de la marca

void main()
{
char coches[marcas][longitud]; // Array bidimensional para 5 marcas de 20 letras
int contador,contador2,precio[marcas];

for (contador=0;contador<marcas;contador++)           //  Vaciamos el Array
	  for (contador2=0;contador2<longitud;contador2++) //  por si tuviese algo
			coches[contador][contador2]='\0';            //  "dentro"

for (contador=0;contador<marcas;contador++)
	{
	printf("\n¿Marca del coche %d? ",contador+1);   // Pedimos la marca del coche
	gets(coches[contador]);                         // y lo almacenamos en el array
	printf("¿Coste del coche %d? ",contador+1);     // Pedimos el precio del coche
	scanf("%d",&precio[contador]);                  // y lo almacenamos en otro
	fflush(stdin);                                  // Limpiamos la memoria
	}

do{                                                      // Preguntamos que
	printf("\nIntroduzca un valor del 1 al %d: ",marcas); // quiere visualizar
	scanf("%d",&contador2);                               // y lo validamos
  }                                                      // de 1 a marcas.
while (contador2<1 || contador2>marcas);


for (contador=0;contador<longitud;contador++)         // Escribimos la marca
	{                                                  // teniendo en cuenta que
		if (coches[contador2-1][contador]!='\0')        // si no hay caracter, no
			printf("%c",coches[contador2-1][contador]);  // ha de escribirse.
	}

printf(" tiene un precio de %d Euros.",precio[contador2-1]);// Escribimos el 
}                                                           // precio y FIN.
