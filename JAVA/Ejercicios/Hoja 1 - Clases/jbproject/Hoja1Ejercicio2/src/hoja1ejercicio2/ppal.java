package hoja1ejercicio2;
import java.util.*;
import java.awt.*;import java.awt.event.*;import javax.swing.*;

public class CalculadoraPolinomio extends javax.swing.JFrame {
    private MiOyente escucha = new MiOyente();
    private StringBuffer texto  = new StringBuffer();
    private String operacion;
    private ArrayList polinomio = new ArrayList();
    private Polinomio polinomio1, polinomio2;
    private String tipo;
    private StringBuffer coeficiente = new StringBuffer();
    private StringBuffer indice = new StringBuffer();
    private monomio mono;
    private String signo = "+";
    private int cogecoeficiente = 1;
    private int cogeindice = 0;
    private int cogen = 0;
    private double mivalor = 0.0;
    private int max = 5,min = -5;
    private int primera = 1;

    public CalculadoraPolinomio() {
        initComponents();
        indice.append("0");
    }

    private void initComponents() {
        setSize(400,350);
        setResizable(false);
        ImageIcon miImagen = new ImageIcon("..\\practica3\\ejercicio2\\borja2.GIF");
        setIconImage(miImagen.getImage());
        jPanel2 = new javax.swing.JPanel();
        jTextField2 = new javax.swing.JTextField();
        jPanel3 = new javax.swing.JPanel();
        jPanel1 = new javax.swing.JPanel();
        jTextField1 = new javax.swing.JTextField();
        jTextField4 = new javax.swing.JTextField();
        jPanel5 = new javax.swing.JPanel();
        jButton22 = new javax.swing.JButton();
        jButton23 = new javax.swing.JButton();
        jPanel4 = new javax.swing.JPanel();
        jButton1 = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();
        jButton3 = new javax.swing.JButton();
        jButton4 = new javax.swing.JButton();
        jButton5 = new javax.swing.JButton();
        jButton6 = new javax.swing.JButton();
        jButton7 = new javax.swing.JButton();
        jButton8 = new javax.swing.JButton();
        jButton9 = new javax.swing.JButton();
        jButton10 = new javax.swing.JButton();
        jButton11 = new javax.swing.JButton();
        jButton12 = new javax.swing.JButton();
        jButton13 = new javax.swing.JButton();
        jButton14 = new javax.swing.JButton();
        jButton15 = new javax.swing.JButton();
        jButton16 = new javax.swing.JButton();
        jButton17 = new javax.swing.JButton();
        jButton18 = new javax.swing.JButton();
        jButton19 = new javax.swing.JButton();
        jButton20 = new javax.swing.JButton();
        jButton21 = new javax.swing.JButton();
        jTextField3 = new javax.swing.JTextField();
        jTextField5 = new javax.swing.JTextField();
        jTextField6 = new javax.swing.JTextField();
        jButton24 = new javax.swing.JButton();

        setTitle("Calculadora de polinomios");
        setBackground(new java.awt.Color(0, 153, 153));
        addWindowListener(new java.awt.event.WindowAdapter() {
            public void windowClosing(java.awt.event.WindowEvent evt) {
                exitForm(evt);
            }
        });

        jPanel2.setLayout(new java.awt.BorderLayout());
        jPanel2.setBackground(new java.awt.Color(255, 255, 255));
        jPanel2.setBorder(new javax.swing.border.LineBorder(new java.awt.Color(0, 0, 0)));
        jTextField2.setBackground(new java.awt.Color(255, 255, 255));
        jTextField2.setEditable(false);
        jTextField2.setFont(new java.awt.Font("Arial Narrow", 2, 18));
        jTextField2.setForeground(new java.awt.Color(255, 51, 51));
        jTextField2.setHorizontalAlignment(javax.swing.JTextField.RIGHT);
        jTextField2.setText("0");
        jPanel2.add(jTextField2, java.awt.BorderLayout.CENTER);
        getContentPane().add(jPanel2, java.awt.BorderLayout.NORTH);
        jPanel3.setLayout(new java.awt.BorderLayout());
        jPanel3.setBackground(new java.awt.Color(0, 153, 153));
        jPanel1.setLayout(new java.awt.GridLayout());
        jPanel1.setBackground(new java.awt.Color(102, 204, 255));
        jTextField1.setBackground(new java.awt.Color(204, 255, 204));
        jTextField1.setEditable(false);
        jTextField1.setForeground(new java.awt.Color(0, 153, 153));
        jTextField1.setHorizontalAlignment(javax.swing.JTextField.RIGHT);
        jTextField1.setBorder(new javax.swing.border.BevelBorder(javax.swing.border.BevelBorder.RAISED, null, null, null, java.awt.Color.darkGray));
        jPanel1.add(jTextField1);
        jTextField4.setBackground(new java.awt.Color(204, 255, 204));
        jTextField4.setEditable(false);
        jTextField4.setForeground(new java.awt.Color(0, 153, 153));
        jTextField4.setHorizontalAlignment(javax.swing.JTextField.RIGHT);
        jTextField4.setBorder(new javax.swing.border.BevelBorder(javax.swing.border.BevelBorder.RAISED, null, null, null, java.awt.Color.darkGray));
        jPanel1.add(jTextField4);
        jPanel3.add(jPanel1, java.awt.BorderLayout.NORTH);
        jPanel5.setLayout(new java.awt.GridLayout());
        jPanel5.setBackground(new java.awt.Color(102, 204, 255));
        jPanel3.add(jPanel5, java.awt.BorderLayout.SOUTH);
        getContentPane().add(jPanel3, java.awt.BorderLayout.SOUTH);
        jPanel4.setLayout(null);
        jPanel4.setBackground(new java.awt.Color(102, 204, 255));

        añadeBoton(jButton1,jPanel4,"1",new java.awt.Color(255, 255, 51),new java.awt.Color(0, 0, 204),10,20,80,26);
        añadeBoton(jButton2,jPanel4,"2",new java.awt.Color(255, 255, 51),new java.awt.Color(0, 0, 204),100,20,80,26);
        añadeBoton(jButton3,jPanel4,"3",new java.awt.Color(255, 255, 51),new java.awt.Color(0, 0, 204),190, 20, 80, 26);
        añadeBoton(jButton4,jPanel4,"4",new java.awt.Color(255, 255, 51),new java.awt.Color(0, 0, 204),10, 50, 80, 26);
        añadeBoton(jButton5,jPanel4,"5",new java.awt.Color(255, 255, 51),new java.awt.Color(0, 0, 204),100, 50, 80, 26);
        añadeBoton(jButton6,jPanel4,"6",new java.awt.Color(255, 255, 51),new java.awt.Color(0, 0, 204),190, 50, 80, 26);
        añadeBoton(jButton7,jPanel4,"7",new java.awt.Color(255, 255, 51),new java.awt.Color(0, 0, 204),10, 80, 80, 26);
        añadeBoton(jButton8,jPanel4,"8",new java.awt.Color(255, 255, 51),new java.awt.Color(0, 0, 204),100, 80, 80, 26);
        añadeBoton(jButton9,jPanel4,"9",new java.awt.Color(255, 255, 51),new java.awt.Color(0, 0, 204),190, 80, 80, 26);
        añadeBoton(jButton10,jPanel4,"0",new java.awt.Color(255, 255, 51),new java.awt.Color(0, 0, 204),100, 110, 80, 26);
        añadeBoton(jButton11,jPanel4,"X^",new java.awt.Color(255, 255, 51),new java.awt.Color(255, 0, 0),190, 120, 80, 26);
        añadeBoton(jButton12,jPanel4,"PRODUCTO",new java.awt.Color(255, 0, 0),new java.awt.Color(255, 255, 0),290, 50, 100, 26);
        añadeBoton(jButton13,jPanel4,"SUMA",new java.awt.Color(255, 0, 0),new java.awt.Color(255, 255, 0),290, 140, 100, 26);
        añadeBoton(jButton14,jPanel4,"RESTA",new java.awt.Color(255, 0, 0),new java.awt.Color(255, 255, 0),290, 170, 100, 26);
        añadeBoton(jButton15,jPanel4,".",new java.awt.Color(255, 255, 51),new java.awt.Color(255, 0, 51),10, 120, 80, 26);
        añadeBoton(jButton16,jPanel4,"=",new java.awt.Color(255, 255, 51),new java.awt.Color(0, 0, 204),10, 190, 260, 26);
        añadeBoton(jButton17,jPanel4,"DERIVADA",new java.awt.Color(255, 0, 0),new java.awt.Color(255, 255, 0),290, 80, 100, 26);
        añadeBoton(jButton18,jPanel4,"INTEGRAL",new java.awt.Color(255, 0, 0),new java.awt.Color(255, 255, 0),290, 110, 100, 26);
        añadeBoton(jButton19,jPanel4,"F(n)",new java.awt.Color(255, 0, 0),new java.awt.Color(255, 255, 0),290, 200, 100, 26);
        añadeBoton(jButton20,jPanel4,"+",new java.awt.Color(255, 255, 51),new java.awt.Color(0, 0, 0),50, 150, 80, 26);
        añadeBoton(jButton21,jPanel4,"-",new java.awt.Color(255, 255, 51),new java.awt.Color(0, 0, 0),140, 150, 80, 26);
        añadeBoton(jButton24,jPanel4,"C",new java.awt.Color(51, 255, 255),new java.awt.Color(255, 0, 0),300, 6, 80, 20);
        jButton24.setBorder(new javax.swing.border.SoftBevelBorder(javax.swing.border.BevelBorder.LOWERED, java.awt.Color.darkGray, java.awt.Color.darkGray, java.awt.Color.yellow, java.awt.Color.yellow));

        jButton22.setBackground(new java.awt.Color(51, 255, 51));
        jButton22.setForeground(new java.awt.Color(0, 0, 255));
        jButton22.setText("Mostrar Gr\u00e1fica");
        jButton22.setBorder(new javax.swing.border.LineBorder(new java.awt.Color(51, 204, 255), 3, true));
        jButton22.addActionListener(escucha);
        jPanel5.add(jButton22);
        jButton23.setBackground(new java.awt.Color(51, 255, 51));
        jButton23.setForeground(new java.awt.Color(0, 0, 255));
        jButton23.setText("Mostrar \u00c1rea");
        jButton23.setBorder(new javax.swing.border.LineBorder(new java.awt.Color(51, 204, 255), 3, true));
        jButton23.addActionListener(escucha);
        jPanel5.add(jButton23);

        jTextField3.setBackground(new java.awt.Color(102, 204, 255));
        jTextField3.setEditable(false);
        jTextField3.setHorizontalAlignment(javax.swing.JTextField.CENTER);
        jTextField3.setText("OPERACIONES");
        jTextField3.setBorder(null);
        jPanel4.add(jTextField3);
        jTextField3.setBounds(290, 30, 100, 16);
        jTextField5.setBackground(new java.awt.Color(102, 204, 255));
        jTextField5.setEditable(false);
        jTextField5.setForeground(new java.awt.Color(153, 153, 153));
        jTextField5.setHorizontalAlignment(javax.swing.JTextField.CENTER);
        jTextField5.setText("polinomio 1");
        jTextField5.setBorder(null);
        jPanel4.add(jTextField5);
        jTextField5.setBounds(40, 230, 110, 16);
        jTextField6.setBackground(new java.awt.Color(102, 204, 255));
        jTextField6.setEditable(false);
        jTextField6.setForeground(new java.awt.Color(153, 153, 153));
        jTextField6.setHorizontalAlignment(javax.swing.JTextField.CENTER);
        jTextField6.setText("polinomio 2");
        jTextField6.setBorder(null);
        jPanel4.add(jTextField6);
        jTextField6.setBounds(240, 230, 110, 16);
        getContentPane().add(jPanel4, java.awt.BorderLayout.CENTER);
    }

