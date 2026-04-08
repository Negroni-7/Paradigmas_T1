#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <ctime>
using namespace std;

class ReservaHotel {
private:
  int numeroReserva;
  string nombreCliente;
  tm fechaEntrada{};
  int nochesEstadia;
  float precioPorNoche;

public:
  // Constructor para asignar valores desde el código
  ReservaHotel(const int reservaID, const string &nombre, const tm fecha_in, const float precio_n,
               const int cantNoches) {
    numeroReserva = reservaID;
    nombreCliente = nombre;
    fechaEntrada = fecha_in;
    nochesEstadia = cantNoches;
    precioPorNoche = precio_n;
  }

  // Costructor para crear una reserva vacía
  ReservaHotel() {
    numeroReserva = 0;
    nombreCliente = "";
    fechaEntrada = tm{};
    nochesEstadia = 0;
    precioPorNoche = 0;
  }

  ~ReservaHotel() = default;

  // Actualizar fecha de entrada
  void actualizarFechaEntrada() {
    int dia, mes, ano;
    cout << "Ingrese el dia de ingreso (1-31):" << endl;
    // Verificador de número válido
    while (!(cin >> dia) || dia < 1 || dia > 31) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Dia inválido. Ingrese un numero entero entre 1 y 31" << endl;
    }
    // Se asigna el dia
    fechaEntrada.tm_mday = dia;

    cout << "Ingrese el mes de ingreso (1-12):" << endl;
    // Verificador de número válido
    while (!(cin >> mes) || mes < 1 || mes > 12) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Mes invalido. Ingrese un numero entero entre 1 y 12" << endl;
    }
    // Se asigna el mes
    fechaEntrada.tm_mon = mes - 1;

    cout << "Ingrese el ano de ingreso :" << endl;
    // Verificador de número válido
    while (!(cin >> ano) || ano < 1) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Ano invalido. Ingrese un numero entero positivo" << endl;
    }
    // Se asigna el año
    fechaEntrada.tm_year = ano;
  }

  // Funciones para mostrar en pantalla la información
  void mostrar_id() const {
    cout << "Numero reserva: " << numeroReserva << endl;
  }

  void mostrar_nombre() const {
    cout << "Nombre de ingreso: " << nombreCliente << endl;
  }

  void mostrarFecha() const {
    cout << "Fecha de ingreso: " << fechaEntrada.tm_mday << "/" << fechaEntrada.tm_mon + 1 << "/" << fechaEntrada.
        tm_year
        << endl;
  }

  void mostrar_cantNoche() const {
    cout << "Cantidad de Noches: " << nochesEstadia << endl;
  }

  void mostrar_precio() const {
    cout << "Valor por noche: " << precioPorNoche << " $" << endl;
  }

  // Calcula  y muestra el costo total de la estadia en base a las noches y el precio de cada una y
  void calcularCostoTotal() const {
    float noches = nochesEstadia;
    float precio = precioPorNoche;
    float total = (noches * precio);
    cout << "Costo total: " << total << endl;
  }

  // Recopila todas las funciones de mostrar en pantalla
  void mostrarInformacion() const {
    mostrar_id();
    mostrar_nombre();
    mostrarFecha();
    mostrar_cantNoche();
    mostrar_precio();
    calcularCostoTotal();
  }
};

int main() {
  tm fechaEntrada{};
  fechaEntrada.tm_mday = 23;
  fechaEntrada.tm_mon = 7;
  fechaEntrada.tm_year = 2016;
  ReservaHotel usuario(1111, "Gabriel Gonzales", fechaEntrada, 75.5, 5);
  usuario.mostrarInformacion();
  usuario.actualizarFechaEntrada();
  usuario.mostrarInformacion();
}
