/* 8. Haz un programa en C que permita introducir dos números enteros positivos
y visualice su producto por el método de sumas sucesivas. Ej:. 5*6 = 5+5+5+5+5+5
*/

# include <stdio.h>

void main()
{
int num1,num2,aux;

printf("Por favor, introduzca el primer numero: ");
	scanf("%d",&num1);
printf("Por favor, introduzca el segundo numero: ");
	scanf("%d",&num2);

printf("%d * %d = ",num1,num2);

for (aux=1;aux<num1;aux++)
	printf("%d + ",num2);

printf ("%d",num2);

}
