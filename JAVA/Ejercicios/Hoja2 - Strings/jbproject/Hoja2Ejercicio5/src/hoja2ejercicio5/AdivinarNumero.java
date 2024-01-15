/* 5. Realizar un programa Java compuesto de una clase p�blica de nombre
 AdivinarNumero que contenga s�lo al m�todo main.

Su objetivo ser� permitir que el usuario averig�e un n�mero entero generado
 aleatoriamente y comprendido entre [0,100] que se almacenar�, dentro del
 c�digo del programa, en una variable int a la que se llamar� numero.

El programa pedir� un n�mero por teclado e informar� de si el n�mero que
 introduce el usuario es mayor o menor que el que se trata de averiguar.
 Si no se acierta a la primera, no importa porque tiene que dejar introducir
 n�meros de forma ininterrumpida. Cuando el usuario acierte, se mostrar� un
 mensaje de felicitaci�n y el n�mero de intentos empleados.   */


package hoja2ejercicio5;
import java.io.*;
import java.util.*;
/**
 * <p>T�tulo: </p>
 * <p>Descripci�n: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

// Comenzamos la clase
public class AdivinarNumero {

//M�TODO MAIN
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

//El siguiente m�todo valida un numero entre 0 y 100
private static int validaNumero()throws Exception {
  int numero=50;
  InputStreamReader isr = new InputStreamReader(System.in);
  BufferedReader br = new BufferedReader (isr);
  do
  {
    if (numero<0 || numero>100)
      System.out.println("ERROR. Tenga en cuenta los l�mites.");
    System.out.println("Por Favor, introduzca un n�mero entre 0 y 100");
    numero = Integer.parseInt(br.readLine());
  }while(numero<0 || numero>100);//do
  return numero;
  }//generaNumero

private static void compruebaNumero(int numero,int rand,int veces){
  if (numero>rand)
    System.out.println("El n�mero introducido es menor");
    else if (numero<rand)
      System.out.println("El n�mero introducido es mayor");
      else
        System.out.println("EXACTO. " + rand + " era el n�mero buscado\nLo lograste en " + veces + " intentos");
}//compruebaNumero

}//class
