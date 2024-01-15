package catastro;

public class Local extends UnidadCatastral{
////////////////////////////////////////////////////////////////////////////////
private float superficie;
private String numlocal;
private String utilizacion;
////////////////////////////////////////////////////////////////////////////////
public void setSuperficie(float superficie){
  this.superficie=superficie;
}
public void setNumLocal(String numlocal){
  this.numlocal=numlocal;
}
public void setUtilizacion(String utilizacion){
  this.utilizacion=utilizacion;
}
public float getSuperficie(){
  return superficie;
}
public String getNumLocal(){
  return numlocal;
}
public String getUtilizacion(){
  return utilizacion;
}
////////////////////////////////////////////////////////////////////////////////
  public Local() {
  }
////////////////////////////////////////////////////////////////////////////////
  public void mostrarReferencias(){
    System.out.println("MOSTRAMOS LA REFERENCIA CATASTRAL DE UN LOCAL\n");
    System.out.println("Referencia: "+super.getReferencia());
    System.out.println("Calle: "+super.getCalle());
    System.out.println("Número: "+super.getNumero());
    System.out.println("DNI propietario: "+super.getDNI());
    System.out.println("Número de Local: "+numlocal);
    System.out.println("Superficie: "+superficie);
    System.out.println("Utilización: "+utilizacion);
  }

}
