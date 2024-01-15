package hoja1ejercicio7;

/**
 * <p>Título: </p>
 * <p>Descripción: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class ppal {
  public static void main(String[] args) {
// We create the cuenta
CuentaCorriente cuenta = new CuentaCorriente();

System.out.println("Saldo Actual: "+cuenta.GetSaldo());

cuenta.reintegro(100);
System.out.println("Saldo Actual: "+cuenta.GetSaldo());

cuenta.imposicion(60);
System.out.println("Saldo Actual: "+cuenta.GetSaldo());

cuenta.imposicion(600);
System.out.println("Saldo Actual: "+cuenta.GetSaldo());
  }

}
