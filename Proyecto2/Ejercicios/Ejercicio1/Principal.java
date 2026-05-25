public class Principal {
    public static void main(String[] args) {
        // Crear un procesador
        Procesador procesador1 = new Procesador("Intel Core i7", 3.5);
        
        // Crear una computadora con el procesador
        Computadora computadora1 = new Computadora("Dell", procesador1);
        
        // Mostrar la información de la computadora
        computadora1.mostrarInformacion();
    }
}
