#include <stdio.h>
#include <conio.h>

int main(void)
{
char cad[100]=" hola a todos";
char * pos;
/* pos es un puntero que apunta a un caracter, apuntando al primer elemento */
int i;
i=7;
while(i<12)
    {
    puts(pos+i); /* Escribe la cadena: pos+7 */
    i++;
    }
getch();
}

// Salida: todosodosdososs
