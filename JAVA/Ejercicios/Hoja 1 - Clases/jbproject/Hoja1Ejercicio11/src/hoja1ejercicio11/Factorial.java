package hoja1ejercicio11;

/**
 * <p>T�tulo: </p>
 * <p>Descripci�n: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class Factorial {
// Attributes
  private int numero;

// Metodes

  // Getters And Setters
  public void setNumero(int n){
    numero=n;
  }
  public int getNumero(){
    return numero;
  }
  // End Of Getters And Setters

  // Metod that returns factorial�s number
  public double factorial(){
    int contador=0;
    double multiplicador=1;
    for (contador=1;contador<=numero;contador++)
      multiplicador*=contador;
    return multiplicador;
  }

  //Construsctor
  public Factorial(int x) {
  numero=x;
  }
}//class
