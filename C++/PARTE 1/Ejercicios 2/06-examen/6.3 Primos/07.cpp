/* 7. Realizar un programa en C que pida un número y evalúa si es primo o no
(Sabiendo que un número es primo si solo es divisible por si mismo y por la
unidad), para ello llamará a la función es_primo que recibirá un número y
devolverá un 1 si es primo y si no lo es devolverá 0. (Nota: puedes usar el
operando % que devuelve el resto de una división entera)

Prototipo: int es_primo(int);
*/

# include <stdio.h>

int es_primo(int numero)
{
int testigo=1,contador=2,resto;

while (testigo!=0)          // El Bucle se hace mientras testigo sea distinto de
	{                        // cero, o sea, mientras la dividion no sea entera.
	resto=numero%contador;   // el resto del numero entre el contador.
									 // si el resto es cero, no es primo,
	if (resto==0)            // luego el testigo valdra 0.
		  testigo=0;          // en caso de ser primo se repite hasta 'numero',
	contador++;              // siendo el resto de numero/numero 0, por lo que lo
	}                        // controlaremos mirando si el numero es igual al.
									 // contador + 1, ya que se le suma una unidad al
if (resto==0 && contador==numero+1)      // final del bucle ;)
	testigo=1;

return testigo;
}

void main()
{
int numero;

printf("Digame el numero que desea validar: ");
	scanf("%d",&numero);

if (es_primo(numero)==1)
		printf("\n\n\nEl numero es primo.");
else
		printf("\n\n\nEl numero no es primo");

}