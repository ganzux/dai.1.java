/*Para probarlo, cree un peque�o m�todo main que cree un objeto de la clase
 definida, que haga uso de los m�todos previamente definidos y vaya mostrando
 el estado de la bombilla. */

package hoja1ejercicio5;

/**
 * <p>T�tulo: </p>
 * <p>Descripci�n: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class ppal {

public static void main(String[] args) {
bombilla mibombilla = new bombilla (true);

System.out.println("El estado actual de la bombilla es "+mibombilla.GetEstado());

mibombilla.Apagar();
System.out.println("El estado actual de la bombilla es "+mibombilla.GetEstado());

mibombilla.Encender();
System.out.println("El estado actual de la bombilla es "+mibombilla.GetEstado());
  }

}
