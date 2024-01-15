/* 5.Programa que lea dos numeros y diga cual de los dos tiene mas digitos. */

#include<stdio.h>

void main()
{
int num1,num2,longt1=0,longt2=0;
printf("Introduzca el primer numero\n ");
scanf("%d", &num1);

printf("Introduzca el segundo numero\n ");
scanf("%d", &num2);

do{
	num1=num1/10;
	longt1++;
  }
while (num1!=0);

do{
	num2=num2/10;
	longt2++;
  }
while (num2!=0);

if (longt1>longt2)
	 printf("La longitud mayor pertenece al primer numero,y es %d", longt1);

else
		  if (longt1<longt2)
		  printf("La longitud mayor pertenece al segundo numero, y es %d", longt2);

		  else
		  printf("Las longitudes de los numeros son iguales");
}

