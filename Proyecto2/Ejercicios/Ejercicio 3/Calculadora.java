// Fiona Catalina Castro Villarroel 21501220-4
// José-Tomás Guzmán  Ilabel 21.132.176-8
// Máximo Eduardo González Arriagada 21.978.604-2
// Stefano Negroni Postiglione  21.945.448-1
// Pablo Antonio Labra Jabre 21.280.591-2
// Isabella Victoria Quintero González 25.868.144-4

public class Calculadora extends javax.swing.JFrame {

    private static final java.util.logging.Logger logger = java.util.logging.Logger.getLogger(Calculadora.class.getName());

    //Atributos
    public float primer_numero;
    public float primer_segundo;
    public String operador;  // operador seleccionado (+, -, *, /, ^)

    //Constructor: inicializa los componentes gráficos y centra la ventana en pantalla
    public Calculadora() {
        initComponents();
        this.setLocationRelativeTo(null);
    }

    @SuppressWarnings("unchecked")
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        jToggleButton12 = new javax.swing.JToggleButton();
        jToggleButton3 = new javax.swing.JToggleButton();
        jToggleButton10 = new javax.swing.JToggleButton();
        jToggleButton5 = new javax.swing.JToggleButton();
        jToggleButton7 = new javax.swing.JToggleButton();
        jToggleButton9 = new javax.swing.JToggleButton();
        jToggleButton4 = new javax.swing.JToggleButton();
        jToggleButton6 = new javax.swing.JToggleButton();
        jToggleButton8 = new javax.swing.JToggleButton();
        jToggleButton13 = new javax.swing.JToggleButton();
        jToggleButton17 = new javax.swing.JToggleButton();
        jToggleButton19 = new javax.swing.JToggleButton();
        jToggleButton20 = new javax.swing.JToggleButton();
        jToggleButton26 = new javax.swing.JToggleButton();
        jToggleButton28 = new javax.swing.JToggleButton();
        jPanel1 = new javax.swing.JPanel();
        Casilla = new javax.swing.JLabel();
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
        jButton13 = new javax.swing.JButton();
        jButton14 = new javax.swing.JButton();
        jButton15 = new javax.swing.JButton();
        jButton16 = new javax.swing.JButton();
        jButton18 = new javax.swing.JButton();
        jButton20 = new javax.swing.JButton();
        jButton12 = new javax.swing.JButton();

        jLabel1.setBackground(new java.awt.Color(255, 255, 255));
        jLabel1.setText("jLabel1");

        jToggleButton12.setText("jToggleButton1");
        jToggleButton12.addActionListener(this::jToggleButton12ActionPerformed);

        jToggleButton3.setText("jToggleButton1");
        jToggleButton3.addActionListener(this::jToggleButton3ActionPerformed);

        jToggleButton10.setText("jToggleButton1");
        jToggleButton10.addActionListener(this::jToggleButton10ActionPerformed);

        jToggleButton5.setText("jToggleButton1");
        jToggleButton5.addActionListener(this::jToggleButton5ActionPerformed);

        jToggleButton7.setText("jToggleButton1");
        jToggleButton7.addActionListener(this::jToggleButton7ActionPerformed);

        jToggleButton9.setText("jToggleButton1");
        jToggleButton9.addActionListener(this::jToggleButton9ActionPerformed);

        jToggleButton4.setText("jToggleButton1");
        jToggleButton4.addActionListener(this::jToggleButton4ActionPerformed);

        jToggleButton6.setText("jToggleButton1");
        jToggleButton6.addActionListener(this::jToggleButton6ActionPerformed);

        jToggleButton8.setText("jToggleButton1");
        jToggleButton8.addActionListener(this::jToggleButton8ActionPerformed);

        jToggleButton13.setText("jToggleButton1");
        jToggleButton13.addActionListener(this::jToggleButton13ActionPerformed);

        jToggleButton17.setText("jToggleButton1");
        jToggleButton17.addActionListener(this::jToggleButton17ActionPerformed);

