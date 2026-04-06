#include <cmath>
#include <cctype>
#include <iostream>
using namespace std;

class ReservaHotel{
    private:
        int numeroReserva;
        string nombreCliente;
        string fechaEntrada;
        int nocheEstadia;
        float precioPorNoche;
    public:
        ReservaHotel(int num, string nombre, string fecha, int noches, float precio) {
        numeroReserva = num;
        nombreCliente = nombre;
        fechaEntrada = fecha;
        nocheEstadia = noches;
        precioPorNoche = precio;
        }
        ReservaHotel(){
            numeroReserva = 0;
            nombreCliente = "";
            fechaEntrada = "";
            nocheEstadia = 0;
            precioPorNoche = 0.0;
        }
        void setReserva(){
            setNumero();
            setNombreCliente();
            setFechaEntrada();
            setNocheEstadia();
            setPrecioNoche();
        }
        void setNumero(){
            cout << "Ingrese el numero de reserva: ";
            cin >> numeroReserva;
            while (numeroReserva <= 0){
                cout << "Numero ingresado no valido, intente de nuevo: ";
                cin >> numeroReserva;
            }
        }
        void setNombreCliente(){
            cout << "Ingrese el nombre del reservante: ";
            getline(cin >> ws, nombreCliente);
        }
        void setFechaEntrada(){
            int dia, mes, ano;
            cout << "Ingrese la fecha de entrada (DIA/MES/AÑO)" << endl;
            cout << "Ingrese el dia (1-31): ";
            cin >> dia;
            while (dia < 1 || dia > 31){
                cout << "Dia ingresado de forma erronea, digite el numero correctamente (1-31): ";
                cin >> dia;
            }
            cout << "Ingrese el mes (1-12): ";
            cin >> mes;
            while (mes < 1 || mes > 12){
                cout << "Mes ingresado de forma erronea, digite el numero correctamente (1-12): ";
                cin >> mes;                
            }
            cout << "Ingrese el año: ";
            cin >> ano;
            fechaEntrada = to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
        }
        void setNocheEstadia(){
            cout << "Ingrese el numero de noches de la estadia: ";
            cin >> nocheEstadia;
            while (nocheEstadia < 1){
                cout << "Ingrese una cantidad de noches valida: ";
                cin >> nocheEstadia;
            }
        }
        void setPrecioNoche(){
            cout << "Ingrese el valor de una noche: ";
            cin >> precioPorNoche;
            while (precioPorNoche <= 0){
                cout << "Ingrese un valor de noches valido: ";
                cin >> precioPorNoche;
            }
        }
        int getNumero(){
            return numeroReserva;
        }
        string getNombreCliente(){
            return nombreCliente;
        }
        string getFechaEntrada(){
            return fechaEntrada;
        }
        int getNocheEstadia(){
            return nocheEstadia;
        }
        float getPrecioPorNoche(){
            return precioPorNoche;
        }
        void mostrarInformacion(){
            cout << "------------Informacion de la reserva------------" << endl;
            cout << "Numero de reserva: " << numeroReserva << endl;
            cout << "Nombre del cliente: " << nombreCliente << endl;
            cout << "Fecha de entrada: " << fechaEntrada << endl;
            cout << "Cantidad de noches de estadia: " << nocheEstadia << endl;
            cout << "Precio por noche: " << precioPorNoche << endl;
        }
        void actualizarFechaEntrada(string nuevaFecha){
            fechaEntrada = nuevaFecha;
        }
        float calcularCostoTotal(){
            float costoTotal = nocheEstadia * precioPorNoche;
            cout << "Costo total de la reserva: " << costoTotal << endl;
            return costoTotal;
        }
};

int main() {
    ReservaHotel reserva;
    ReservaHotel reserva2(2, "Juan Perez", "10/4/2026", 3, 50000.0);
    reserva.setReserva();
    reserva.calcularCostoTotal();
    reserva.actualizarFechaEntrada("15/4/2026");
    reserva.mostrarInformacion();
    reserva.calcularCostoTotal();
    reserva2.mostrarInformacion();
    reserva2.calcularCostoTotal();
    reserva2.actualizarFechaEntrada("15/4/2026");
    reserva2.mostrarInformacion();
    reserva2.calcularCostoTotal();
    return 0;
}