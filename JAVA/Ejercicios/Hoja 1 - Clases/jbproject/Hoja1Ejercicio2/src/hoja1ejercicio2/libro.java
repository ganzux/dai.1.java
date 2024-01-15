package hoja1ejercicio2;

/**
 * <p>Título: </p>
* <p>Descripción: 2. Defina una clase libro que pueda ser utilizada para
* representar los libros que hay en una biblioteca. Suponga que cada libro tiene
* los siguientes atributos:
•	Título
•	Autor
•	Año de publicación
•	Editorial
Escriba un método main donde creará dos objetos de la clase libro, y al final,
muestre los datos de cada uno de ellos.
</p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class libro {
/* private atributes */
private String titulo;
private String autor;
private int publicado;
private String editorial;

// GETTERS show by screen
public void GetTitulo(){
System.out.println(titulo);
};

public void GetAutor(){
System.out.println(autor);
};

public void GetPublicado(){
System.out.println(publicado);
};

public void GetEditorial(){
System.out.println(editorial);
};

// SETTERS set the value of the variable
public void SetTitulo(String titulo){
this.titulo=titulo;
};

public void SetAutor(String autor){
this.autor=autor;
};

public void SetPublicacion(int ano){
publicado=ano;
};

public void SetEditorial(String editorial){
this.editorial=editorial;
};

// CONSTRUCTOR
  public libro() {}
// Constructor with the four parametres
  public libro(String titulo, String autor, int year, String editorial){
  this.titulo=titulo;
  this.autor=autor;
  publicado=year;
  this.editorial=editorial;
  }

}
