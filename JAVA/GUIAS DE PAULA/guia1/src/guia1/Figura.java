package guia1;

public class Figura  implements Visualizar, Dibujar{
// Attributes
private String forma;
private String color;

// Constructors
public Figura() {}

public Figura(String forma) {
  this.forma=forma;
  }
public Figura(String forma, String color) {
  this.forma=forma;
  this.color=color;
  }
public Figura(String forma, int codColor) {
  this.forma=forma;
  color=transformaColor(codColor);
  }
// There are no more constructors
// Metodes of the class
  private String transformaColor(int codigo)
  {
    String Cadena="";
    switch(codigo)
      {
        case 1:
        Cadena="Blanco";
        break;

        case 2:
        Cadena="Verde";
        break;

        case 3:
        Cadena="Azul";
        break;

        case 4:
        Cadena="Rojo";
        break;

        case 5:
        Cadena="Naranja";
        break;

        case 6:
        Cadena="Violeta";
        break;

        case 7:
        Cadena="Amarillo";
        break;

        case 8:
        Cadena="Marrón";
        break;

        default:
        Cadena="Negro";
      }//case

    return Cadena;
  }//transformacolor

public void cambiarColor(String colornuevo){
  color=colornuevo;
}

public void cambiarColor(int colornuevo){
  color=transformaColor(colornuevo);
}

public void imprimeValores(){
  System.out.println("Forma: "+forma+", Color: "+color);
}
// Getters And Setters
public String getForma(){
  return forma;
}

public String getColor(){
  return color;
}

void setForma(String forma){
  this.forma=forma;
}

void setColor(String color){
  this.color=color;
}

public void visualizarFigura(){
  System.out.println("Figura con la forma " +forma+ " y el color " +color);
}

public void dibujar(){
  System.out.println("Estoy dibujando una figura con la forma "+forma);
}

public void colorear(){
  System.out.println("Estoy dibujando una figura con el color "+color);
}

public Figura figuraAleatoria(){
  Figura fig =new Figura();
  int aleat = (int)(Math.random()*10%2); //numero aleatorio entre 0 y 1
  int ladrad = (int)(Math.random()*100%25+1); //numero aleatorio entre 1 y 25
  int color = (int)(Math.random()*10%9+1); //numero aleatorio entre 1 y 8
  if (aleat==0)
    fig = new Cuadrado(ladrad,transformaColor(color));
  else
    fig = new Circulo(ladrad,transformaColor(color));

  return fig;
    }

}//class
