/* Programa que pida la edad, el sexo y el estado civil de los empleados de */
/* una empresa, hasta pulsar una edad igual a 0. El programa mostrara el numero*/
/* de varones meyores de 30 años y el numero de personas mayores de 60.*/

#include <stdio.h>
#include <conio.h>

void main()
{
int edad,conta1=0,conta2=0;
char ecivil,sexo;

do{
printf("\n¿Edad del individuo?");
	scanf("%d",&edad);

	if (edad!=0)
		{
		 printf("¿Sexo? (v/h)");
			  sexo=getche();
		 printf("\n¿Estado civil? (c/s)");
			  ecivil=getche();

		 if (edad>30 && sexo=='v') conta1++;
		 if (edad>60) conta2++;
		}
  }
while (edad!=0);

printf("\n\nEl numero de varones mayores de 30 años es %d",conta1);
printf("\nEl numero de personas mayores de 60 años es %d",conta2);
}
