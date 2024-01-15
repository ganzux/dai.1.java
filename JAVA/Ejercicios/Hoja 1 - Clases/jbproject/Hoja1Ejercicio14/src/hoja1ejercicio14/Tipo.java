/*14. Escriba una clase en la que se defina un m�todo que escriba por pantalla
 el tipo de argumento que se le pasa como par�metro. Ejemplo: si se le pasa un
 car�cter (char), que imprima algo del tipo "Soy un car�cter".
 Esta clase deber� ser capaz de detectar todos los tipos primitivos de Java.*/


// http://pjsml.50megs.com/java/variables2.html
package hoja1ejercicio14;

/**
 * <p>T�tulo: Tipo</p>
 * <p>Descripci�n: Devuelve el tipo de dato introducido :)</p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class Tipo {
 // Attributes

 int entero;
 float decimal;
 double doble;
 String cadena;
 char caracter;
 boolean boleano;
 long largo;
 short corto;
 byte bait;


  public Tipo(int entero) {
  System.out.println("Has introducido un entero.");
  }

  public Tipo(float decimal) {
  System.out.println("Has introducido un decimal.");
  }

  public Tipo(double doble) {
  System.out.println("Has introducido un doble.");
  }

  public Tipo(String cadena) {
  System.out.println("Has introducido una cadena.");
  }

  public Tipo(char caracter) {
  System.out.println("Has introducido un caracter.");
  }

  public Tipo(boolean boleano) {
  System.out.println("Has introducido un Booleano.");
  }

  public Tipo(long largo) {
  System.out.println("Has introducido un largo.");
  }

  public Tipo(short corto) {
  System.out.println("Has introducido un corto.");
  }

  public Tipo(byte bait) {
  System.out.println("Has introducido un Byte.");
  }


  public static void main(String[] args) {
    Tipo tipo1 = new Tipo(0);
  }

}
