// 13. Un numero perfecto es aquel que es igual a la suma de sus divisores ex-
// cluido el mismo. Por ejemplo el 6 = 1 + 2 + 3 (sus unicos divisores).
// Escribir un programa que calcule todos los numeros perfectos que hay entre
// 2 y 100.

#include <stdio.h>

/* La Funcion Divisores devuelve la suma de los divisores del numero leido.
Utilizamos un acumulador llamado suma y una variable auxiliar que recorre
con un bucle for todas las posiciones desde el numero 1 hasta el valor especifi-
cado-1, ya que no queremos que este se sume. */

int Divisores(int numero)
{
int suma=0,aux;

for (aux=numero-1;aux>0;aux--)
		if (numero%aux==0)
				suma=suma+aux;
return suma;
}

/* Cuerpo del programa: Bucle desde 2 hasta 100 que comprueba si el contador (n)
es igual a la suma de sus divisores, o sea, comprueba si el numero es perfecto.
Si es asi, lo imprime en pantalla.*/

int main()
{
int n;
printf("\n\nNumeros perfectos entre 2 y 100: ");
	for (n=2;n<2000;n++)
		if (n==Divisores(n))
					printf("%d, ",n);

scanf("%d",&n);
}
