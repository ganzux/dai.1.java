package hoja1ejercicio9;

/**
 * <p>T�tulo: </p>
 * <p>Descripci�n: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class Ppal {
  public Ppal() {
  }
  public static void main(String[] args) {
    SerieAritmetica miserie = new SerieAritmetica(8,3);
    System.out.println("La Suma de los 5 primeros elementos es: "
        +miserie.sumaNPrimerosElementos(10));
  }

}
