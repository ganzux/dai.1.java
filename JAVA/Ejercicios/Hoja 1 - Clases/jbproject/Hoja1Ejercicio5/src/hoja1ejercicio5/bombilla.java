/* 5. Defina una clase que sirva para representar el estado de una bombilla
 (encendido o apagado). Defina, asimismo, dos métodos que permitan encender (on)
 y apagar (off) la luz de la bombilla.*/


package hoja1ejercicio5;

/**
 * <p>Título: bombilla</p>
 * <p>Descripción: nos dice el estado de la bombilla</p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class bombilla {

// Atributes
private boolean estado;

// Metodes
public void Encender(){
  estado=true;
}

public void Apagar(){
  estado=false;
}

// Getter
public boolean GetEstado(){
  return estado;
}

// Constructor
public bombilla(boolean estado) {
this.estado=estado;
  }
}
