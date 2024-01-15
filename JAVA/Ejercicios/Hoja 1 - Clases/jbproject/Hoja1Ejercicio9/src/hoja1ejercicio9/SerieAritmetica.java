/* 9. Defina una clase que permita representar una serie aritm�tica;
 una serie aritm�tica viene caracterizada por el primer elemento de la serie
 y el incremento o diferencia entre dos elementos sucesivos de la serie.

 Implemente un m�todo en esta clase que permita calcular la suma de los n
 primeros elementos de la serie (utilice un bucle para realizar esta operaci�n). */

package hoja1ejercicio9;

/**
 * <p>T�tulo: </p>
 * <p>Descripci�n: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class SerieAritmetica {
// Atributes
  private int primerelemento;
  private int incremento;
// Metodes

  //Getters And Setters
  public int getPrimerElemento(){
    return primerelemento;
  }

  public int getIncremento(){
    return incremento;
  }

  public void setPrimerElementro(int value){
    primerelemento=value;
  }

  public void setIncremento(int value){
    incremento=value;
  }
// End of getters and setters

// General term of the arithmetic sucesion

  private int sucesionEnN(int n){
    return (primerelemento+((n-1)*incremento));
  }

  public int sumaNPrimerosElementos(int n){
    int resultado=0,i;

    if (n%2==0) // Si es par
      resultado=(primerelemento+sucesionEnN(n))*(n/2);

    else // Si es impar
      resultado=(primerelemento+sucesionEnN(n))*(n/2)+sucesionEnN((n/2)+1);

    return resultado;
  }

  public void escribeLaSucesion(int n){
    int i=0;
    for (i=1;i<=n;i++){
      System.out.println("Elemento "+i+": "+sucesionEnN(i));
    }
  }

//Constructor
  public SerieAritmetica(int primero, int incremento) {
  primerelemento=primero;
  this.incremento=incremento;
  }
}//class
