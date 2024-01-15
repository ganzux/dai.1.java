package catastro;

public class Vivienda extends UnidadCatastral{
////////////////////////////////////////////////////////////////////////////////
private float superficie;
private String material;
////////////////////////////////////////////////////////////////////////////////
public void setSuperficie(float superficie){
  this.superficie=superficie;
}
public void setMaterial(String material){
  this.material=material;
}
public float getSuperficie(){
  return superficie;
}
public String getMaterial(){
  return material;
}
////////////////////////////////////////////////////////////////////////////////
  public Vivienda() {
  }
////////////////////////////////////////////////////////////////////////////////
  public void mostrarReferencias(){
    System.out.println("MOSTRAMOS LA REFERENCIA CATASTRAL DE UNA VIVIENDA\n");
    System.out.println("Referencia: "+super.getReferencia());
    System.out.println("Calle: "+super.getCalle());
    System.out.println("Número: "+super.getNumero());
    System.out.println("DNI propietario: "+super.getDNI());
    System.out.println("Superficie: "+superficie);
    System.out.println("Material: "+material);
  }

}
