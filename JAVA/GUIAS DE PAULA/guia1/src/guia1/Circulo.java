package guia1;

public class Circulo extends Figura{
//metodes
private float radio;
//constructors
  public Circulo() {}

  public Circulo(float radio){
    super ("Circulo");
    this.radio=radio;
  }

  public Circulo(float radio, String codcolor){
    super ("Circulo",codcolor);
    this.radio=radio;
  }

//the orther metodes
  void setRadio(float radio){
    this.radio=radio;
  }

  float getRadio(){
    return radio;
  }

  public void cambiarColor(int codcolor){
  codcolor++;
  if (codcolor>=9)
    codcolor=1;
  super.cambiarColor(codcolor);
  }

  public void imprimeValores(){
  System.out.println("Forma: "+super.getForma()+", Color: "+super.getColor()+", Radio: "+radio);
}

public void dibujar(){
  System.out.println("Estoy dibujando un Círculo con radio "+radio);
}

public void colorear(){
  System.out.println("Estoy dibujando un circulo con el color "+getColor());
}

public float area(){
  return (float)Math.PI*radio*radio;
}

}//class
