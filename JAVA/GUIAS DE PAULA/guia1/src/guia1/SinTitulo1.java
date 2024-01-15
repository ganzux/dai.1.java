package guia1;
public class SinTitulo1{//class
  public static void main(String[] args) {//main

    Figura tabla[] = new Figura[10];

for (int i=0;i<10;i++){//for
  tabla[i] = new Figura();
  tabla[i]=tabla[i].figuraAleatoria();
  tabla[i].visualizarFigura();
}//for

}//main
}//class
