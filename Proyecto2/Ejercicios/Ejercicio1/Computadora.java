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

    //método para mostrar la información de la computadora
    public void mostrarInformacion() {
        System.out.println("Marca: " + getMarca());
        System.out.println("Información del Procesador:");
        getProcesador().mostrarInformacion();
    }
}