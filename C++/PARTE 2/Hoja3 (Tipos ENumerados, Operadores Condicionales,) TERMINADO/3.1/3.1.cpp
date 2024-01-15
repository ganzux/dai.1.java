/* 1.	Programa que le pida al usuario un mes y devuelva el número
		de días que tiene el año. Utilice Tipos Enumerados								*/

#include <stdio.h>
#include <conio.h>

int main ()
{
	enum meses_ano {Enero=1,Febrero=2,Marzo=3,Abril=4,Mayo=5,Junio=6,Julio=7,Agosto=8,Septiembre=9,Octubre=10,Noviembre=11,Diciembre=12};
	enum meses_ano mes;
	int dias;

	printf("¿Numero de mes? \n");
	printf("1=Enero\n2=Febrero\n3=Marzo\n4=Abril\n5=Mayo\n6=Junio\n7=Julio\n8=Agosto\n9=Septiembre\n10=Octubre\n11=Noviembre\n12=Diciembre");
do{
	printf("\n\t\t¿Numero del Mes?:  ");
	scanf("%d",&mes);
	}
while(mes<1 || mes>12);

switch (mes)
		 {
		 case Abril:case Junio:case Septiembre:case Noviembre:
			dias=30;
		 break;

		 case Febrero:
			dias=28;
		 break;
		 default:
			dias=31;
		 break;
		 }
printf("\n\n\nEl mes tiene %d dias.\n\n\n",dias);
printf("\t\tPresione cualquier tecla para salir");
	getch();
	}