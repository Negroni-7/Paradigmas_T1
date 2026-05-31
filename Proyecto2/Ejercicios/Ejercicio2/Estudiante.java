// Fiona Catalina Castro Villarroel 21501220-4
// José-Tomás Guzmán  Ilabel 21.132.176-8
// Máximo Eduardo González Arriagada 21.978.604-2
// Stefano Negroni Postiglione  21.945.448-1
// Pablo Antonio Labra Jabre 21.280.591-2
// Isabella Victoria Quintero González 25.868.144-4

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

    //método para mostrar la información del estudiante accediendo a sus getters
    public void mostrarInformacion() {
        System.out.println("Nombre: " + getNombre());
        System.out.println("Correo: " + getCorreo());
    }
}
