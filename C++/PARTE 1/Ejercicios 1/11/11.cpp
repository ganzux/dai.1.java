// Estadisticas de los pesos de los alumnos de un colegio en tres partes: meno-
// res de 40 Kg., entre 40 y 50 y mayores de 50 Kg.
// La entrada de pesos termina cuando se le pregunta al usuario si quiere intro-
// ducir mas pesos y este contesta que no.


#include <stdio.h>
#include <conio.h>

/* Cuerpo del programa: Encastrado en un bucle do-While que se repite mientras
la pulsacion de la tecla sea 'S' o 's', el programa hace 3 "if´s" para ver en
que intervalo de peso se encuentran los alumnos, contabilizandolos en una
variable de tipo acumulador para, finalmente y ya fuera del bucle, mostrar las
estadisticas de peso.*/

void main()
{
int peso,contsup=0,contmed=0,continf=0;
char testigo='s';

do {
	 printf("\nIntroduzca el peso el Kilogramos: ");
	 scanf("%d",&peso);

		if (peso<40) 				  continf++;
		if (peso>=40 && peso<=50) contmed++;
		if (peso>50) 				  contsup++;

	 printf("\nPulsa 'S' para otro peso o cualquier otra tecla para salir.");
	 testigo=getche();
	}
while (testigo=='s' || testigo=='S');

printf("\n\n· %d de cada %d alumn@s pesa menos de 40 Kg.",continf,continf+contmed+contsup);
printf("\n· %d de cada %d alumn@s pesa entre 40 y 50",contmed,continf+contmed+contsup);
printf("\n· %d de cada %d alumn@s pesa mas de 50 Kg.",contsup,continf+contmed+contsup);
}
