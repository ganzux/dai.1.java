/* 4. Programa que calcule los operadores lógicos binarios (AND, OR, XOR) de
		2 números introducidos.																	*/

# include <stdio.h>
#include <conio.h>

int main()
{
  int num,num2,and,or,xor;

  printf("\t\tPrimer numero: ");
  scanf("%d",&num);
  fflush(stdin);
  printf("\t\tSegundo numero: ");
  scanf("%d",&num2);
  fflush(stdin);

  and=num&num2;
  or=num|num2;
  xor=num^num2;

  printf("Los resultados de los operadores lógicos son: \n");
  printf("\tAND:\t%d\n",and);
  printf("\tOR:\t%d\n",or);
  printf("\tXOR:\t%d\n",xor);


printf("\n\n\t\tPresione cualquier tecla para salir");
  getch();
return 69;
}
