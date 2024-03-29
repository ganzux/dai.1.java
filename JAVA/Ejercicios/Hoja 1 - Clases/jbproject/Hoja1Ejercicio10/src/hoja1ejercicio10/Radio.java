package hoja1ejercicio10;

/**
 * <p>T�tulo: radio</p>
 * <p>Descripci�n: emula una radio</p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class Radio {
//attributes
  private int frecuencia=80;
//metodes
// getters y setters
  public void setFrecuencia(boolean valor){
    if (valor==true) //si le pasamos un true, subimos 5 ptos la frecuencia
      frecuencia+=5;
    else // si por el contrario es false, bajamos 5 ptos la frecuencia
      frecuencia-=5;
    compruebaFrecuencia();
  }

  public int getFrecuencia(){
    return frecuencia;
  }
// Fin de getters y setters
// compruebafrecuencia comprobar� que est� en el rangoi adecuado
  private void compruebaFrecuencia(){
    if (frecuencia<80)       // Si la frecuencia baja de 80
      frecuencia=108;        // le daremos el valor superior, 108.
    else if (frecuencia>108) // Por el contrario, SI es mayor de 108
      frecuencia=80;         // la bajaremos hasta 80
  }

// constructor
  public Radio() {}
}//main
