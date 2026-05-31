// Fiona Catalina Castro Villarroel 21501220-4
// José-Tomás Guzmán  Ilabel 21.132.176-8
// Máximo Eduardo González Arriagada 21.978.604-2
// Stefano Negroni Postiglione  21.945.448-1
// Pablo Antonio Labra Jabre 21.280.591-2
// Isabella Victoria Quintero González 25.868.144-4

package Ejercicio2;
import java.util.ArrayList;

public class Taller {
    //Atributos
    private String nombre;
    private ArrayList<Estudiante> estudiantes; //Arreglo vectorial de estudiantes
    //Constructores
    public Taller(String nombre) {
        this.nombre = nombre;
        this.estudiantes = new ArrayList<>();
    }
    //Getters
    public String getNombre() {
        return nombre;
    }
    public ArrayList<Estudiante> getEstudiantes() {
        return estudiantes;
    }
    //Setters
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public void setEstudiantes(ArrayList<Estudiante> estudiantes) {
        this.estudiantes = estudiantes;
    }

    //Metodos
    //método para agregar un estudiante al taller
    public void agregarEstudiante(Estudiante estudiante) {
        estudiantes.add(estudiante);
    }
    //método para mostrar los estudiantes pertenecientes al taller, accediento a su nombre mediante su getter
    public void mostrarEstudiantes() {
        System.out.println("Estudiantes en el taller " + getNombre() + ":");
        for (Estudiante estudiante : estudiantes) {
            estudiante.mostrarInformacion();
        }
        System.out.println("");
    }
    //método para eliminar a un estudiante del taller mediante un nombre como parametro de entrada
    public boolean removerEstudiantePorNombre(String nombre) {
        for (Estudiante estudiante : estudiantes) {
            if (estudiante.getNombre().equalsIgnoreCase(nombre)) {
                estudiantes.remove(estudiante);
                System.out.println("Estudiante " + nombre + " eliminado del taller.\n");
                return true;
            }
        }
        System.out.println("Estudiante " + nombre + " no encontrado en el taller.\n");
        return false;
    }
}
