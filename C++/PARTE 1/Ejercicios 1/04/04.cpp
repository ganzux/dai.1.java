/*4.Programa que lea un n� y diga cuantos d�gitos tiene*/

#include<stdio.h>
void main()
{
int num,longt=0;

printf("Introduzca el numero\n");
scanf("%d", &num);

do{
	num=num/10;
	longt++;
  }
while (num!=0);

printf("la longitud de su numero es %d", longt);
}
