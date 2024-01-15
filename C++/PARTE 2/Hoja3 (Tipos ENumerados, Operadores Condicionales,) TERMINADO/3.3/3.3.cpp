/*3.Programa que calcule el complemento binario de un número introducido
por teclado.*/

#include <stdio.h>
#include <conio.h>

int main()
{
  int num,cb;
  printf("\t\tNumero: ");
  scanf("%d",&num);

  cb=~num;
  printf("\n\n\n\tEl complemento binario es %d.",cb);

printf("\n\n\t\tPresione cualquier tecla para salir");
  getch();
return 69;
}
