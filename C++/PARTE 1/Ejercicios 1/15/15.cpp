// 15.

#include <stdio.h>

int main (void)
{
int a=1;

printf("Comprobacion del valor de la variable a");
printf("\n   que inicialmente tiene el valor 1");
printf("\n---------------------------------------\n\n\n");

printf("· Caso I:   a = a   = %d\n",a);
printf("· Caso II:  a = ++a = %d\n",++a);
printf("· Caso III: a = a++ = %d\n",a++);
printf("· Caso IV:  a = a   = %d\n",a);

return 0;
}
