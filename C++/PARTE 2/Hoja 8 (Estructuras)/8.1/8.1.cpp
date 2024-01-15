/* 1. Programa que defina una estructura persona que contendrá: 
   nombre, dirección, teléfono y fecha de nacimiento 
   (a su vez, fecha de nacimiento será otra estructura cuyos miembros son: 
   día, mes y año).  
   Se asignarán (mediante una función) datos a cada uno de sus miembros, 
   se copiará la estructura en otra estructura (que llamaremos otra_persona)
   y visualizaremos los datos almacenados en esta última estructura. */

#include <stdio.h>
#include <string.h>
typedef struct fecha
{
			int dia;
			int mes;
			int ano;
};

typedef struct persona
{
			char nombre[20];
			char direccion[40];
      		int telefono;
			fecha nacimiento;
};

struct persona leefamiliares()
{
struct persona per;
    printf("Nombre: ");
    gets(per.nombre);
    printf("Direccion: ");
    gets(per.direccion);
    printf("Telefono: ");
    scanf("%d",&per.telefono);
    fflush(stdin);
    printf("Dia de nacimiento: ");
    scanf("%d",&per.nacimiento.dia);
    printf("Mes de nacimiento: ");
    scanf("%d",&per.nacimiento.mes);
    printf("Año de nacimiento: ");
    scanf("%d",&per.nacimiento.ano);
return per;    
}

struct persona copia(struct persona per1)
{
struct persona per2;
strcpy(per2.nombre,per1.nombre);
strcpy(per2.direccion,per1.direccion);
per2.telefono=per1.telefono;
per2.nacimiento.dia=per1.nacimiento.dia;
per2.nacimiento.mes=per1.nacimiento.mes;
per2.nacimiento.ano=per1.nacimiento.ano;
return per2;    
}

void escribe(struct persona per)
{
    printf("\n\nCONTENIDO DE LA VARIABLE\n\n\tNombre: %s",per.nombre);
    printf("\n\tDireccion: %s",per.direccion);
    printf("\n\tTelefono: %d",per.telefono);
    printf("\n\tDia de nacimiento: %d",per.nacimiento.dia);
    printf("\n\tMes de nacimiento: %d",per.nacimiento.mes);
    printf("\n\tAno de nacimiento: %d",per.nacimiento.ano);
}


int main()
{
struct persona per,per2;
per=leefamiliares();
per2=copia(per);
escribe(per2);
scanf("%d",&per.nacimiento.dia);
return 69;
}
