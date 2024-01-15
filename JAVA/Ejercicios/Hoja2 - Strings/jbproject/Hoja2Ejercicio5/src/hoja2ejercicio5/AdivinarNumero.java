/* 5. Realizar un programa Java compuesto de una clase pública de nombre
 AdivinarNumero que contenga sólo al método main.

Su objetivo será permitir que el usuario averigüe un número entero generado
 aleatoriamente y comprendido entre [0,100] que se almacenará, dentro del
 código del programa, en una variable int a la que se llamará numero.

El programa pedirá un número por teclado e informará de si el número que
 introduce el usuario es mayor o menor que el que se trata de averiguar.
 Si no se acierta a la primera, no importa porque tiene que dejar introducir
 números de forma ininterrumpida. Cuando el usuario acierte, se mostrará un
 mensaje de felicitación y el número de intentos empleados.   */


package hoja2ejercicio5;
import java.io.*;
import java.util.*;
/**
 * <p>Título: </p>
 * <p>Descripción: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

// Comenzamos la clase
public class AdivinarNumero {

//MÉTODO MAIN
public static void main(String[] args)throws Exception  {
int numero=50,veces=0;
  int aleatorio;
  Random rand = new Random(); // en rand un aleatorio entre 0 y 100
  aleatorio=(int)((rand.nextDouble() * 100)+1);
  do{
  numero=validaNumero();
  veces++;
  compruebaNumero(numero,aleatorio,veces);
  }while(numero!=0 && numero!=aleatorio);//do principal. Salida con 0
}//main

//El siguiente método valida un numero entre 0 y 100
private static int validaNumero()throws Exception {
  int numero=50;
  InputStreamReader isr = new InputStreamReader(System.in);
  BufferedReader br = new BufferedReader (isr);
  do
  {
    if (numero<0 || numero>100)
      System.out.println("ERROR. Tenga en cuenta los límites.");
    System.out.println("Por Favor, introduzca un número entre 0 y 100");
    numero = Integer.parseInt(br.readLine());
  }while(numero<0 || numero>100);//do
  return numero;
  }//generaNumero

private static void compruebaNumero(int numero,int rand,int veces){
  if (numero>rand)
    System.out.println("El número introducido es menor");
    else if (numero<rand)
      System.out.println("El número introducido es mayor");
      else
        System.out.println("EXACTO. " + rand + " era el número buscado\nLo lograste en " + veces + " intentos");
}//compruebaNumero

}//class
