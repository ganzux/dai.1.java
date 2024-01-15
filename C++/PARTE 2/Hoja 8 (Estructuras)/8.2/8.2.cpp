// 2. Realizar un programa que lea una lista de alumnos y sus correspondientes 
// notas de final de curso y que dé como resultado el tanto por ciento de los 
// alumnos aprobados y suspendidos. 
// (Utilizaremos un array de estructuras tficha que constará de nombre y nota)

#include <stdio.h>
#include <stdlib.h>

// Tpalabra será un char de 20 caracteres
typedef char Tpalabra[20];

typedef struct tficha
{
	Tpalabra nombre;
	int nota;
} Tpersona;

typedef struct {
	int num_personas;
	Tpersona *personas;	// apuntador al vector dinámico de personas
} Tlista;

int main ()
{
	Tlista mi_lista;
	int i;
	float porcentajeaprobados=0,porcentajesuspendidos=0;


	printf ("Escribe el numero de personas del vector\n");
	scanf ("%d",&mi_lista.num_personas);

	// Ahora se el tamaño inicial del vector. Reservo espacio de memoria  
	mi_lista.personas = (Tpersona *) malloc (mi_lista.num_personas*sizeof (Tpersona));
	if (mi_lista.personas == NULL)
		printf ("Operacion incorrecta");
	else
	{
		// cargo el vector con los datos leidos del teclado
		for (i=0; i<mi_lista.num_personas; i++)
		{
			printf ("Escribe el nombre:\t");
			scanf ("%s",mi_lista.personas[i].nombre);
			printf ("Escribe la nota:\t");
			scanf ("%d",&mi_lista.personas[i].nota);
			if (mi_lista.personas[i].nota<5)
			   porcentajesuspendidos++;
            if (mi_lista.personas[i].nota>=5)
			   porcentajeaprobados++;
		};
        printf("\nSuspendidos: %f por ciento",(porcentajesuspendidos*100)/mi_lista.num_personas);
        printf("\nAprobados: %f por ciento\n\n",(porcentajeaprobados*100)/mi_lista.num_personas);
		system("PAUSE");
		// cuando termino de trabajar con el vector, libero el espacio de memoria			free (mi_lista.personas);
	}

return 9;
}

