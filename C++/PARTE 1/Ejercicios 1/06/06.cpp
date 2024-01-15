// 6. Programa que pida un numero y muestre por pantalla el mismo pero en orden
// inverso. Si el usuario facilita el numero 4632, el programa devolvera la
// secuencia 2, 3, 6, 4.

#include <stdio.h>

int Digit(int num)
{
int resto=0;
resto=num%10;
return resto;
}

void main()
{
int num,aux;

printf("Introduce un numero para darle la vuelta: ");
scanf("%d",&num);

printf("\n\n\nDamos la vuelta a %d y nos queda: ",num);

while (num>0)
	{
	printf("%d, ",Digit(num));
   num=num/10;
	}

}



