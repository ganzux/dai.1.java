package guia1;

public class Cuadrado extends Figura{
//metodes
private int lado;
//constructors
  public Cuadrado() {}

  public Cuadrado(int lado) {
  super ("Cuadrado");
  this.lado=lado;
  }

  public Cuadrado(int lado, String codcolor) {
  super("Cuadrado",codcolor);
  this.lado=lado;
  }

//the orther metodes
  public void setLado(int lado){
    this.lado=lado;
  }
  public int getLado(){
    return lado;
  }

public void imprimeValores(){
System.out.println("Forma: "+super.getForma()+", Color: "+super.getColor()+", Lado: "+lado);
}

public float area(){
  return lado*lado;
}

}//class
