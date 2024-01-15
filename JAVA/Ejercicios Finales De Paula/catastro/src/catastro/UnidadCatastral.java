package catastro;

public class UnidadCatastral {
////////////////////////////////////////////////////////////////////////////////
private String refcatastral;
private String calle;
private String num;
private int dnipropietario;
////////////////////////////////////////////////////////////////////////////////
public void setReferencia(String refcatastral){
  this.refcatastral=refcatastral;
}
public void setCalle(String calle){
  this.calle=calle;
}
public void setNum(String num){
  this.num=num;
}
public void setDNI(int dni){
  dnipropietario=dni;
}
public String getReferencia(){
  return refcatastral;
}
public String getCalle(){
  return calle;
}
public String getNumero(){
  return num;
}
public int getDNI(){
  return dnipropietario;
}
////////////////////////////////////////////////////////////////////////////////
  public UnidadCatastral() {
  }
////////////////////////////////////////////////////////////////////////////////
  public void mostrarReferencias(){
    System.out.println("MOSTRAMOS LA REFERENCIA CATASTRAL DE UNA UNIDAD CATASTRAL\n");
    System.out.println("Referencia: "+refcatastral);
    System.out.println("Calle: "+calle);
    System.out.println("Número: "+num);
    System.out.println("DNI propietario: "+dnipropietario);
  }
}