    private void añadeBoton(JButton b,JPanel p, String nombre, Color fondo, Color letra, int a1, int a2, int a3 ,int a4) {
        b.setBackground(fondo);
        b.setForeground(letra);
        b.setBounds(a1, a2, a3, a4);
        b.setText(nombre);
        b.addActionListener(escucha);
        p.add(b);
    }

    private void exitForm(java.awt.event.WindowEvent evt) {
        System.exit(0);
    }

    public static void main(String args[]) {
        new CalculadoraPolinomio().show();
    }

    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton10;
    private javax.swing.JButton jButton11;
    private javax.swing.JButton jButton12;
    private javax.swing.JButton jButton13;
    private javax.swing.JButton jButton14;
    private javax.swing.JButton jButton15;
    private javax.swing.JButton jButton16;
    private javax.swing.JButton jButton17;
    private javax.swing.JButton jButton18;
    private javax.swing.JButton jButton19;
    private javax.swing.JButton jButton2;
    private javax.swing.JButton jButton20;
    private javax.swing.JButton jButton21;
    private javax.swing.JButton jButton22;
    private javax.swing.JButton jButton23;
    private javax.swing.JButton jButton24;
    private javax.swing.JButton jButton3;
    private javax.swing.JButton jButton4;
    private javax.swing.JButton jButton5;
    private javax.swing.JButton jButton6;
    private javax.swing.JButton jButton7;
    private javax.swing.JButton jButton8;
    private javax.swing.JButton jButton9;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JPanel jPanel2;
    private javax.swing.JPanel jPanel3;
    private javax.swing.JPanel jPanel4;
    private javax.swing.JPanel jPanel5;
    private javax.swing.JTextField jTextField1;
    private javax.swing.JTextField jTextField2;
    private javax.swing.JTextField jTextField3;
    private javax.swing.JTextField jTextField4;
    private javax.swing.JTextField jTextField5;
    private javax.swing.JTextField jTextField6;

public class MiOyente implements  java.awt.event.ActionListener{

