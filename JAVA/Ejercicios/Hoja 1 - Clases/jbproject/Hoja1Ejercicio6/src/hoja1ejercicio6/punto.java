/*6. Defina una clase punto que tendrá dos atributos, de tipo real, x e y,
 que representarán las coordenadas del punto dentro del plano.
 Defina un método que tenga como argumento otro objeto de la clase punto
 y que calcule la distancia entre los dos puntos. */

package hoja1ejercicio6;

/**
 * <p>Título: </p>
 * <p>Descripción: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class punto {

// Atributes
private float x;  // Coord x inside the plane
private float y;  // Coord y inside the plane

// Metodes

// Getters
public float GetX(){
  return x;
}
public float GetY(){
  return y;
}

public double Distancia(punto pto){
  return Math.sqrt( ( (pto.GetX()-x)*(pto.GetX()-x) ) + ( (pto.GetY()-y)*(pto.GetY()-y) ) );
}

// Constructor
public punto(float x, float y) {
  this.x=x;
  this.y=y;
}

}//class

