// 16. Programa que lee un numero y devuelve la suma desde 1 hasta el numero leido.

#include <stdio.h>

void main()
{
int num,num2,auxiliar;

printf("Introduce un numero: ");
scanf("%d",&num);
num2=num;

for (auxiliar=num2-1;auxiliar>0;auxiliar--)
		 num2=num2+auxiliar;

printf("\n\n La suma de los %d primeros numeros es: %d",num,num2);
}
