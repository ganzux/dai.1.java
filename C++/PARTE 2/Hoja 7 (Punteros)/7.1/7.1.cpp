// Salida: 1       4

// 7.1 Decir cual es la salida de los siguientes programas para indicar
// diferentes líneas. Rellenar los comentarios de las líneas en los que existen,
// indicando que operación se está realizando,
// y con que objetivo se hace (donde proceda).

// Cabeceras de Includes:
#include <stdio.h>
// Definicion de las funciones que usaremos:
	void f2(int * v1, int * v2);
// Cuerpo del programa principal
	int main(void)
// Inicio
	{
// Declaramos un array a de 5 posiciones
	int a[5];
// declaramos un puntero que apunta a un entero
	int *b;
// b apunta al cuarto elemento de a
	b=&a[4];
// pasamos la dirección del primer y último elementos del array
	f2(a,b);
// imprimimos el entero a[3]
	printf(" %d",a[3]);
// imprimimos el entero a[0]
	printf(" %d",a[0]);
// Fin del programa principal
   scanf("%d",&a[0]);
	}


// Funcion a la que llamamos con dos punteros que apuntan a enteros: v1 y v2
	void f2(int * v1, int * v2)
// Inicio
	{
// Variable Auxiliar i de tipo entero
	int i;
// que inicializamos a cero (0)
	i=0;
// Mientras la direcc. de mem. de v2 menos la dir. de mem. v1 sea mayor o igual a cero
	while((v2-v1)>=0)
// a partir de aqui:
		{
// contenido de v2 es i
		*v2=i;
// apuntará al anterior
		v2--;
// i=i+1: 0, 1, 2, 3, 4...: A i le sumamos uno.
		i++;
// Fin del bucle
		}
// Fin del procedimiento f2
	}
