package ejerciciocamiones;
import java.io.*;

public class Main {//clase ppal

  public static void main(String[] args) {//inicio del main

    String codigo="",hacer="\0";              // para el codigo y la C/D
    int leoalmacen,aux;                       // para leer el almacen y auxiliar
    boolean barrera=false, salir;             // barrera se abrirá al meter 12345
    almacen misalmacenes[] = new almacen[3];  // creamos los almacenes y les pa-
    misalmacenes[0]=new almacen(1, 1);        // samos como parámetro la distan-
    misalmacenes[1]=new almacen(10,2);        // cia hasta la barrera de control
    misalmacenes[2]=new almacen(20,3);        // misalmacenes será un array.

    BufferedReader in = new BufferedReader(new InputStreamReader(System.in));


    try{//try1
      while (codigo.compareTo("-666")!=0) { // para salir introduciremos -666

        System.out.print("Por favor, deme el código (Salir = -666): \t");
        codigo = in.readLine(); // leemos el código

        if (codigo.compareTo("12345") == 0) // si es 12345
          barrera = true;                   // abriremos la barrera

        if (barrera == true) { // lo primero es cerrar para que no se cuele nadie
          barrera=false;       // y validamos que ponga un HACER correcto

          hacer="x";    // para que siempre entre.
          while (hacer.compareTo("c") != 0 && hacer.compareTo("d") != 0) {
            System.out.print("¿Qué desea hacer? ¿Cargar o Descargar? --> \t");
            hacer = in.readLine();

            if (hacer.compareTo("c") == 0)   // CARGA
            {
              aux=0;
              salir=false;
              while (salir==false && aux<3)
              {
                if (misalmacenes[aux].getOcupados() < misalmacenes[aux].getCapacidad())
                  {
                    misalmacenes[aux].sumaOcupados();
                    System.out.println("Se ha cargado el almacén "+(aux+1));
                    salir=true;
                  }
                aux++;
              }//while
              if (salir==false)
                System.out.println("No se ha podido cargar el almacén.");
             }//fin de la carga

            else if (hacer.compareTo("d") == 0)   // DESCARGA
            {
              aux=0;
              salir=false;
              while (salir==false && aux<3)
              {
                if (misalmacenes[aux].getOcupados() > 0)
                  {
                    misalmacenes[aux].restaOcupados();
                    System.out.println("Se ha descargado el almacén "+(aux+1));
                    salir=true;
                  }
                aux++;
              }//while
              if (salir==false)
                System.out.println("No se ha podido descargar ningún almacén.");

            }//fin de la descarga

            else
              System.out.println("\n\t¡Opción Incorrecta!\n");

            System.out.println("\nAlmacen 1: "+misalmacenes[0].getOcupados());
            System.out.println("Almacen 2: "+misalmacenes[1].getOcupados());
            System.out.println("Almacen 3: "+misalmacenes[2].getOcupados()+"\n");
          } //while(hacer!='c' o 'd')
        } // FIN del if de barrera TRUE

        else // si barrera es FALSE
          System.out.println("El código para la barrera es erróneo.\n\n");

      }//while(codigo!=-666) Fin del bucle principal

      System.out.println("Querido camionero, se puede ir usted a dormir :)");
      } //try1

      catch (IOException e) { //catch1
        System.out.println("Error de lectura.");
      } //catch1

  }//fin del main
}//fin de la clase ppal
