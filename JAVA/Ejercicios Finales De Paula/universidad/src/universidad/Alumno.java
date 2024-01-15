package universidad;

public class Alumno  implements Matricular{
//atributos
private String dni;
private String nombre;
public Asignatura matricula[] = new Asignatura[5];
private int subjects;
//getset
public void setSubjects(int x){
  subjects=x;
}
public void setDNI(String dni){
    this.dni=dni;
  }
public void setNombre(String nombre){
  this.nombre=nombre;
}
//constructor/es
public Alumno() {}

public Alumno(String dni, String nombre) {
  this.dni=dni;
  this.nombre=nombre;
  int i=0;
  for (i=0;i<5;i++)
    matricula[i] = new Asignatura();
}
////////////////    INTERFACES    ///////////////////////
public int Matricular(){
int i,suma=0;
  for(i=0;i<subjects;i++)
    suma+=matricula[i].getPrecio();
return suma;
}
public void Anular(){}
}//class
