/*6. Defina una clase que permita calcular la suma, media y el m�ximo de una
 lista de n�meros enteros positivos que se introducen por teclado; la entrada
 acabar� cuando se introduzca un n�mero entero negativo.

Para leer por la entrada est�ndar puede utilizar el m�todo readLine()
 de la clase BufferedReader y para identificar el entero le�do,
 el m�todo "int Integer.parseInt(String)".
*/

package hoja2ejercicio6;
import java.io.*;

/**
 * <p>T�tulo: </p>
 * <p>Descripci�n: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0*/


// Comenzamos la clase
public class Principal {

//M�TODO MAIN
public static void main(String[] args)throws Exception  {
validaNumero();
}//main

//El siguiente m�todo valida un numero
private static void validaNumero()throws Exception {

  int maximo=0,cantidad=0,numero=0;
  double suma=0;
  float media=0;

  InputStreamReader isr = new InputStreamReader(System.in);
  BufferedReader br = new BufferedReader (isr);

  do
  {
     System.out.println("Por Favor, introduzca un n�mero: ");
    numero = Integer.parseInt(br.readLine());

  if (numero>0)
    {
    suma+=numero;
    cantidad++;
    if (numero>maximo)
      maximo=numero;
    }//if numero>0
  }while(numero>0);//do
  System.out.println("El m�ximo valor es: "+maximo);
  System.out.println("La media es: "+(suma/cantidad));
  System.out.println("El sumatorio es: "+suma);
  }//validaNumero

}//class
