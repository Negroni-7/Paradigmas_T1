// Fiona Catalina Castro Villarroel 21501220-4
// José-Tomás Guzmán  Ilabel 21.132.176-8
// Máximo Eduardo González Arriagada 21.978.604-2
// Stefano Negroni Postiglione  21.945.448-1
// Pablo Antonio Labra Jabre 21.280.591-2
// Isabella Victoria Quintero González 25.868.144-4

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
