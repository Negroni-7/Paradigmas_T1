// Fiona Catalina Castro Villarroel 21501220-4
// José-Tomás Guzmán  Ilabel 21.132.176-8
// Máximo Eduardo González Arriagada 21.978.604-2
// Stefano Negroni Postiglione  21.945.448-1
// Pablo Antonio Labra Jabre 21.280.591-2
// Isabella Victoria Quintero González 25.868.144-4

public class Computadora {
    //Atributos
    private String marca;
    private Procesador procesador;

    //Constructores
    public Computadora(String marca, Procesador procesador) {
        this.marca = marca;
        this.procesador = procesador;
    }
    public Computadora() {
        this.marca = "Desconocida";
        this.procesador = new Procesador();
    }

    //Getters
    public String getMarca() {
        return marca;
    }
    public Procesador getProcesador() {
        return procesador;
    }
    //Setters
    public void setMarca(String marca) {
        this.marca = marca;
    }
    public void setProcesador(Procesador procesador) {
        this.procesador = procesador;
    }

    //método para mostrar la información de la computadora accediendo a sus getters, llama a la funcion mostrarInformacion perteneciente al procesador
    public void mostrarInformacion() {
        System.out.println("Marca: " + getMarca());
        System.out.println("Información del Procesador:");
        getProcesador().mostrarInformacion();
    }
}
