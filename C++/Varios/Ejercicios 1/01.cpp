#include <stdio.h>
#include <conio.h>

void main()
{
int edad,conta1=0,conta2=0;
char ecivil,sexo;

do{
printf("\n�Edad del individuo?");
	scanf("%d",&edad);

	if (edad!=0)
		{
		 printf("�Sexo? (v/h)");
			  sexo=getche();
		 printf("\n�Estado civil? (c/s)");
			  ecivil=getche();

		 if (edad>30 && sexo=='v') conta1++;
		 if (edad>60) conta2++;
		}
  }
while (edad!=0);

printf("\n\nEl numero de varones mayores de 30 a�os es %d",conta1);
printf("\nEl numero de personas mayores de 60 a�os es %d",conta2);
}
