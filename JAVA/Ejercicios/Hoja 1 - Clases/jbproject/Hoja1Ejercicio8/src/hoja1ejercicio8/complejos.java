/*8. Escriba una clase que permita manejar n�meros complejos;
 defina m�todos para las cuatro operaciones fundamentales */

package hoja1ejercicio8;

/**
 * <p>T�tulo: </p>
 * <p>Descripci�n: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class complejos {
// Atributtes
  private int r; // A Complex Number is definned by a Real part (r) and
  private int i; // an Imaginary part (i). For Example 32 + 2i

// Metodes

  public complejos Suma(complejos a){
    complejos resultado = new complejos (0,0);
    resultado.r=a.r+r;
    resultado.i=a.i+i;
    return resultado;
  }

  public complejos Resta(complejos a){
    complejos resultado = new complejos (0,0);
    resultado.r=r-a.r;
    resultado.i=i-a.i;
    return resultado;
  }

  public complejos Producto(complejos c){
       int x=(r*c.r)-(i*c.i);
       int y=(r*c.i)+(i*c.r);
       return new complejos(x, y);
    }

  public complejos Cociente(complejos c){
       int aux, x, y;
            aux=c.r*c.r+c.i*c.i;
            x=(r*c.r+i*c.i)/aux;
            y=(i*c.r-r*c.i)/aux;
       return new complejos (x,y);
    }



// Metodes For The POLAR Form
  public double modulo(){
   return Math.sqrt(r*r+i*i);
}
public double argumento(){
   double angulo=Math.atan2(i, r);
   if(angulo<0)  angulo=2*Math.PI+angulo;
   return angulo*180/Math.PI;
}



// Getters And Setters
  public void SetR(int r){
    this.r=r;
  }
  public void SetI(int i){
  this.i=i;
}
  public int GetI(){
    return i;
  }
  public int GetR(){
    return r;
  }
// End Of Getters And Setters

// Constructor
  public complejos(int r, int i) {
  this.r=r;
  this.i=i;
  }
}
