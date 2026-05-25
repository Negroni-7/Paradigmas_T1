
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

    //método para mostrar la información del procesador
    public void mostrarInformacion() {
        System.out.println("Modelo: " + getModelo());
        System.out.println("Frecuencia: " + getFrecuenciaGHz() + " GHz");
    }
}