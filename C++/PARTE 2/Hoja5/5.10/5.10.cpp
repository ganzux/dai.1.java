// 1. Diseñar un programa que rellene un vector de N elementos, los ordene y
// visualice el vector ordenado. Cada una de las acciones del programa se
// realizará por medio de funciones. También se debe incluir una opción que le
// permita buscar al usuario un elemento del vector. Los elementos del vector
// son números reales.

////////////////////////////////////////////////////////////////////////////////
/////////////////////     CABECERAS Y DEFINICIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ESC 0x1b
#define  MAX 5
////////////////////////////////////////////////////////////////////////////////
///////////////////     PROCEDIMIENTOS Y FUNCIONES           ///////////////////
////////////////////////////////////////////////////////////////////////////////

// Procedimiento que ponga un array de MAX posiciones "a cero"
	void acero (float matriz[MAX])
    {
    int n;
    for (n=0;n<MAX;n++)
        matriz[n]=0;
    }
// Fin de "acero"

// Procedimiento que permite ordenar un array mediante seleccion:
	void ordena(float matriz[MAX])
	{
	int aux,aux2;
    float cambio;
    for (aux=0;aux<MAX-1;aux++)                  // Bucle ppal: 0..MAX-1
    	{
        for (aux2=aux+1;aux2<MAX;aux2++)         // Bucle 2: aux+1..MAX
        	{
            if (matriz[aux]>matriz[aux2])        // Si es mayor, tendremos
                   {                             // que hacer el cambio.
                   cambio=matriz[aux];
                   matriz[aux]=matriz[aux2];
                   matriz[aux2]=cambio;
                   }
            }
        }
    }
// The End

// Procedimiento que lea un array numerico
	void lee(float matriz[MAX])
	{
    int n;
    acero(matriz);
	printf("Introduzca la cadena y presione ENTER: ");
	for(n=0;n<MAX;n++)                                  // Bucle ppal que lee
    	{                                               // la matriz
        printf("Numero en la posicion %d: ",n+1);
        scanf("%f",&matriz[n]);
        }
	}
// Fin del Procedimiento

// Procedimiento que presenta un array numerico por pantalla
	void presenta(float matriz[MAX])
	{
    clrscr();
    int n;
	for(n=0;n<MAX;n++)                                  // Bucle ppal. que
        printf("%f, ",matriz[n]);                       // presenta la matriz
	}                                                   // por pantalla
// Fin del Procedimiento

// Funcion del menu que devuelve 1 ó 2:
	char menu()
    {
    char caracter;
    do{
// Borramos la pantalla:
	clrscr();
    printf("\t\t1. Visualizar Matriz\n");
    printf("\n\t\t2. Buscar Elemento\n\n\n\t\t\t\t");
    caracter=getche();
    }while(caracter!='1' && caracter!='2' && caracter!=ESC);
    return caracter;
    }
// Fin del menu

// Procedimiento que busca un elemento en una matriz que esta ordenada:
	void busca (float matriz[MAX])
    {
    int n,encontrado;
    float elemento;
    clrscr();
    printf("Que elemento deseas buscar? --> ");
    	scanf("%f",&elemento);
    encontrado=0;
    for (n=0;n<MAX && encontrado==0;n++)
    	{
        if (elemento==matriz[n])
        	{
            printf("\n\n\tEl numero %f esta en la posicion %d",elemento,n+1);
            encontrado=1;
            }
        }
    if (encontrado==0)
    	printf("Ese elemnto NO esta en la lista facilitada :)");
    }
// Fin del buscador

////////////////////////////////////////////////////////////////////////////////
///////////////////         CUERPO DEL PROGRAMA              ///////////////////
////////////////////////////////////////////////////////////////////////////////
	float main()
	{
// Declaramos las variables:
	char car,opcion;
    float matriz[MAX];
// Leemos la cadena y la ordenamos
    lee(matriz);
    ordena(matriz);
// Metemos todo el programa en un bucle DO-WHILE hasta presionar ESC.
	do{
// Presentamos el menu principal y ejecutamos la opcion
	opcion=menu();
    if (opcion=='1')
        presenta(matriz);
    else if (opcion=='2')
    	busca(matriz);
// Captamos la tecla para salir o volver al principio del programa:
	printf("\n\n\nPresion ESC para salir o cualquier otra tecla para continuar.");
		car=getch();
	}
	while(car!=ESC);
	return 69;
	}