        jToggleButton19.setText("jToggleButton1");
        jToggleButton19.addActionListener(this::jToggleButton19ActionPerformed);

        jToggleButton20.setText("jToggleButton1");
        jToggleButton20.addActionListener(this::jToggleButton20ActionPerformed);

        jToggleButton26.setText("jToggleButton1");

        jToggleButton28.setText("jToggleButton1");

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jPanel1.setBackground(new java.awt.Color(7, 7, 25));

        Casilla.setBackground(new java.awt.Color(255, 255, 255));
        Casilla.setOpaque(true);

        //Botones de operadores: C (limpiar), ^, /, *, +, -
        jButton1.setText("C");
        jButton1.setToolTipText("");
        jButton1.addActionListener(this::jButton1ActionPerformed);

        jButton2.setText("^");
        jButton2.addActionListener(this::jButton2ActionPerformed);

        jButton3.setText("/");
        jButton3.addActionListener(this::jButton3ActionPerformed);

        jButton4.setText("*");
        jButton4.addActionListener(this::jButton4ActionPerformed);

        //Botones numéricos: agregan el dígito correspondiente a la casilla
        jButton5.setText("7");
        jButton5.addActionListener(this::jButton5ActionPerformed);

        jButton6.setText("8");
        jButton6.addActionListener(this::jButton6ActionPerformed);

        jButton7.setText("9");
        jButton7.addActionListener(this::jButton7ActionPerformed);

        jButton8.setText("+");
        jButton8.addActionListener(this::jButton8ActionPerformed);

        jButton9.setText("4");
        jButton9.addActionListener(this::jButton9ActionPerformed);

        jButton10.setText("5");
        jButton10.addActionListener(this::jButton10ActionPerformed);

        jButton11.setText("6");
        jButton11.addActionListener(this::jButton11ActionPerformed);

        jButton13.setText("1");
        jButton13.addActionListener(this::jButton13ActionPerformed);

        jButton14.setText("2");
        jButton14.addActionListener(this::jButton14ActionPerformed);

        jButton15.setText("3");
        jButton15.addActionListener(this::jButton15ActionPerformed);

        jButton16.setText("=");
        jButton16.addActionListener(this::jButton16ActionPerformed);

        jButton18.setText(",");
        jButton18.addActionListener(this::jButton18ActionPerformed);

        jButton20.setText("0");
        jButton20.addActionListener(this::jButton20ActionPerformed);

