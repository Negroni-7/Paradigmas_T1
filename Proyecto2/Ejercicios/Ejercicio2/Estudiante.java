package Ejercicio2;
public class Estudiante {
    
    //Atributos
    private String nombre;
    private String correo;

    //Constructores
    public Estudiante(String nombre, String correo) {
        this.nombre = nombre;
        this.correo = correo;
    }
    public Estudiante() {
        this.nombre = "Desconocido";
        this.correo = "Desconocido";
    }

    //Getters
    public String getNombre() {
        return nombre;
    }
    public String getCorreo() {
        return correo;
    }
    //Setters
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public void setCorreo(String correo) {
        this.correo = correo;
    }

    //método para mostrar la información del estudiante
    public void mostrarInformacion() {
        System.out.println("Nombre: " + getNombre());
        System.out.println("Correo: " + getCorreo());
    }
}
