  class Errores {

  public static void main(String[] args) {
  System.out.println("FPRG - Ejercicio 1"); // Debemos utilizar Comillas dobes

  int a = 10; // Falta el punto y coma ;
  int b = 3;
  System.out.println("Datos a operar: a="+a+" y b="+b); // Las comas han de ser
                                                        // substituidas por +
  System.out.println("La multiplicacion vale a*b");

  int c = a+b;
  System.out.println("La suma es "+a+b);
  System.out.println(a+b+" tambien es la suma");
  System.out.println("O lo que es lo mismo "+c);

  int d = a-b; // La variable c ya está definida, la llamaremos d
  System.out.println("La resta es "+c);
  System.out.println("La resta es tambien "+(a-b)); // mala parentización
  }
  }
