// Fiona Catalina Castro Villarroel 21501220-4
// José-Tomás Guzmán  Ilabel 21.132.176-8
// Máximo Eduardo González Arriagada 21.978.604-2
// Stefano Negroni Postiglione  21.945.448-1
// Pablo Antonio Labra Jabre 21.280.591-2
// Isabella Victoria Quintero González 25.868.144-4

public class Procesador {
    
    //atributos
    private String modelo;
    private double frecuenciaGHz;

    //constructores
    public Procesador(String modelo, double frecuenciaGHz) {
        this.modelo = modelo;
        this.frecuenciaGHz = frecuenciaGHz;
    }

    public Procesador() {
        this.modelo = "Desconocido";
        this.frecuenciaGHz = 0.0;
    }

    //Getters
    public String getModelo() {
        return modelo;
}

    public double getFrecuenciaGHz() {
        return frecuenciaGHz;
    }

    //Setters
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }
    public void setFrecuenciaGHz(double frecuenciaGHz) {
        this.frecuenciaGHz = frecuenciaGHz;
    }

    //método para mostrar la información del procesador utilizando los getters
    public void mostrarInformacion() {
        System.out.println("Modelo: " + getModelo());
        System.out.println("Frecuencia: " + getFrecuenciaGHz() + " GHz");
    }
}
