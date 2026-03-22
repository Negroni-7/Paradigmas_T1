#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Calificaciones {
private:
  vector<float> calificaciones;
  int cantidad;
  float promedio;
  float cal_min;
  float cal_max;

public:
  Calificaciones() {
    calificaciones.clear();
    cantidad = 0;
    promedio = 0;
    cal_min = 0;
    cal_max = 0;
  }

  void leerCalificaciones() {
    // Se pregunta cuantas notas desea ingresar
    int cantidad_notas;
    cout << "Ingrese el numero de calificaciones que desea ingresar: " << endl;

    // Verificador de que se a ingresado el valor correspondiente
    while (!(cin >> cantidad_notas) or cantidad_notas < 1) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Cantidad invalida, ingrese un numero entero mayor a 0." << endl;
    }

    // Ciclo para ingresar notas a la lista
    for (int i = 0; i < cantidad_notas; i++) {
      float calificacion;
      cout << "Ingrese calificacion " << i + 1 << " (debe ser un numero entre 1 y 7, incluyendo esos valores): ";

      // Verificador de que se a ingresado el valor correspondiente
      while (!(cin >> calificacion) or (calificacion < 1 or calificacion > 7)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Debe ingresar un numero entre 1 y 7, incluyendo esos valores: " << endl;
      }

      // Se agrega la nota a la lista
      calificaciones.push_back(calificacion);
      cout << "Calificacion agregada correctamente." << endl;
      cout << "----------------------------------------\n" << endl;
    }

    // Además, se agrega la cantidad de notas ingresadas
    cantidad = (int) calificaciones.size();
    // Aviso al usuario
    cout << "Todas las notas agregadas correctamente: " << cantidad_notas << "/" << cantidad_notas << endl;

    // Se agrega la nota mínima y la máxima
    cal_min = *min_element(calificaciones.begin(), calificaciones.end());
    cal_max = *max_element(calificaciones.begin(), calificaciones.end());
  }

  void calcular_promedio() {
    float sum = 0;
    // Se suman todas las calificaciones
    for (float i: calificaciones) {
      sum += i;
    }

    promedio = sum / (float) calificaciones.size();
  }

  void listarCalificadionesSobrePromedio() {
    cout << "Calificaciones sobre el promedio:" << endl;
    for (int i: calificaciones) {
      if (i > promedio) {
        cout << i << " | ";
      }
    }
    cout << endl;
  }

  void mostrarCalificacionMinima() const {
    cout << "La nota minima es " << cal_min << "." << endl;
  }

  void mostrarCalificacionMaxima() const {
    cout << "La nota maxima es " << cal_max << "." << endl;
  }

  void mostrarDatosCalificaciones() const {
    cout << endl;
    mostrarCalificacionMinima();
    mostrarCalificacionMaxima();
    cout << "El promedio de las notas es " << promedio << endl;
    cout << endl;
  }

  int obtenerCantidad() const {
    return cantidad;
  }
};


int main() {
  int opcion;
  Calificaciones notas;
  do {
    cout << "Seleccione opcion:" << endl;
    cout << "1. Agregar datos" << endl;
    cout << "2. Ver notas sobre el promedio." << endl;
    cout << "3. Ver nota minima, maxima y promedio de notas." << endl;
    cout << "4. Salir" << endl;
    // Verificador+
    while (!(cin >> opcion) or opcion < 1 or (opcion > 4)) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Opcion no valida, intente de nuevo." << endl;
    }

    switch (opcion) {
      case 1:
        notas.leerCalificaciones();
        notas.calcular_promedio();
        break;

      case 2:
        if (notas.obtenerCantidad() == 0) {
          cout << "Debe agregar notas antes de seleccionar esta opcion." << endl;
          break;
        }

        notas.listarCalificadionesSobrePromedio();
        break;

      case 3:
        if (notas.obtenerCantidad() == 0) {
          cout << "Debe agregar notas antes de seleccionar esta opcion." << endl;
          break;
        }

        notas.mostrarDatosCalificaciones();
        break;

      default:
        cout << "Opcion no valida, intente de nuevo." << endl;
    }
  } while (opcion != 4);

  return 0;
}
