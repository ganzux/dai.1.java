/* Para probar esta funcionalidad, escriba un m�todo main en el que se creen
 dos puntos, el primero de los cuales deber� tener las coordenadas
 100.0, 200.0 y el segundo deber� tener las coordenadas 400.0, 800.0
 y calcule e imprima la distancia entre ambos*/

package hoja1ejercicio6;

/**
 * <p>T�tulo: </p>
 * <p>Descripci�n: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class ppal {
  public ppal() {
  }
  public static void main(String[] args) {
 punto a = new punto (100,200);
 punto b = new punto (400,800);

 System.out.println("La Distancia entre los puntos es "+a.Distancia(b));
  }

}
