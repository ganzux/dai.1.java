/*7. Se desea llevar un control del estado de una cuenta corriente;
 la cuenta corriente est� caracterizada por su saldo y sobre ella
 se pueden realizar tres tipos de operaciones:

�	saldo: devuelve el saldo de la cuenta (puede ser negativo).
�	imposici�n (cantidad): ingresa en la cuenta una cantidad de dinero.
�	reintegro (cantidad): saca de la cuenta una determinada cantidad de dinero.

Suponga que la cuenta inicialmente tiene un saldo de cero.
 Escriba una clase CuentaCorriente que implemente la funcionalidad descrita;
 escriba un peque�o programa principal para probar su funcionamiento */

package hoja1ejercicio7;

/**
 * <p>T�tulo: </p>
 * <p>Descripci�n: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class CuentaCorriente {
// Atributes
  private int saldo;

// Metodes

public void imposicion(int money){
  saldo=saldo+money;
}

public void reintegro(int money){
  saldo=saldo-money;
}

// Getter
  public int GetSaldo(){
    return saldo;
  }
// Setter
  public void SetSaldo(int saldo){
    this.saldo=saldo;
  }

  public CuentaCorriente() {
    saldo=0;
  }

  }