        jButton12.setText("-");
        jButton12.addActionListener(this::jButton12ActionPerformed);

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(Casilla, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addComponent(jButton20, javax.swing.GroupLayout.PREFERRED_SIZE, 168, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jButton18, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addComponent(jButton13, javax.swing.GroupLayout.PREFERRED_SIZE, 75, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jButton14, javax.swing.GroupLayout.PREFERRED_SIZE, 81, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jButton15, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jButton16, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(jButton1, javax.swing.GroupLayout.DEFAULT_SIZE, 67, Short.MAX_VALUE)
                            .addComponent(jButton5, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jButton9, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addComponent(jButton10, javax.swing.GroupLayout.PREFERRED_SIZE, 75, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jButton11, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                            .addGroup(jPanel1Layout.createSequentialGroup()
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                    .addComponent(jButton6, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                    .addGroup(jPanel1Layout.createSequentialGroup()
                                        .addGap(0, 0, Short.MAX_VALUE)
                                        .addComponent(jButton2, javax.swing.GroupLayout.PREFERRED_SIZE, 75, javax.swing.GroupLayout.PREFERRED_SIZE)))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(jPanel1Layout.createSequentialGroup()
                                        .addGap(0, 11, Short.MAX_VALUE)
                                        .addComponent(jButton3, javax.swing.GroupLayout.PREFERRED_SIZE, 84, javax.swing.GroupLayout.PREFERRED_SIZE))
                                    .addComponent(jButton7, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(jButton12, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jButton8, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jButton4, javax.swing.GroupLayout.DEFAULT_SIZE, 75, Short.MAX_VALUE))))
                .addContainerGap())
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(Casilla, javax.swing.GroupLayout.PREFERRED_SIZE, 80, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButton1, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButton2, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButton3, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jButton4, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jButton5, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jButton6, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jButton9, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jButton10, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jButton12, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jButton7, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jButton8, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jButton11, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE))))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jButton13, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jButton14, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jButton15, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jButton20, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jButton18, javax.swing.GroupLayout.PREFERRED_SIZE, 66, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(0, 0, Short.MAX_VALUE))
                    .addComponent(jButton16, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addContainerGap())
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
        );

        pack();
    }

    //Métodos de acción de los JToggleButton 
    private void jToggleButton3ActionPerformed(java.awt.event.ActionEvent evt) {
    }

    private void jToggleButton4ActionPerformed(java.awt.event.ActionEvent evt) {
    }

    private void jToggleButton5ActionPerformed(java.awt.event.ActionEvent evt) {
    }

    private void jToggleButton6ActionPerformed(java.awt.event.ActionEvent evt) {
    }

    private void jToggleButton7ActionPerformed(java.awt.event.ActionEvent evt) {
    }

    private void jToggleButton8ActionPerformed(java.awt.event.ActionEvent evt) {
    }

    private void jToggleButton9ActionPerformed(java.awt.event.ActionEvent evt) {
    }

    private void jToggleButton10ActionPerformed(java.awt.event.ActionEvent evt) {
    }

    private void jToggleButton12ActionPerformed(java.awt.event.ActionEvent evt) {
    }

    private void jToggleButton13ActionPerformed(java.awt.event.ActionEvent evt) {
    }

    private void jToggleButton17ActionPerformed(java.awt.event.ActionEvent evt) {
    }

    private void jToggleButton19ActionPerformed(java.awt.event.ActionEvent evt) {
    }

    private void jToggleButton20ActionPerformed(java.awt.event.ActionEvent evt) {
    }

    //métodos de los botones de operadores: guardan el primer número, asignan el operador y limpian la casilla
    private void jButton8ActionPerformed(java.awt.event.ActionEvent evt) {
        this.primer_numero=Float.parseFloat(this.Casilla.getText());
        this.operador="+";
        this.Casilla.setText("");
    }

    private void jButton12ActionPerformed(java.awt.event.ActionEvent evt) {
        this.primer_numero=Float.parseFloat(this.Casilla.getText());
        this.operador="-";
        this.Casilla.setText("");
    }

    private void jButton4ActionPerformed(java.awt.event.ActionEvent evt) {
        this.primer_numero=Float.parseFloat(this.Casilla.getText());
        this.operador="*";
        this.Casilla.setText("");
    }

    private void jButton3ActionPerformed(java.awt.event.ActionEvent evt) {
        this.primer_numero=Float.parseFloat(this.Casilla.getText());
        this.operador="/";
        this.Casilla.setText("");
    }

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {
        this.primer_numero=Float.parseFloat(this.Casilla.getText());
        this.operador="^";
        this.Casilla.setText("");
    }

    //método del botón C: limpia la casilla de visualización
    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {
        this.Casilla.setText("");
    }

    //método del botón ',': agrega punto decimal solo si la casilla aún no contiene uno
    private void jButton18ActionPerformed(java.awt.event.ActionEvent evt) {
        if(!(this.Casilla.getText().contains("."))){
            this.Casilla.setText(this.Casilla.getText()+".");
        }
    }

    //método del botón =: aplica el operador almacenado entre los dos números y muestra el resultado
    private void jButton16ActionPerformed(java.awt.event.ActionEvent evt) {
        this.primer_segundo=Float.parseFloat(this.Casilla.getText());
        
        switch(this.operador){
            case "+":this.Casilla.setText(sin_cero(this.primer_numero+this.primer_segundo));break;
            case "-":this.Casilla.setText(sin_cero(this.primer_numero-this.primer_segundo));break;
            case "*":this.Casilla.setText(sin_cero(this.primer_numero*this.primer_segundo));break;
            case "/":this.Casilla.setText(sin_cero(this.primer_numero/this.primer_segundo));break;
            case "^":this.Casilla.setText(sin_cero((float) Math.pow(this.primer_numero, this.primer_segundo)));break;
        }
    }

    //métodos de los botones numéricos: agregan el dígito correspondiente al texto actual de la casilla
    private void jButton13ActionPerformed(java.awt.event.ActionEvent evt) {
        this.Casilla.setText(this.Casilla.getText()+"1");
    }

    private void jButton14ActionPerformed(java.awt.event.ActionEvent evt) {
        this.Casilla.setText(this.Casilla.getText()+"2");
    }

    private void jButton15ActionPerformed(java.awt.event.ActionEvent evt) {
        this.Casilla.setText(this.Casilla.getText()+"3");
    }

    private void jButton9ActionPerformed(java.awt.event.ActionEvent evt) {
        this.Casilla.setText(this.Casilla.getText()+"4");
    }

    private void jButton10ActionPerformed(java.awt.event.ActionEvent evt) {
        this.Casilla.setText(this.Casilla.getText()+"5");
    }

    private void jButton11ActionPerformed(java.awt.event.ActionEvent evt) {
        this.Casilla.setText(this.Casilla.getText()+"6");
    }

    private void jButton5ActionPerformed(java.awt.event.ActionEvent evt) {
        this.Casilla.setText(this.Casilla.getText()+"7");
    }

    private void jButton6ActionPerformed(java.awt.event.ActionEvent evt) {
        this.Casilla.setText(this.Casilla.getText()+"8");
    }

    private void jButton7ActionPerformed(java.awt.event.ActionEvent evt) {
        this.Casilla.setText(this.Casilla.getText()+"9");
    }

    private void jButton20ActionPerformed(java.awt.event.ActionEvent evt) {
        this.Casilla.setText(this.Casilla.getText()+"0");
    }

    //método auxiliar que elimina el ".0" del resultado cuando este es un número entero
    private String sin_cero(float resultado){
        String retorno="";
        retorno=Float.toString(resultado);
        
        if(resultado%1==0){
            retorno=retorno.substring(0,retorno.length()-2);
        }
        
        return retorno;
    }

    //método principal que configura el look and feel y lanza la ventana de la calculadora
    public static void main(String args[]) {

        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ReflectiveOperationException | javax.swing.UnsupportedLookAndFeelException ex) {
            logger.log(java.util.logging.Level.SEVERE, null, ex);
        }

        java.awt.EventQueue.invokeLater(() -> new Calculadora().setVisible(true));
    }

    private javax.swing.JLabel Casilla;
    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton10;
    private javax.swing.JButton jButton11;
    private javax.swing.JButton jButton12;
    private javax.swing.JButton jButton13;
    private javax.swing.JButton jButton14;
    private javax.swing.JButton jButton15;
    private javax.swing.JButton jButton16;
    private javax.swing.JButton jButton18;
    private javax.swing.JButton jButton2;
    private javax.swing.JButton jButton20;
    private javax.swing.JButton jButton3;
    private javax.swing.JButton jButton4;
    private javax.swing.JButton jButton5;
    private javax.swing.JButton jButton6;
    private javax.swing.JButton jButton7;
    private javax.swing.JButton jButton8;
    private javax.swing.JButton jButton9;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JToggleButton jToggleButton10;
    private javax.swing.JToggleButton jToggleButton12;
    private javax.swing.JToggleButton jToggleButton13;
    private javax.swing.JToggleButton jToggleButton17;
    private javax.swing.JToggleButton jToggleButton19;
    private javax.swing.JToggleButton jToggleButton20;
    private javax.swing.JToggleButton jToggleButton26;
    private javax.swing.JToggleButton jToggleButton28;
    private javax.swing.JToggleButton jToggleButton3;
    private javax.swing.JToggleButton jToggleButton4;
    private javax.swing.JToggleButton jToggleButton5;
    private javax.swing.JToggleButton jToggleButton6;
    private javax.swing.JToggleButton jToggleButton7;
    private javax.swing.JToggleButton jToggleButton8;
    private javax.swing.JToggleButton jToggleButton9;
}
