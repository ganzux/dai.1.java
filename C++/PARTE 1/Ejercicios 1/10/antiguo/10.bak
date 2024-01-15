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

/* Cuerpo del programa; se recorre dos veces el intervalo que diga el usuario
(recogido el la variable limite); se hace dos veces porque se ha de comparar
en los dos sentidos.
Por cada recorrido se comprueba si la suma de los divisores coincide con el otro
numero. Si es asi, lo muestra en pantalla.*/

void main()
{
int limite,n1,n2;

printf("Teclee el limite para calcular los numeros: ");
scanf("%d",&limite);

	for (n1=limite;n1>=1;n1--)
		{
			for (n2=limite;n2>=1;n2--)
				{
					if (n1==SumaDivisores(n2) && n2==SumaDivisores(n1) && n1>=n2)
						printf("\n%d y %d son amiguetes.",n1,n2);
				}
		}

}