    public void actionPerformed(ActionEvent e) {
            if (e.getSource() == jButton11){
                texto.append(" X^");
                cogecoeficiente = 0;
                cogeindice = 1;
            }//x^
            if (e.getSource() == jButton12){
                operacion = "producto";
                mono =new monomio(coeficiente,indice,signo);
                polinomio.add(mono);
                polinomio1 = conviertepolinomio();
                polinomio.clear();
                texto.setLength(0);
                cogecoeficiente = 1;
                cogeindice = 0;
                coeficiente.setLength(0);
                indice.setLength(0);
                indice.append("0");
                signo = "+";
            }//producto
            if (e.getSource() == jButton13){
                operacion = "suma";
                mono =new monomio(coeficiente,indice,signo);
                polinomio.add(mono);
                polinomio1 = conviertepolinomio();
                polinomio.clear();
                texto.setLength(0);
                cogecoeficiente = 1;
                cogeindice = 0;
                coeficiente.setLength(0);
                indice.setLength(0);
                indice.append("0");
                signo = "+";
            }//suma
            if (e.getSource() == jButton14){
                operacion = "resta";
                mono =new monomio(coeficiente,indice,signo);
                polinomio.add(mono);
                polinomio1 = conviertepolinomio();
                polinomio.clear();
                texto.setLength(0);
                cogecoeficiente = 1;
                cogeindice = 0;
                coeficiente.setLength(0);
                indice.setLength(0);
                indice.append("0");
                signo = "+";
            }//resta
            if (e.getSource() == jButton15){
                texto.append(".");
                if (cogecoeficiente == 1)coeficiente.append(".");
            }//.
            if (e.getSource() == jButton16){
                if (operacion.equals("suma") || operacion.equals("resta") || operacion.equals("producto")){
                    mono =new monomio(coeficiente,indice,signo);
                    polinomio.add(mono);
                    polinomio2 = conviertepolinomio();
                    polinomio.clear();
                    jTextField4.setText(polinomio2.toString());
                }
                if (cogen == 1) mivalor = Double.parseDouble(texto.toString());
                texto.setLength(0);
                jTextField1.setText(polinomio1.toString());
                signo = "+";
                if (operacion.equals("suma")) texto.append(polinomio1.suma(polinomio2).toString());
                if (operacion.equals("resta")) texto.append(polinomio1.resta(polinomio2).toString());
                if (operacion.equals("producto")) texto.append(polinomio1.producto(polinomio2).toString());
                if (operacion.equals("derivada")) texto.append(polinomio1.derivada().toString());
                if (operacion.equals("integral")){
                    texto.append(polinomio1.integral().toString());
                    texto.append(" + C");
                }
                if (operacion.equals("valorN")) texto.append(polinomio1.valorenesimo(mivalor));
                cogen = 0;
            }//=
            if (e.getSource() == jButton17){
                operacion = "derivada";
                mono =new monomio(coeficiente,indice,signo);
                polinomio.add(mono);
                polinomio1 = conviertepolinomio();
                polinomio.clear();
                texto.setLength(0);
                cogecoeficiente = 0;
                cogeindice = 0;
                coeficiente.setLength(0);
                indice.setLength(0);
            }//derivada
            if (e.getSource() == jButton18){
                operacion = "integral";
                mono =new monomio(coeficiente,indice,signo);
                polinomio.add(mono);
                polinomio1 = conviertepolinomio();
                polinomio.clear();
                texto.setLength(0);
                cogecoeficiente = 0;
                cogeindice = 0;
                coeficiente.setLength(0);
                indice.setLength(0);
            }//integral
            if (e.getSource() == jButton19){
                operacion = "valorN";
                cogen = 1;
                mono =new monomio(coeficiente,indice,signo);
                polinomio.add(mono);
                polinomio1 = conviertepolinomio();
                polinomio.clear();
                texto.setLength(0);
                cogecoeficiente = 0;
                cogeindice = 0;
                coeficiente.setLength(0);
                indice.setLength(0);
            }//F(n)
            if (e.getSource() == jButton20){
                texto.append(" + ");
                mono =new monomio(coeficiente,indice,signo);
                polinomio.add(mono);
                signo = "+";
                coeficiente.setLength(0);
                indice.setLength(0);
                indice.append("0");
                cogecoeficiente = 1;
                cogeindice = 0;
                primera = 0;
            }//+
            if (e.getSource() == jButton21){
                texto.append(" - ");
                if (primera == 0){
                    mono =new monomio(coeficiente,indice,signo);
                    polinomio.add(mono);
                }
                signo = "-";
                coeficiente.setLength(0);
                indice.setLength(0);
                indice.append("0");
                cogecoeficiente = 1;
                cogeindice = 0;
                primera = 0;
            }//-
            if (e.getSource() == jButton22){
                tipo = "grafica";
                mono =new monomio(coeficiente,indice,signo);
                polinomio.add(mono);
                polinomio1 = conviertepolinomio();
                jTextField1.setText(polinomio1.toString());
                Dibuja grafica =new Dibuja();
                grafica.setVisible(true);
            }//mostrar grafica
            if (e.getSource() == jButton23){
                tipo = "area";
                mono =new monomio(coeficiente,indice,signo);
                polinomio.add(mono);
                polinomio1 = conviertepolinomio();
                jTextField1.setText(polinomio1.toString());
                Dibuja grafica =new Dibuja();
                grafica.setVisible(true);
            }//mostrar area
            if (e.getSource() == jButton24){reinicia();}//CE

            if (e.getSource() == jButton10){texto.append("0");if (cogecoeficiente == 1)coeficiente.append("0");if (cogeindice == 1)indice.append("0");} //0
            if (e.getSource() == jButton1){texto.append("1"); if (cogecoeficiente == 1)coeficiente.append("1");if (cogeindice == 1)indice.append("1");} //1
            if (e.getSource() == jButton2){texto.append("2"); if (cogecoeficiente == 1)coeficiente.append("2");if (cogeindice == 1)indice.append("2");} //2
            if (e.getSource() == jButton3){texto.append("3"); if (cogecoeficiente == 1)coeficiente.append("3");if (cogeindice == 1)indice.append("3");} //3
            if (e.getSource() == jButton4){texto.append("4"); if (cogecoeficiente == 1)coeficiente.append("4");if (cogeindice == 1)indice.append("4");} //4
            if (e.getSource() == jButton5){texto.append("5"); if (cogecoeficiente == 1)coeficiente.append("5");if (cogeindice == 1)indice.append("5");} //5
            if (e.getSource() == jButton6){texto.append("6"); if (cogecoeficiente == 1)coeficiente.append("6");if (cogeindice == 1)indice.append("6");} //6
            if (e.getSource() == jButton7){texto.append("7"); if (cogecoeficiente == 1)coeficiente.append("7");if (cogeindice == 1)indice.append("7");} //7
            if (e.getSource() == jButton8){texto.append("8"); if (cogecoeficiente == 1)coeficiente.append("8");if (cogeindice == 1)indice.append("8");} //8
            if (e.getSource() == jButton9){texto.append("9"); if (cogecoeficiente == 1)coeficiente.append("9");if (cogeindice == 1)indice.append("9");} //9
            if (texto.length() != 0)
                jTextField2.setText(texto.toString());
    }

