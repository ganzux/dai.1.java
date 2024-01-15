/*7. Devuelve el digito N-esdimo de un numero introducido por teclado. */
/*Implementamos una funcion para ello, que devuelve -1 si el numero no tiene */
/*el digito que se solicita.*/

#include <stdio.h>

/* A La Funcion digitPos se le manda la posicion y el numero en cuestion.
Ella realiza un bucle del numero anterior dividido entre 10. El resto que va
quedando se toma como el numero en la posicion*/

int digitPos(int pos, int num)
{
int aux,cociente,resto,max=1;
  cociente=num;
  for (aux=0;aux<=pos;aux++)
	  {
		resto=cociente%10;
		cociente=cociente/10;
	  }
if ((resto==0 && cociente==0) || pos<0) resto=-1;

return resto;
}


/* Cuerpo del programa: */

void main()
{
int a,b;
printf("Dame el numero: "); scanf("%d",&b);
printf("Dame la posicion: "); scanf("%d",&a);

printf("\n\nEl digito %d del numero %d -teniendo en cuenta que empezamos desde la derecha con el 0- es %d",a,b,digitPos(a,b));

}
