package hoja2ejercicio4;
import java.lang.*;
/**
 * <p>T�tulo: </p>
 * <p>Descripci�n: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class ComprobarNIF {
  public static void main(String[] args) {
    String letras="TRWAGMYFPDXBNJZSQVHLCKE";
    String nif="12345678V";
    mostrarMensaje(nif,comprobar(nif));
  }//main

  static boolean comprobar(String nif){
  boolean correcto=false;
  int n;
  int resto;
  // 1� Comprobaci�n: Longitud=9
  if (nif.length()==9)
  {
  correcto=true;
    // Si la longitud es 9 reservamos memoria para el �ltimo caracter
  Character letra = new Character(nif.charAt(8));
  // 2� Comprobaci�n: �ltimo car�cter es una letra. Entraremos SI Y S�LO SI
  // Se ha cumplido que la longitud sea 9.
  // Entonces, si el ultimo caracter no es letra, est� mal
  if (letra.isLetter(nif.charAt(8))!=true)
      correcto=false;
  // En caso de que sea letra, terminamos comprobando los otros 8 d�gitos.
  else
    {// bucle de 0 a 7
      for (n = 0; n < 7; n++)
         if (letra.isDigit(nif.charAt(n))!=true)
           correcto=false;
    }//else del bucle
  }//longitud=9
  return correcto;
  }//comprobar

  static void mostrarMensaje(String nif,boolean nifValido){
  if (nifValido==true)
  {
    System.out.println(nif+" es un NIF v�lido.");
    System.out.println("Parte num�rica del NIF: "+nif.substring(0,8));
  }//if
  else
    System.out.println(nif+" no es un NIF v�lido.");
  }//mostrarMensaje

}//class
