/* 6. Pasa a C los ejercicios del examen:
a. Realizar un programa en C que lea 3 n�meros correspondientes a una feha
(d�a, mes y a�o) y compruebe si la fecha es o no correcta para ello llamar� a la
funci�n fechaCorrecta1 que reciba una fecha representada como 3 enteros
(dia, mes y a�o), y determine si es correcta o no. Si es correcta devolver�
un 1 y si no lo es devolver� 0.

Prototipo: int fechaCorrecta(int,int,int);

b. Modificar el programa anterior para el programa muestre un men� por pantalla
con las siguientes opciones:
MENU PRINCIPAL
___________________________________
1. Introducir Fecha
2. Salir

Si se pulsa la opci�n �1� se pedir� la fecha para determinar si es o no es c
orrecta, despu�s se volver� a mostrar el men� principal, hasta que se pulse la
opci�n 2-Salir.*/

#include <stdio.h>

int fechaCorrecta(int dia, int mes, int ano)
{
int booleano=0;

if ((mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) && dia <=31)
				booleano=1;
else if ((mes==4 || mes==6 || mes==9 || mes==11) && dia <=30)
				booleano=1;
else if (mes==2 && dia<=28)
				booleano=1;
return booleano;
}

void main()
{
int dia,mes,ano,opcion=1;

printf("MENU");
printf("\n----");
printf("\n1. Introducir fecha.");
printf("\n2. Salir");
scanf("%d",&opcion);

while (opcion!=2){
printf("�Dia?");
	scanf("%d",&dia);

printf("�Mes?");
	scanf("%d",&mes);

printf("�A�o?");
	scanf("%d",&ano);

if (fechaCorrecta(dia,mes,ano)==1)
		printf("La fecha es correcta");
else printf("Fecha Incorrecta");

printf("\n\n\nMENU");
printf("\n----");
printf("\n1. Introducir fecha.");
printf("\n2. Salir");
scanf("%d",&opcion);
}
}
