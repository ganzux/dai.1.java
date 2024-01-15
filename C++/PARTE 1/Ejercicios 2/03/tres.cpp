/* 1. Escribir un programa con diseño modular que lea del teclado los datos de
una serie de empleados, finalizando la serie introduciendo un código de empleado
igual a cero.
Los datos que se deben introducir son: código  del empleado,
nombre del empleado, horas semanales trabajadas y categoría del empleado.

El programa debe imprimir por cada empleado una línea que  contenga:
nombre del empleado, salario bruto, descuento y salario neto.
Para calcular la tarifa ordinaria por hora se utiliza una  función que tendrá
en cuenta la siguiente tabla:

			CATEGORIA   TARIFA ORDINARIA
				10            1.000
				20            1.200
				30            1.400
				40            1.800

Para calcular el salario bruto se utiliza una función que
tendrá  en cuenta lo siguiente:

a)	Las primeras 40 horas trabajadas se cobran a la tarifa ordinaria
y las horas extra se cobran a 1.8 de la tarifa ordinaria.

b)	Para calcular el descuento sobre el salario bruto,
se utiliza una función en base a lo siguiente:
	a.	Si el salario bruto es menor de 20.000 pts el descuento es del 5%;
	b.	Si está  comprendido entre 20.000 y 40.000 pts el descuento es del 10%
	c.	Si es mayor de 40.000 pts el descuento es del 15 %.
*/

#include <stdio.h>

int Tarifa_Ordinaria(int categoria, int horas)
{
int tarifa=0;
if (categoria==10)
	tarifa=horas*1000;
else if (categoria==20)
	tarifa=horas*1200;
else if (categoria==30)
	tarifa=horas*1400;
else if (categoria==40)
	tarifa=horas*1800;
else
	tarifa=0;
return tarifa;
}

float SBruto (int categoria, int horas)
{
float salariobruto;
if (horas<=40)
	salariobruto=Tarifa_Ordinaria(categoria,horas);
else
	{
	horas=horas-40;
	salariobruto=Tarifa_Ordinaria(categoria,horas)+Tarifa_Ordinaria(categoria,40);
	}

if (salariobruto<20000)
	salariobruto=salariobruto*0.95;
else if (salariobruto>=20000 && salariobruto<=40000)
	salariobruto=salariobruto*0.9;
else
	salariobruto=salariobruto*0.85;

return salariobruto;
}



float dto (int categoria, int horas)
{
float salariobruto,dto;
if (horas<=40)
	salariobruto=Tarifa_Ordinaria(categoria,horas);
else
	{
	horas=horas-40;
	salariobruto=Tarifa_Ordinaria(categoria,horas)+Tarifa_Ordinaria(categoria,40);
	}

if (salariobruto<20000)
	dto=0.95;
else if (salariobruto>=20000 && salariobruto<=40000)
	dto=0.9;
else
	dto=0.85;

return dto;
}


void main()
{
char nom_empleado[15];
int codigo_empleado,horas_trabajadas,categoria,salario_neto;
float salario_bruto,descuento;

printf("¿Codigo del empleado? ");
	scanf("%d",&codigo_empleado);

while (codigo_empleado!=0)
	{
fflush(stdin);   // Borramos para que coja bien los datos :)
// Pedimos los datos del empleado

	printf("¿Nombre del empleado? ");
		gets(nom_empleado);
	printf("¿Horas semanales trabajadas? ");
		scanf("%d",&horas_trabajadas);
	printf("¿Categoria del empleado? (10/20/30/40)");
		scanf("%d",&categoria);
// Fin de los datos del empleado.

// Gestionamos esos datos
salario_bruto=SBruto(categoria,horas_trabajadas);
salario_neto=Tarifa_Ordinaria(categoria,horas_trabajadas);
descuento=dto(categoria,horas_trabajadas);
// Fin de las gestiones

// Escribimos los datos
printf("\n\nTrabajador \"%s\":",nom_empleado);
printf("\nSalario Bruto: %f",salario_bruto);
printf("\nDescuento: %f",descuento);
printf("\nSalario Neto: %d",salario_neto);
// Fin de la escritura

// Pedimos el siguiente codigo.
	printf("\n\n¿Codigo del empleado? ");
	scanf("%d",&codigo_empleado);
	}
}
