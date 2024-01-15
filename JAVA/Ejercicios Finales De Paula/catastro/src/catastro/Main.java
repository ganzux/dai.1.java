package catastro;
import java.io.*;

public class Main {
public static void main(String[] args) {

try{
      int contador,crear=0,datoentero;
      String resp="0",resp2,dato;
      boolean salir=false;
      UnidadCatastral casas[] = new UnidadCatastral[10]; //array de 10 UnidadCatastral
      BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

      for (contador = 0; contador < 10; contador++) {
/* AVERIGÜAMOS QUE VIVIENDA QUEREMOS; para ello preguntaremos si quiere un local
         o una vivienda; si quiere un local, pondremos la variable crear a 1,
 pero si quiere vivienda, volvermeos a validar entre piso o chalet, que se
 corresponderán con los valores de crear 2 y 3.      */
        resp = "0";
        while (resp.compareTo("v") != 0 && resp.compareTo("l") != 0 )
        {
          System.out.print((contador+1)+". ¿Vivienda o Local? (v/l) -->\t\t");
          resp = in.readLine(); // leemos el código

          if (resp.compareTo("l")==0) // si es un local, crear será 1
            {
              crear = 1;   // y creamos el objeto de clase local
              casas[contador] = new Local();
            }
          else if (resp.compareTo("v")==0) // si es una vivienda, preguntaremos
          {                                // si es Piso o bien si es Chalet
            resp2="0";
            while (resp2.compareTo("p") != 0 && resp2.compareTo("c") != 0 )
            {
              System.out.print((contador+1)+". ¿Piso o Chalet? (p/c) -->\t\t");
              resp2 = in.readLine(); // leemos el código

              if (resp2.compareTo("p")==0) // si es un piso, crear=2
                {
                  crear = 2; // y creamos el objeto de clase piso
                  casas[contador] = new Piso();
                }
              else if (resp2.compareTo("c")==0)   // en otro caso, será un chalet
                {
                  crear = 3;  // creando el objeto de la clase Chalet
                  casas[contador] = new Chalet();
                }

              else
                System.out.println("Error: Pulse p para Piso o C para Chalet.");
             }//fin de la validacion Piso/chalet
          }//fin de vivienda
          else
            System.out.println("Error: Pulse v para Vivienda o L para Local.");
        } //while para preguntar si queremos Vivienda o Local

/*Ahora preguntaremos por los elementos comunes y haremos un switch para los
elementos distintivos.   */

// pedimos la referencia
        System.out.print("Referencia Catastral: ");
        dato = in.readLine();
        casas[contador].setReferencia(dato);
// pedimos la calle
        System.out.print("Calle: ");
        dato = in.readLine();
        casas[contador].setCalle(dato);
// el numero
        System.out.print("Número: ");
        dato = in.readLine();
        casas[contador].setNum(dato);
// y el DNI
        System.out.print("DNI del propietario: ");
        datoentero = Integer.parseInt(in.readLine());
        casas[contador].setDNI(datoentero);
// Ahora pediremos según sea una u otra cosa mediante el if y luego switch:
        if (crear==1)  //Si es Local
        {
          System.out.print("Número de local: ");
          dato = in.readLine();
          ((Local)casas[contador]).setNumLocal(dato);

          System.out.print("Superficie: ");
          datoentero = Integer.parseInt(in.readLine());
          ((Local)casas[contador]).setSuperficie((float)datoentero);

          System.out.print("Utilizacion: ");
          dato = in.readLine();
          ((Local)casas[contador]).setUtilizacion(dato);
        }
        else // Si NO es local
        {
            System.out.print("Superficie: ");
            datoentero = Integer.parseInt(in.readLine());
            ((Vivienda)casas[contador]).setSuperficie((float)datoentero);

            System.out.print("Material: ");
            dato = in.readLine();
            ((Vivienda)casas[contador]).setMaterial(dato);
          //Ahora distinguimos entre Piso y Chalet
          switch(crear)
             {
             case 2:
             System.out.print("Número: ");
             dato = in.readLine();
             ((Piso)casas[contador]).setNumero(dato);

             System.out.print("Escalera: ");
             dato = in.readLine();
             ((Piso)casas[contador]).setEscalera(dato);

             System.out.print("Puerta: ");
             dato = in.readLine();
             ((Piso)casas[contador]).setPuerta(dato);
             break;

             case 3:
             System.out.print("Número: ");
             dato = in.readLine();
             ((Chalet)casas[contador]).setNumero(dato);

             System.out.print("Metros Cuadrados: ");
             datoentero = Integer.parseInt(in.readLine());
             ((Chalet)casas[contador]).setM2Parcela(datoentero);
             break;
             }  //   PISO/VIVIENDA

        }//Fin de si no es local, o sea, si es vivienda
      } //for de 10 referencias

///////////////////////// ************************ \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
        // // // Ya hemos pedido todas las referencias, MENU \\ \\ \\
///////////////////////// ************************ \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
       datoentero=1;
        while (datoentero!=4)
        {
          System.out.println("\tMENU");
          System.out.println("\t====\n");
          System.out.println("1.\tMostrar Referencia Catastral");
          System.out.println("2.\tMostrar Referencia de Una persona por Su DNI");
          System.out.println("3.\tMostrar todas las referencias de una Calle");
          System.out.println("4.\tFIN");
          datoentero = Integer.parseInt(in.readLine());

          switch(datoentero){
            case 1:
              System.out.print("Deme la Referencia que desea mostrar: ");
              resp=in.readLine();
              contador=0;
              salir=false;
              do{
                if (casas[contador].getReferencia().compareTo(resp)==0)
                  {
                    casas[contador].mostrarReferencias();
                    salir=true;
                  }
                contador++;
              }while(contador<10 && salir==false);
            break;

            case 2:
              System.out.print("Deme el D.N.I. a buscar: ");
              int datoentero2=Integer.parseInt(in.readLine());
              contador=0;
              salir=false;
              do{
                if (casas[contador].getDNI()==datoentero2)
                  {
                    casas[contador].mostrarReferencias();
                    salir=true;
                  }
                contador++;
              }while(contador<10 && salir==false);

            break;

            case 3:
              System.out.print("Deme la calle a buscar: ");
              resp=in.readLine();
              contador=0;
              do{
                if (casas[contador].getCalle().compareTo(resp)==0)
                    casas[contador].mostrarReferencias();
                contador++;
              }while(contador<10);

            break;

            case 4:
              System.out.println("Salimos...");
            break;

            default:
              System.out.println("Opción no válida, por favor, repita.");
          }//switch del menu
        }//while del menú
    }//try

catch(IOException e){
  System.out.println("Error");
}

finally{
  System.out.println("\n\n\n\t\tPROGRAMA FINALIZADO");
}
  }//main
}//class
