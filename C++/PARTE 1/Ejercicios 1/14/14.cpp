// 14. Programa que calcule el numero de tarot de una persona a partir de su
// fecha de nacimiento. El objetivo del programa es reducir una fecha de naci-
// miento a un solo digito.
// 31/05/1983 = 31 + 5 + 1983 = 2019
//   2019 = 2 + 0 + 1 + 9 = 12
//    12 = 1 + 2 = 3

#include <stdio.h>

/* Funcion que suma los digitos de un numero. */
int Sumador(int num)
{
int resto,suma=0,auxiliar; /* Inicializamos la variable suma a 0. */

do // Bucle do--while que se hace mientras el cociente sea distinto a cero.
	{
	resto=num%10;
	num=num/10;
	suma=suma+resto;   // Almacenamos la suma.
	}
while (num!=0);

return suma;  // Devolvemos la suma.
}

/* Cuerpo del programa: */

void main()
{

int dia,mes,ano,total1,total2,numerotarot;
char testigo='s';

printf("�Dia que naciste? "); // Pedimos los datos al usuario.
	scanf("%d",&dia);
printf("�Mes que naciste? ");
	scanf("%d",&mes);
printf("�A�o que naciste? ");
	scanf("%d",&ano);

total1=dia+mes+ano; // Variable intermedia, donde sumamos dia+mes+a�o

printf("%d/%d/%d : %d + %d + %d = %d",dia,mes,ano,dia,mes,ano,total1);


while (numerotarot>9) // Llamamos a la funcion Sumador mientras el numero del
	{                  // TAROT sea mayor que nueve.
	numerotarot=Sumador(total1);
	total1=numerotarot;
	}
printf("\n\n� Tu numero del TAROT es: %d",numerotarot);  // Imprimimos resultado
}
