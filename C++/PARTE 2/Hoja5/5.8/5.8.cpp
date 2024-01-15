/* 8. Realizar un algoritmo que multiplique dos matrices de números reales. 
Se deben construir 3 funciones con las siguientes características: 

-Leer una matriz: pregunte por las dimensiones de la matriz, pregunte por los elementos de la matriz y devuelva la matriz completa, nombre: leerm. 

-Visualizar matriz: al hacer la llamada a esta función pasándole como parámetro una matriz visualice los valores de dicha matriz, nombre: verm. 

-Multiplicar matrices: le pasamos como parámetros 2 matrices, las multiplica y genera una matriz resultado que se devuelve al programa que la llamó. Nombre: multiplicam         */ 

#include <stdio.h>                  // Cabecera de Entrada Y Salida 
#include <conio.h>                // Cabecera para getch, getche... 

#define  DIMENSION 10       // Dimensiones maximas de las Matrices 
#define ESC 0x1b                  // Tecla Escape :) 

//////////////////////////////////////////////////////////////////////////////// 
///////////////////     PROCEDIMIENTOS Y FUNCIONES           /////////////////// 
//////////////////////////////////////////////////////////////////////////////// 

/* Procedimiento que pone las matrices a cero:                                 */ 

   void borrarm(int matriz[DIMENSION][DIMENSION]) 
   { 
   int aux,aux2; 
      for (aux=0;aux<DIMENSION;aux++) 
         { 
         for (aux2=0;aux2<DIMENSION;aux2++) 
                  matriz[aux][aux2]=0; 
         } 
   } 

/* Procedimiento que pregunta por las filas de una matriz:                    */ 
        int filasm() 
        { 
        int filas; 
        do{ 
           printf("\n\t¿Numero de FILAS de la Matriz? "); 
                scanf("%d",&filas); 
           } 
        while (filas<1 || filas>DIMENSION); 
        return filas; 
        } 
/* Procedimiento que pregunta por las columnas de una matriz:                 */ 
        int columnasm() 
        { 
        int columnas; 
        do{ 
        printf("\n\t'Numero de COLUMNAS de la Matriz? "); 
      scanf("%d",&columnas); 
           } 
        while (columnas<1 || columnas>DIMENSION); 
        return columnas; 
        } 

/* Procedimiento que lea una matriz, pasandole las dimensiones de la misma:   */ 

   void leerm(int array[DIMENSION][DIMENSION], int filas, int columnas) 
   { 
   int aux,aux2; 

      for (aux=0;aux<filas;aux++) 
         { 
         for (aux2=0;aux2<columnas;aux2++) 
            { 
            printf("Columna %d, Fila %d: ",aux+1,aux2+1); 
               scanf("%d",&array[aux][aux2]); 
            } 
         printf("\n"); 
         } 
   } 

/* Procedimiento que se encarga de escribir una matriz de dimensiones M x N:  */ 

   void verm(int array[DIMENSION][DIMENSION], int filas, int columnas) 
   { 
   int aux,aux2; 
      for (aux=0;aux<filas;aux++) 
         { 
         for (aux2=0;aux2<columnas;aux2++) 
            printf("%d\t",array[aux][aux2]); 
         printf("\n"); 
         } 
   } 

/* Procedimiento encargado de MULTIPLICAR dos matrices, generado un resultado */ 

   void multiplicar(int matriza[DIMENSION][DIMENSION], int filasa, int columnasa, int matrizb[DIMENSION][DIMENSION], int filasb, int columnasb, int matrizr[DIMENSION][DIMENSION]) 
   { 
   int aux,aux2,aux3,filasr,columnasr,sumaparcial=0; 

// Restriccion: Las matrices solo se multiplican cuando el numero de columnas de 
// la primera, coincide con el nunero de filas de la segunda. 
   if (columnasa!=filasb) 
      printf("Las matrices no se pueden multiplicar porque el numero de columnas de la matriz A (%d) es distinto al numero de filas de la matriz B (%d).\n\n",columnasa,filasb); 
// En caso de que coincidan, el resultado es una matriz que tiene 
// tantas filas como la primera y tantas columnas como la segunda. 
   else{ 
        filasr=filasa; 
        columnasr=columnasb; 

        printf("\n\t\t\t\tMULTIPLICAMOS\n"); 
        printf("\t\t\t\t-------------\n"); 

        for (aux=0;aux<filasr;aux++) 
            { 
            for (aux2=0;aux2<columnasr;aux2++) 
               { 
               for (aux3=0;aux3<filasb;aux3++) 
                  { 
                  sumaparcial=matriza[aux][aux3]*matrizb[aux3][aux2]; 
                  matrizr[aux][aux2]=matrizr[aux][aux2]+sumaparcial; 
                  } 
               } 
            } 
       } 
   } 



//////////////////////////////////////////////////////////////////////////////// 
///////////////////         CUERPO DEL PROGRAMA              /////////////////// 
//////////////////////////////////////////////////////////////////////////////// 
   int main() 
   { 
   int matriza[DIMENSION][DIMENSION],filasa,columnasa; 
   int matrizb[DIMENSION][DIMENSION],filasb,columnasb; 
   int matrizr[DIMENSION][DIMENSION],filasr,columnasr; 
        char tecla; 
do{ 
   borrarm(matriza); 
   borrarm(matrizb); 
   borrarm(matrizr); 

//////////////////////     LEEMOS LA MATRIZ A       //////////////////////////// 

        printf("\n\t\t\tMATRIZ A"); 
        filasa=filasm(); 
        columnasa=columnasm(); 
   printf("\n\n"); 

   leerm(matriza,filasa,columnasa); 

//////////////////////     LEEMOS LA MATRIZ B       //////////////////////////// 

        printf("\n\t\t\tMATRIZ B"); 
        filasb=filasm(); 
        columnasb=columnasm(); 
   printf("\n\n"); 

   leerm(matrizb,filasb,columnasb); 

//////////////////////        MULTIPLICAMOS         //////////////////////////// 
   filasr=filasa; 
   columnasr=columnasb; 
   multiplicar(matriza,filasa,columnasa,matrizb,filasb,columnasb,matrizr); 

/////////////////////      VISUALIZACION FINAL       /////////////////////////// 
   if (columnasa==filasb) 
      { 
      printf("\t\t\tA= \n"); 
         verm(matriza,filasa,columnasa); 
      printf("\n\n\t\t\tMultiplicada por B= \n"); 
         verm(matrizb,filasb,columnasb); 
      printf("\n\n\n\t\t\tResultado R= \n"); 
         verm(matrizr,filasr,columnasr); 
      } 
   printf("\n\n\n\tPresione ESC para salir."); 
      tecla=getch(); 

}while (tecla!=ESC); 
   return 69; 
   } 
// POR WWW.ALVARITO.NET :) :) :) XD 
