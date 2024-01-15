package universidad;

public class Asignatura {
//Atributos
private String nombre;
private int curso;
private int precio;
//getset
public void setNombre(String nombre){
  this.nombre=nombre;
}
public void setCurso(int curso){
  this.curso=curso;
}
public void setPrecio(int precio){
  this.precio=precio;
}
public String getNombre(){
  return nombre;
}
public int getPrecio(){
  return precio;
}
public int getcurso(){
  return curso;
}
//constructor por defecto
public Asignatura() {}
//constructor que recibe los tres astributos
public Asignatura(String nombre,int curso, int precio){
  this.nombre=nombre;
  this.precio=precio;
  this.curso=curso;
}
}//class