    private void reinicia(){
        texto.setLength(0);
        jTextField2.setText("0");
        jTextField1.setText("");
        jTextField4.setText("");
        operacion = null;
        cogecoeficiente = 1;
        cogeindice = 0;
        signo = "+";
        polinomio1 = null;
        polinomio2 = null;
        coeficiente.setLength(0);
        indice.setLength(0);
        indice.append("0");
    }
    public Polinomio conviertepolinomio(){
        double[] coeficientesOrdenados;
        monomio mimonomio;
        int i;
        int grado = 0;
        for (i = polinomio.size()-1; i >= 0; i--){
            mimonomio = (monomio)polinomio.get(i);
            if ((int)mimonomio.dameindice() >= grado)
                grado = (int)mimonomio.dameindice();
        }
        coeficientesOrdenados = new double[grado+1];
        for (i = 0; i < polinomio.size(); i++){
            mimonomio = (monomio)polinomio.get(i);
            coeficientesOrdenados[(int)mimonomio.dameindice()] = mimonomio.damecoeficiente();
        }
        return new Polinomio(coeficientesOrdenados);
    }
}

public class Polinomio {
    private double coefs[];
    public Polinomio(double[] coefs) {
       this.coefs=coefs;
    }
    public Polinomio suma(Polinomio p){
        double[] resultado;
        resultado=new double[Math.max(this.coefs.length, p.coefs.length)];
        for (int i=0; i<this.coefs.length; i++) {
            resultado[i]+=this.coefs[i];
        }
        for (int i=0; i<p.coefs.length; i++) {
            resultado[i]+=p.coefs[i];
        }
        return new Polinomio(resultado);
    }

