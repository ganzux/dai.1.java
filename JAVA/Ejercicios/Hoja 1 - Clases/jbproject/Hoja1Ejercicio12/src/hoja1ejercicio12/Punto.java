package hoja1ejercicio12;

/**
 * <p>T�tulo: </p>
 * <p>Descripci�n: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class Punto {
// Atributes
  private double x;
  private double y;
// Constructor
  public Punto() {}

  public Punto(double x, double y){
    this.x=x;
    this.y=y;
  }

// Setters
  public void setX(double x){
    this.x=x;
  }

  public void setY(double y){
    this.y=y;
  }
// Getters
  public double getX(){
    return x;
  }

  public double getY(){
    return y;
  }
}//class
