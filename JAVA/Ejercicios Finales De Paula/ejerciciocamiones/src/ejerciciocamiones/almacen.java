package ejerciciocamiones;

public class almacen {
//Atributos
private int distancia;
private int capacidad;
private int ocupados;

//Getters y setters
public void setOcupados(int ocupados){
  this.ocupados=ocupados;
}
public void setDistancia(int distancia){
  this.distancia=distancia;
}
public void setCapacidad(int capacidad){
  this.capacidad=capacidad;
}
public int getCapacidad(){
  return capacidad;
}
public int getDistancia(){
  return distancia;
}
public int getOcupados(){
  return ocupados;
}
// Constructor: siempre le pasas distancia y capacidad la pone a cero
public almacen(int distancia, int capacidad) {
  this.distancia=distancia;
  this.capacidad=capacidad;
  ocupados=0;
  }
// suma uno o reste uno a la varible ocupados
public void sumaOcupados(){
  ocupados++;
}
public void restaOcupados(){
  ocupados--;
}

}//class almacen
