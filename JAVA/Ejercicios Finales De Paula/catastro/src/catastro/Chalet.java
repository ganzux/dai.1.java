package catastro;

public class Chalet extends Vivienda {
////////////////////////////////////////////////////////////////////////////////
  private String numero;
  private int m2parcela;

////////////////////////////////////////////////////////////////////////////////
  public void setNumero(String numero) {
    this.numero = numero;
  }

  public void setM2Parcela(int metros) {
    m2parcela = metros;
  }

  public String getNumero() {
    return numero;
  }

  public int getM2Parcela() {
    return m2parcela;
  }

////////////////////////////////////////////////////////////////////////////////
  public Chalet() {
  }

////////////////////////////////////////////////////////////////////////////////
  public void mostrarReferencias() {
    System.out.println("MOSTRAMOS LA REFERENCIA CATASTRAL DE UN PISO\n");
    System.out.println("Referencia: " + super.getReferencia());
    System.out.println("Calle: " + super.getCalle());
    System.out.println("Número: " + super.getNumero());
    System.out.println("DNI propietario: " + super.getDNI());
    System.out.println("Superficie: " + super.getSuperficie());
    System.out.println("Material: " + super.getMaterial());
    System.out.println("Número: " + numero);
    System.out.println("Metros: " + m2parcela);
  }
}//class
