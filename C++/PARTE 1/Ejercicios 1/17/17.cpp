// 17. Programa que lea un numero de segundo y lo convierta al formato H:m:s
// haciendo uso de una funcion implementada para ello y mostrando finalmente
// el resultado por pantalla.

#include <stdio.h>

void main()
{
int segundos,horas,minutos,inicial;

printf("¿Cuantos segundos tardaste en hacer el examen? ");
scanf("%d",&inicial);

segundos=inicial%60; /* El resto del tiempo inicial / 60 seran los segundos. */

minutos=inicial/60;  /* Los minutos que quedaran seran T inicial / 60. */

horas=minutos/60;    /* Las horas seran los minutos entre 60. */

minutos=minutos%60;  /* Por ultimo, ajustamos los minutos, mediante el resto. */

printf("\n\n> Has invertido, pues, %d:%d:%d",horas,minutos,segundos);
}
