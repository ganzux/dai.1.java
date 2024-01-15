/*12. Si (x1,y1), (x2,y2) y (x3,y3) son las coordenadas de tres puntos del plano,
 entonces el siguiente fragmento de programa calcula el centro (x,y) y
 el radio (r) de la circunferencia que pasa por ellos.
 -------------------------------------------------------------------------------
    double a = 2*(x2-x1);
    double b = 2*(y2-y1);
    double c = x1*x1+y1*y1-x2*x2-y2*y2;
    double d = 2*(x3-x1);
    double e = 2*(y3-y1);
    double f = x1*x1+y1*y1-x3*x3-y3*y3;
--------------------------------------------------------------------------------
    y = (f*a-c*d)/(b*d-e*a);
    x = -b/a*y-c/a;
    r = Math.sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
--------------------------------------------------------------------------------
Cree una clase llamada Circunferencia, que tenga como atributos las coordenadas
 de su centro (x,y) y su radio (r), y con un constructor que tome como
 argumentos las coordenadas de tres puntos por los que pase.  */

package hoja1ejercicio12;
import java.lang.*;
/**
 * <p>Título: </p>
 * <p>Descripción: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class Circulo {
 // Attributes

 private double radio;
Punto centro = new Punto();

 // Contructor
 public Circulo(Punto point1,Punto point2,Punto point3) {

  double a = 2*(point2.getX()-point1.getX());
  double b = 2*(point2.getY()-point1.getY());
  double c = point1.getX()*point1.getX()+point1.getY()*point1.getY()-point2.getX()*point2.getX()-point2.getY()*point2.getY();
  double d = 2*(point3.getX()-point1.getX());
  double e = 2*((point3.getY()-point1.getY()));
  double f = point1.getX()*point1.getX()+point1.getY()*point1.getY()-point3.getX()*point3.getX()-point3.getY()*point3.getY();
  double y=((f*a-c*d)/(b*d-e*a));
  double x=(-b/a*y-c/a);

  centro.setY(y);
  centro.setX(x);
  radio = Math.sqrt((point1.getX()-centro.getX())*(point1.getX()-centro.getX())+(point1.getY()-centro.getY())*(point1.getY()-centro.getY()));
  }//contructor

/* Redefina también el método toString para que represente las
   circunferencias como Strings de la forma "<(x,y),r>" */

public String toString (){
  return "("+centro.getX()+","+centro.getY()+"), "+radio;
}//toString

}//class
