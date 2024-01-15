// 12. Utilizando los operadores suma y resta (+ y -), haremos un programa que mues-
// tre la division entera y el resto de dos numeros introducidos por el usuario.

#include <stdio.h>

void main()
{
int dividendo,divisor,cociente=0,resto=0;

printf("¿Dividendo?-> "); scanf("%d",&dividendo);
printf("¿Divisor?---> "); scanf("%d",&divisor);
resto=dividendo;
	do{
	  resto=resto-divisor;
	  cociente++;
	  }
	while (resto>=divisor);

printf("\n\n %d : %d",dividendo,divisor);
printf("\n\nCociente: %d\nResto: %d",cociente,resto);
}
