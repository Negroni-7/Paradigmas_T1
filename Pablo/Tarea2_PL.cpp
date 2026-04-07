 //Autor Pablo Labra

#include <iostream>
#include <string>
using namespace std;
 
// Clase ReservaHotel con atributos privados y metodos publicos
class ReservaHotel {
 
    private:
        int numeroReserva;      // Numero identificador de la reserva
        string nombreCliente;   // Nombre del cliente
        string fechaEntrada;    // Fecha de entrada (DD/MM/AAAA)
        int nocheEstadia;       // Cantidad de noches
        double precioPorNoche;  // Precio por noche
 
    public:
        // Constructor: inicializa todos los atributos al crear el objeto
        ReservaHotel(int numero, string nombre, string fecha, int noches, double precio){
            numeroReserva  = numero;
            nombreCliente  = nombre;
            fechaEntrada   = fecha;
            nocheEstadia   = noches;
            precioPorNoche = precio;
        }
 
        // Getters: retornan el valor de cada atributo privado
        int    getNumeroReserva()  { return numeroReserva;  }
        string getNombreCliente()  { return nombreCliente;  }
        string getFechaEntrada()   { return fechaEntrada;   }
        int    getNocheEstadia()   { return nocheEstadia;   }
        double getPrecioPorNoche() { return precioPorNoche; }
 
        // Setters: permiten modificar cada atributo privado
        void setNumeroReserva(int numero)      { numeroReserva  = numero; }
        void setNombreCliente(string nombre)   { nombreCliente  = nombre; }
        void setFechaEntrada(string fecha)     { fechaEntrada   = fecha;  }
        void setNocheEstadia(int noches)       { nocheEstadia   = noches; }
        void setPrecioPorNoche(double precio)  { precioPorNoche = precio; }
 
        // Muestra todos los datos de la reserva por pantalla
        void mostrarInformacion(){
            cout << "\n--- Informacion de la Reserva ---" << endl;
            cout << "Numero de reserva : " << numeroReserva  << endl;
            cout << "Nombre del cliente: " << nombreCliente  << endl;
            cout << "Fecha de entrada  : " << fechaEntrada   << endl;
            cout << "Noches de estadia : " << nocheEstadia   << endl;
            cout << "Precio por noche  : $" << precioPorNoche << endl;
            cout << "---------------------------------" << endl;
        }
 
        // Actualiza la fecha de entrada con el nuevo valor recibido
        void actualizarFechaEntrada(string nuevaFecha){
            fechaEntrada = nuevaFecha;
            cout << "Fecha actualizada a: " << fechaEntrada << endl;
        }
 
        // Calcula y retorna el costo total (precio x noches)
        double calcularCostoTotal(){
            return precioPorNoche * nocheEstadia;
        }
};
 
int main(){
 
    // Crear objeto con valores iniciales de prueba
    ReservaHotel reserva(1001, "Judio Esteban", "69/69/6969", 4, 85000.0);
 
    int a = 0;
    while (a != 6){
 
        // Mostrar menu de operaciones disponibles
        cout << "\n====== Menu Reserva Hotel ======" << endl;
        cout << "1. Mostrar informacion de la reserva" << endl;
        cout << "2. Calcular costo total" << endl;
        cout << "3. Actualizar fecha de entrada" << endl;
        cout << "4. Modificar datos de la reserva" << endl;
        cout << "5. Mostrar atributo con getter" << endl;
        cout << "6. Salir" << endl;
        cout << "Indique la opcion: ";
        cin >> a;
 
        switch (a){
 
            case 1:
                reserva.mostrarInformacion();
                break;
 
            case 2:
                cout << "Costo total: $" << reserva.calcularCostoTotal() << endl;
                break;
 
            case 3: {
                string nuevaFecha;
                cout << "Ingrese la nueva fecha de entrada (DD/MM/AAAA): ";
                cin >> nuevaFecha;
                reserva.actualizarFechaEntrada(nuevaFecha);
                break;
            }
 
            case 4: {
                string nuevoNombre;
                double nuevoPrecio;
                cout << "Ingrese el nuevo nombre del cliente: ";
                cin.ignore();
                getline(cin, nuevoNombre);
                cout << "Ingrese el nuevo precio por noche: ";
                cin >> nuevoPrecio;
                if (nuevoPrecio <= 0){
                    cout << "Error: el precio debe ser mayor a 0." << endl;
                    break;
                }
                reserva.setNombreCliente(nuevoNombre);
                reserva.setPrecioPorNoche(nuevoPrecio);
                cout << "Datos actualizados correctamente." << endl;
                break;
            }
 
            case 5:
                cout << "N° Reserva : " << reserva.getNumeroReserva() << endl;
                cout << "Cliente    : " << reserva.getNombreCliente() << endl;
                cout << "Check-in   : " << reserva.getFechaEntrada()  << endl;
                cout << "Noches     : " << reserva.getNocheEstadia()  << endl;
                cout << "Precio/noch: $" << reserva.getPrecioPorNoche() << endl;
                break;
 
            case 6:
                cout << "Adios usuario" << endl;
                break;
 
            default:
                cout << "INGRESO UNA OPCION EQUIVOCADA" << endl;
        }
    }
    return 0;
}
 