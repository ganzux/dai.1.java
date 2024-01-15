// Dos numeros son amigos si cada uno de ellos es igual a la suma de los
// divisores del otro. Hacer un programa que muestre todas las parejas de nume-
// ros amigos menores o iguales que M, siendo M un numero introducido por el
// usuario.

// Corregido a fecha 12/XII para incluir aquellos numeros que son amigos de si
// mismos, o sea, que el numero X es igual a la suma de los divisores de X

#include <stdio.h>

/* La Funcion SumaDivisores devielve la suma de los divisores de un numero.
Utilizamos las variables siguientes:
numero: es la variable del dato, donde se almacena el numero a "desglosar".
suma: acumulador donde, tras comprobar por el resto si es divisible, se suma.
aux: contador que va desde el numero-1 (para que no cuente el numero) hasta 1 */

int SumaDivisores(int numero)
{
int suma=0,aux;

for (aux=numero-1;aux>0;aux--)
		if (numero%aux==0)
				suma=suma+aux;
return suma;
}

/* Cuerpo del programa; se recorre el intervalo que diga el usuario
(recogido el la variable limite);
Por cada recorrido se comprueba si la suma de los divisores coincide con el otro
numero. Si es asi, lo muestra en pantalla.*/

int main()
{
int limite,n1,n2,n3;

printf("Teclee el limite para calcular los numeros: ");
scanf("%d",&limite);

	for (n1=limite;n1>=1;n1--)
		{
							 n2=SumaDivisores(n1);
							 n3=SumaDivisores(n2);
							 if (n3==n1 && n1>=n2)
										  printf("\n%d y %d son amiguetes.",n1,n2);

		}
printf("\n\n\nTodos los numeros calculados");
}
