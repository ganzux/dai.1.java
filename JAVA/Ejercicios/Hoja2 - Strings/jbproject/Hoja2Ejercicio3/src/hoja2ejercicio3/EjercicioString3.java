/*3. Crear una clase p�blica de nombre EjercicioString3 que contenga s�lo al
 m�todo main y mostrar por consola el n�mero de veces que aparecen las letras
 a, o y e en la String del ejercicio anterior. Adem�s, si el n�mero de veces
 que se repite la a es superior a 10 debe aparecer el mensaje "Exceso de a",
 si el n�mero de veces que se repite la o es superior a 5 debe mostrarse
 "Exceso de o" y si se repite m�s de 3 veces la letra e debe mostrarse
 "Exceso de e" */

package hoja2ejercicio3;

/**
 * <p>T�tulo: </p>
 * <p>Descripci�n: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class EjercicioString3 {

  static CuentaLaLetra cadena = new CuentaLaLetra();

  public static void main(String[] args) {

    System.out.println("La letra a aparece "+cadena.Cuenta('a')+" veces");
    System.out.println("La letra e aparece "+cadena.Cuenta('e')+" veces");
    System.out.println("La letra o aparece "+cadena.Cuenta('o')+" veces");

    if (cadena.Cuenta('a')>10)
      System.out.println("Exceso de a");
    if (cadena.Cuenta('e')>3)
      System.out.println("Exceso de e");
    if (cadena.Cuenta('o')>5)
      System.out.println("Exceso de o");
  }//main
}//class
