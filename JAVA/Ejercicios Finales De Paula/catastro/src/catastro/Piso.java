package catastro;

public class Piso extends Vivienda {
////////////////////////////////////////////////////////////////////////////////
private String numero;
private String escalera;
private String puerta;
////////////////////////////////////////////////////////////////////////////////
public void setNumero(String numero){
  this.numero=numero;
}
public void setEscalera(String escalera){
  this.escalera=escalera;
}
public void setPuerta(String puerta){
  this.puerta=puerta;
}
public String getNumero(){
  return numero;
}
public String getEscalera(){
  return escalera;
}
public String getPuerta(){
  return puerta;
}
////////////////////////////////////////////////////////////////////////////////
  public Piso() {
  }
////////////////////////////////////////////////////////////////////////////////
  public void mostrarReferencias(){
    System.out.println("MOSTRAMOS LA REFERENCIA CATASTRAL DE UN PISO\n");
    System.out.println("Referencia: "+super.getReferencia());
    System.out.println("Calle: "+super.getCalle());
    System.out.println("Número: "+super.getNumero());
    System.out.println("DNI propietario: "+super.getDNI());
    System.out.println("Superficie: "+super.getSuperficie());
    System.out.println("Material: "+super.getMaterial());
    System.out.println("Número: "+numero);
    System.out.println("Escalera: "+escalera);
    System.out.println("Puerta: "+puerta);
  }
}