    public Polinomio resta(Polinomio p){
        double[] resultado;
        resultado=new double[Math.max(this.coefs.length, p.coefs.length)];
        for (int i=0; i<this.coefs.length; i++) {
            resultado[i]+=this.coefs[i];
        }
        for (int i=0; i<p.coefs.length; i++) {
            resultado[i]-=p.coefs[i];
        }
        return new Polinomio(resultado);
    }

    public Polinomio producto(Polinomio p){
    double[] resultado;
    resultado=new double[this.coefs.length * p.coefs.length];
    for (int i = 0; i < this.coefs.length ; i++)
        for (int j = 0; j < p.coefs.length; j++){
            if ((i > 1)&(j > 1))
                resultado[i*j] += this.coefs[i] * p.coefs[j];
            if ((j==0)&(i==0))resultado[0] = this.coefs[i] * p.coefs[j];
            if ((i==0)&(j!=0))resultado[1*j] += this.coefs[i] * p.coefs[j];
            if ((j==0)&(i!=0))resultado[1*i] += this.coefs[i] * p.coefs[j];
            if ((j==1)&(i>1))resultado[i+1] += this.coefs[i] * p.coefs[j];
            if ((i==1)&(j>1))resultado[j+1] += this.coefs[i] * p.coefs[j];
            if ((j==1)&(i==1))resultado[2] += this.coefs[i] * p.coefs[j];
        }
    return new Polinomio(resultado);
    }

