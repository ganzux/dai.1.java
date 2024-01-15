package universidad;
import java.io.*;

public class Main{
public static void main(String[] args) throws Exception{

BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
int i=0,curso,precio;
String salir,nombre;
Alumno pepe = new Alumno();

  do
  {
// Leemos el nombre de la asignatura, valid�ndola como A, B o C:
    do
    {
      System.out.print( (i + 1) + ".- Deme el nombre de la Asignatura: --> ");
      nombre = in.readLine();
      if (nombre.compareTo("A")!=0 && nombre.compareTo("B")!=0 && nombre.compareTo("C")!=0)
        System.out.println("Error; Las asignaturas ser�n A, B o C.");
    }while(nombre.compareTo("A")!=0 && nombre.compareTo("B")!=0 && nombre.compareTo("C")!=0);

// Leemos el curso de la asignatura, validado entre 1 y 5
    do
    {
      System.out.print( (i + 1) + ".- Deme el curso de la Asignatura: --> ");
      curso = Integer.parseInt(in.readLine());
      if (curso<1 || curso>5)
        System.out.println("Error; Los cursos est�n comprendidos entre 1 y 5");
    }while(curso<1 || curso>5);

    if (nombre.compareTo("A")==0)
        precio=10;
      else if (nombre.compareTo("B")==0)
               precio=20;
        else
          precio=30;

   pepe.matricula[i] = new Asignatura(nombre,curso,precio);
// Preguntamos si quiere otra asignatura m�s, validando S/N:
    do
    {
      System.out.print("�Desea introducir otra Asignatura? (S/N) --> ");
      salir = in.readLine();
    }while(salir.compareTo("N")!=0 && salir.compareTo("S")!=0);
    i++;
  }while(salir.compareTo("N")!=0 && i<5);
   pepe.setSubjects(i);
  System.out.println("El precio total ser� de "+pepe.Matricular());
  }//main
}//class
