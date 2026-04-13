// Fiona Catalina Castro Villarroel 21501220-4
// José-Tomás Guzmán Ilabel 21.132.176-8
// Máximo Eduardo González Arriagada 21.978.604-2
// Stefano Negroni Postiglione  21.945.448-1
// Pablo Antonio Labra Jabre 21.280.591-2
// Isabella Victoria Quintero González 25.868.144-4

#include <iostream>
#include <string>
using namespace std;

class Reserva_hotel{
    private:
        int Numero_reserva;
        string Nombre_cliente;
        string Fecha_entrada;
        int Noche_estadia;
        float Precio_por_noche;
    
    public:
        // Constructor 
        Reserva_hotel(int num_reserva, string nom_cliente, string fch_entrada, int non_estadia, float prec_por_noche){
            Numero_reserva = num_reserva;
            Nombre_cliente = nom_cliente;
            Fecha_entrada = fch_entrada;
            Noche_estadia = non_estadia;
            Precio_por_noche = prec_por_noche;
        }
        
        //metodos getter
        int getNumeroReserva() { return Numero_reserva; }
        string getNombreCliente() { return Nombre_cliente; }
        string getFechaEntrada() { return Fecha_entrada; }
        int getNocheEstadia() { return Noche_estadia; }
        float getPrecioPor_Noche() { return Precio_por_noche; }
        
        //metodos setter
        void setNumeroReserva(int _numeroReserva) { Numero_reserva = _numeroReserva; }
        void setNombreCliente(string _nombreCliente) { Nombre_cliente = _nombreCliente; }
        void setNocheEstadia(int _nocheEstadia) { Noche_estadia = _nocheEstadia; }
        void setPrecioPor_Noche(float _precioPor_Noche) { Precio_por_noche = _precioPor_Noche; }
        
        //Muestra la informacion de la reserva 
        void mostrarinformacion(){
            cout << "Informacion" << endl;
            cout << "Numero de reserva: " << Numero_reserva << endl;
            cout << "Nombre de cliente: " << Nombre_cliente<< endl;
            cout << "Fecha de entrada: "  << Fecha_entrada << endl;
            cout << "Noche de estadia: " << Noche_estadia << endl;
            cout << "Precio por noche: " << Precio_por_noche<< endl;
            cout << "Costo: " << calcular_costo_total() << endl;
        }
        
        //actualiza las fechas 
        void actualizar_fechas(string fecha_actualizada){
            Fecha_entrada = fecha_actualizada;
        }
        
        //Calcula el costo total
        float calcular_costo_total(){
            return Precio_por_noche * Noche_estadia;
        }
};//god

int main(){
    //testeo del codigo usando variables propias 
    Reserva_hotel miReserva(98, "Maximo Gonzalez", "12-04-2026", 4, 1000.0);
    
    cout << " ESTADO INICIAL" << endl;
    miReserva.mostrarinformacion(); 
    
    // Actualización de la fecha
    cout << "Actualizando fecha de entrada " << endl;
    miReserva.actualizar_fechas("15-04-2026");

    // Mostrar información actualizada
    cout << "Estado actualizado" << endl;
    miReserva.mostrarinformacion(); 
  

    return 0;
}