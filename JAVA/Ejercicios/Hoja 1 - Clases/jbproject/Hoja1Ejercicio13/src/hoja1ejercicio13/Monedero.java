/* Defina una clase 'Monedero' que permita gestionar la cantidad
   de dinero de que una persona dispone en un momento dado.

   La clase deber� tener un constructor que permitir� crear un monedero con una
   cantidad de dinero inicial y deber� definir un m�todo para meter dinero en el
   monedero, otro para sacarlo y finalmente, otro para consultar el disponible;
   solo podr� conocerse la cantidad de dinero del monedero a trav�s de este
   �ltimo m�todo. Por supuesto, no se podr� sacar m�s dinero del que haya
   en un momento dado en el monedero. */

package hoja1ejercicio13;

/**
 * <p>T�tulo: </p>
 * <p>Descripci�n: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class Monedero {
// Atributes
private int dinero;
// Metodes
  public void meterDinero(int x){
    if (x>0)
      dinero+=x;
    else
      System.out.println("S�lo puedes ingresar dinero positivo.");
}
  public void sacarDinero(int x){
    if (x<=dinero)
      dinero-=x;
    else
      System.out.println("Fondos Insuficinetes");
  }
  public int consultarSaldo(){
    return dinero;
  }
//Constructor
  public Monedero(int n) {
  dinero=n;
  }
}//class
