/* 2.	Utilice el operador condicional visto en clase (condicion?accion1:accion2)
		para crear un programa que lea dos números y
		calcule cual es el mayor de los 2 números.       								*/

#include <stdio.h>
#include <conio.h>

int main()
{
 int num1,num2,mayor;
 printf("\tPrimer numero: ");
 scanf("%d",&num1);

 printf("\n\n\tSegundo numero: ");
 scanf("%d",&num2);


 num1>num2?mayor=num1:mayor=num2;

printf("\n\n\n\tEl mayor de los dos es %d.",mayor);

printf("\n\n\t\tPresione cualquier tecla para salir");
	getch();
return 69;
}
