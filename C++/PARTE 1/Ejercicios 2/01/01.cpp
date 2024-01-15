/* 1.	Dado un número entero leído por pantalla, muestre cada uno de los dígitos
del número.	Ej: Si el número es 324,se debe mostrar 3, 2, 4. */

#include <stdio.h>
#include <conio.h>

void main()
{

char numero[25];
int aux=0;

	gets(numero);

do{
	printf("%c, ",numero[aux]);
	aux++;
  }
while (numero[aux]!='\0');
}

