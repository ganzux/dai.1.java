/*2.Hacer un programa que muestre
los números del 1 al 200 que sean divisibles por 2 y 3.*/

#include<stdio.h>
void main  ()
{
int cont,num,rest1,rest2;
for(cont=1;cont<=200;cont++)
 { rest1=cont%2;
   rest2=cont%3;
if (rest1==0 && rest2==0)
        printf("%d, ", cont);
}

}
