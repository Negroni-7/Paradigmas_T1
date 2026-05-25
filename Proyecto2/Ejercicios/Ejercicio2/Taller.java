package Ejercicio2;
import java.util.ArrayList;

public class Taller {
    //Atributos
    private String nombre;
    private ArrayList<Estudiante> estudiantes;
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
    public void mostrarEstudiantes() {
        System.out.println("Estudiantes en el taller " + getNombre() + ":");
        for (Estudiante estudiante : estudiantes) {
            estudiante.mostrarInformacion();
        }
        System.out.println("");
    }
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
