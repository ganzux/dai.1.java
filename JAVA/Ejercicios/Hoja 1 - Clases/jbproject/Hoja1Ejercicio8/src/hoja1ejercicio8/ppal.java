package hoja1ejercicio8;

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

    complejos a = new complejos(0, 0);
    complejos b = new complejos(0, 0);

    System.out.println("A: "+a.GetR()+" + "+a.GetI()+" i");
    System.out.println("B: "+b.GetR()+" + "+b.GetI()+" i");

    System.out.println("A + B = "+a.Suma(b).GetR()+" + "+a.Suma(b).GetI()+" i");
    System.out.println("A - B = "+a.Resta(b).GetR()+" + "+a.Resta(b).GetI()+" i");
    System.out.println("A * B = "+a.Producto(b).GetR()+" + "+a.Producto(b).GetI()+" i");
    System.out.println("A / B = "+a.Cociente(b).GetR()+" + "+a.Cociente(b).GetI()+" i");
  }
}//class
