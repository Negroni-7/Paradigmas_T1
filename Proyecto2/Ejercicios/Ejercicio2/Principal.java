package Ejercicio2;

public class Principal {
    public static void main(String[] args) {
        // Crear un estudiante
        Estudiante estudiante1 = new Estudiante("Esteban Yanes", "e.yanespez@uandresbello.edu");
        Estudiante estudiante2 = new Estudiante("Pablo Labra", "p.labrajabre@uandresbello.edu");
        Estudiante estudiante3 = new Estudiante("Daniela Jara", "d.jaracanales@uandresbello.edu");
        Estudiante estudiante4 = new Estudiante("Jose-Tomas Guzman", "j.guzmanilabel@uandresbello.edu");
        Estudiante estudiante5 = new Estudiante("Stefano Negroni", "s.negronipostiglione@uandresbello.edu");
        Estudiante estudiante6 = new Estudiante("Isabella Quintero", "i.quinterogonzalez@uandresbello.edu");
        // Crear un taller
        Taller taller = new Taller("Taller de Programación");
        taller.agregarEstudiante(estudiante1);
        taller.agregarEstudiante(estudiante2);
        taller.agregarEstudiante(estudiante3);
        taller.agregarEstudiante(estudiante4);
        taller.agregarEstudiante(estudiante5);
        taller.agregarEstudiante(estudiante6);
        // Mostrar los estudiantes del taller
        taller.mostrarEstudiantes();
        // Remover un estudiante por nombre
        taller.removerEstudiantePorNombre("Pablo Labra");
        taller.removerEstudiantePorNombre("Maximo Gonzalez");
        // Mostrar los estudiantes del taller después de la eliminación
        taller.mostrarEstudiantes();
    }
}