    public Polinomio derivada(){
     double [] resultado = new double [this.coefs.length-1];
     for (int i = 1; i < this.coefs.length; i++){
     resultado [i-1] = i * this.coefs[i];
     }
     return new Polinomio(resultado);
    }

    public Polinomio integral(){
       double [] resultado = new double [this.coefs.length+1];
       for (int i = 0; i < this.coefs.length; i++){
        resultado [i+1] = ( this.coefs[i]) / (i+1);
        }
        return new Polinomio(resultado);
    }

    public double valorenesimo(double n){
        double resultado = 0.0;
        for (int i = 0; i < this.coefs.length; i++)
            resultado += this.coefs[i] * Math.pow(n,i);//BUSCAR POW, ORDEN DE ARGUMENTOS
        return resultado;
    }
    public String toString(){
        StringBuffer resultado = new StringBuffer();
        for (int i = this.coefs.length-1; i >= 0; i--){
            if (this.coefs[i] != 0.0){
                if ((this.coefs[i] > 0.0) & (i < this.coefs.length-1))
                    resultado.append("+");
                if (i == 0)
                    resultado.append(this.coefs[i]);
                else resultado.append(this.coefs[i] + " X^" + i+" ");
            }
        }
        return resultado.toString();
    }
}

public class monomio{
    private double coeficiente;
    private int indice;
    public monomio(StringBuffer coe, StringBuffer ind, String signo){
        if (signo.equals("-") == true) coe.insert(0,signo);
        this.coeficiente = Double.parseDouble(coe.toString());
        this.indice = Integer.parseInt(ind.toString());
    }
    public double damecoeficiente(){return this.coeficiente;}
    public double dameindice(){return this.indice;}
}
public class Dibuja extends javax.swing.JFrame{
    private Panel jPanel1;
    private Polinomio p = polinomio1;

