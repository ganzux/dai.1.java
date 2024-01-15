package hoja1ejercicio12;

/**
 * <p>Título: </p>
 * <p>Descripción: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class Principal {
  public static void main(String[] args) {

    Punto punto1 = new Punto(9,0);
    Punto punto2 = new Punto(2,-7);
    Punto punto3 = new Punto(-3,5);

    System.out.println(" punto 1 = ("+punto1.getX()+","+punto1.getX()+")");
    System.out.println(" punto 2 = ("+punto2.getX()+","+punto2.getY()+")");
    System.out.println(" punto 3 = ("+punto3.getX()+","+punto3.getY()+")");

    Circulo cir = new Circulo(punto1,punto2,punto3);
    System.out.println(" Circunferencia = "+cir);

  }
}
