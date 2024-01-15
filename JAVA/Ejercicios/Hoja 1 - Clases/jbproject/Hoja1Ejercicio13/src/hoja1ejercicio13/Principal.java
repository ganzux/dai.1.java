package hoja1ejercicio13;
import java.io.*;

/**
 * <p>Título: </p>
 * <p>Descripción: </p>
 * <p>Copyright: Copyright (c) 2006</p>
 * <p>Empresa: </p>
 * @author sin atribuir
 * @version 1.0
 */

public class Principal {

  public static void main(String[] args) throws Exception {
  String opcion;
  BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
  Monedero cartera = new Monedero(100);
  int valor,dinero;
  do{
      System.out.println("TU CARTERA\n1. Sacar\n2. Meter\n3. Ver\n4. Salir");
      opcion = in.readLine();
      valor = Integer.parseInt(opcion); // pasamos la variable a entero

      switch (valor){
        case 1:
          System.out.println("Deme la cantidad a sacar: ");
          opcion = in.readLine();
          dinero = Integer.parseInt(opcion);
          cartera.sacarDinero(dinero);
          break;

        case 2:
          System.out.println("Deme la cantidad a meter: ");
          opcion = in.readLine();
          dinero = Integer.parseInt(opcion);
          cartera.meterDinero(dinero);
          break;

        case 3:
          System.out.println("Su saldo es "+cartera.consultarSaldo());
          break;
      }//case
    }while ( valor != 4 );//do

  }//main

}//class