    public Dibuja() {
        inicia();
        jPanel1 = new Panel();
        getContentPane().add(jPanel1,java.awt.BorderLayout.CENTER);
        jPanel1.setBackground(new java.awt.Color(55,190,190));
    }
    private void inicia(){
        setSize(640,480);
        setResizable(false);
        setTitle("       Gráfica del polinomio: "+ polinomio1.toString());
        addWindowListener(new java.awt.event.WindowAdapter() {
            public void windowClosing(java.awt.event.WindowEvent evt) {
                exitForm(evt);
            }
        });
    }
    private void exitForm(java.awt.event.WindowEvent evt) {
        setVisible(false);
        p = null;
        texto.setLength(0);
        cogecoeficiente = 0;
        cogeindice = 0;
        coeficiente.setLength(0);
        indice.setLength(0);
        polinomio1= null;
    }
class Panel extends javax.swing.JPanel{
    public void paintComponent(java.awt.Graphics g){
        super.paintComponent(g);
        int i;
        g.setColor(java.awt.Color.BLUE);
        g.drawLine(305,10,305,240);
        g.setColor(java.awt.Color.RED);
        g.fillOval(560, 10,55,45);
        g.setColor(java.awt.Color.yellow);
        g.drawString("U.A.M.",570,35);
        g.setColor(java.awt.Color.BLUE);
        g.drawLine(10,240,630,240);
        g.drawString("-10",8,255);
        g.drawString("10",620,255);
        g.drawString("0",307,257);
        g.drawLine(10,235,10,245);
        g.drawLine(630,235,630,245);
        g.drawLine(305,235,305,245);
        g.setColor(java.awt.Color.RED);
        int n = 20;
        int acumulador = 10;
        int[] valoresX = new int[n];
        for (i = 0; i < n; i++)
            valoresX[i] = acumulador + (620/n)*i;
        int[] valoresY = new int[n];
        int j = 0;
        for (i = -(n/2); i < 0; i++){
            valoresY[j] = ((int)p.valorenesimo(i));
                valoresY[j] = 240 - valoresY[j];
            j++;
        }

        for (i = 1  ; i <= n/2; i++){
            valoresY[j] = ((int)p.valorenesimo(i));
            valoresY[j] = 240 - valoresY[j];
            j++;
        }
        for (i = 0; i < 19; i++){
            g.setColor(java.awt.Color.RED);
            g.drawString("("+(240-valoresY[i])+")",valoresX[i]-10,valoresY[i]-10);
            g.setColor(java.awt.Color.BLACK);
            g.drawLine(valoresX[i],valoresY[i],valoresX[i+1],valoresY[i+1]);
        }g.setColor(java.awt.Color.RED);
        g.drawString("("+(240-valoresY[i])+")",valoresX[i]-10,valoresY[i]-10);
        if (tipo == "area"){
            for (i = 0; i < 19; i++){
                if (i < 10){
                    if (valoresY[i] <= 240){
                        g.setColor(java.awt.Color.green);
                        g.fillRect(valoresX[i], valoresY[i+1], 620/n,240-valoresY[i+1]);
                        g.setColor(java.awt.Color.BLACK);
                        g.drawRect(valoresX[i], valoresY[i+1], 620/n,240-valoresY[i+1]);
                    }
                    if (valoresY[i] > 240){
                        g.setColor(java.awt.Color.green);
                        g.fillRect(valoresX[i], 240, 620/n,valoresY[i+1]-240);
                        g.setColor(java.awt.Color.BLACK);
                        g.drawRect(valoresX[i],240, 620/n, valoresY[i+1]-240);
                    }
                }
                if (i >= 10){
                    if (valoresY[i] <= 240){
                        g.setColor(java.awt.Color.green);
                        g.fillRect(valoresX[i], valoresY[i], 620/n,240-valoresY[i]);
                        g.setColor(java.awt.Color.BLACK);
                        g.drawRect(valoresX[i], valoresY[i], 620/n,240-valoresY[i]);
                    }
                    if (valoresY[i] > 240){
                        g.setColor(java.awt.Color.green);
                        g.fillRect(valoresX[i], 240, 620/n,valoresY[i]-240);
                        g.setColor(java.awt.Color.BLACK);
                        g.drawRect(valoresX[i],240, 620/n, valoresY[i]-240);
                    }
                }
            }
        }
    }
}
}
}

