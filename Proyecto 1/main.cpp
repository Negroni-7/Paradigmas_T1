#include <iostream>
#include <string>
#include "cardiovascular.h"
#include "fuerza.h"
#include "rutinas.h"

using namespace std;

const int MAX_EJERCICIOS = 30;
const int MAX_RUTINAS = 10;

Ejercicio* ejercicios[MAX_EJERCICIOS];
int cantEjercicios = 0;

Rutina* rutinas[MAX_RUTINAS];
int cantRutinas = 0;

//Menus
void menuPrincipal();
void menuEjercicios();
void menuRutinas();
//Se gestinona los ejercicios
void registrarEjercicios();
void eliminarEjercicios();
void consultarEjercicios();
void listarPorIntensidad();
//Se gestiona las Rutinas
void crearRutina();
void consultarRutina();
//Utilidades
int buscarEjerciciosPorID(int id);
void mostrarListaEjercicios();

int main() {
    cout << "-----------------------------------" << endl;
    cout << "Sistema de Gestion de Entrenamiento" << endl;
    cout << "-----------------------------------" << endl;
    menuPrincipal();
    return 0;
}

void menuPrincipal (){
    int opcion;
    do {
        cout << "\n--------- MENU PRINCIPAL ---------" << endl;
        cout << "1. Gestion de Ejercicios" << endl;
        cout << "2. Gestion de Rutinas" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1: menuEjercicios(); break;
            case 2: menuRutinas(); break;
            case 3: cout << "Saliendo Adios Usuario" << endl; break;
            default: cout << "Opcion invalida, intente nuevamente." << endl;
        }
    } while (opcion != 3);
}

void menuEjercicios() {
    int opcion;
    do {
        cout << "\n------ GESTION DE EJERCICIOS ------" << endl;
        cout << "1. Registrar nuevo ejercicios" << endl;
        cout << "2. Eliminar ejercicio" << endl;
        cout << "3. Consultar ejercicio" << endl;
        cout << "4. Listar ejercicios por intensidad" << endl;
        cout << "5. Vover al menu principal" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        switch (opcion){
        case 1: registrarEjercicios(); break;
        case 2: eliminarEjercicios(); break;
        case 3: consultarEjercicios(); break;
        case 4: listarPorIntensidad(); break;
        case 5: break;
        default: cout << "Opcion invalida, intente nuevamente." << endl;
        }
    } while (opcion != 5);
}

void menuRutinas() {
    int opcion;
    do {
        cout << "\n------ GESTION DE RUTINAS ------" << endl;
        cout << "1. Crear rutina" << endl;
        cout << "2. Consultar rutina" << endl;
        cout << "3. Volver al menu principal" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        switch (opcion){
            case 1: crearRutina(); break;
            case 2: consultarRutina(); break;
            case 3: break;
            default: cout << "Opcion invalida, intente nuevamente." << endl;
        }
    } while (opcion != 3);
}

void registrarEjercicios() {
    if (cantEjercicios >= MAX_EJERCICIOS) {
        cout << "Se ha alcanzado el maximo de ejercicios registrados (" << MAX_EJERCICIOS << ")." << endl;
        return;  
    }

    int tipoEjercicio;
    cout << "\n------ REGISTRAR EJERCICIO ------" << endl;
    cout << "Tipo de ejercicio:" << endl;
    cout << "1. Cardiovascular" << endl;
    cout << "2. Fuerza" << endl;
    cout << "Seleccione el tipo: ";
    cin >> tipoEjercicio;
    if (tipoEjercicio == 1) {
        ejercicios[cantEjercicios] = new Cardiovascular();
        cantEjercicios++;
        cout << "\n Ejercicio cardiovascular registrado correctamente." << endl;
    } else if (tipoEjercicio == 2) {
        ejercicios[cantEjercicios] = new Fuerza();
        cantEjercicios++;
        cout << "\n Ejercicio de fuerza registrado correctamente." << endl;
    } else {
        cout << "Tipo ejercicio invalido. No se registro ningun ejercicio" << endl;
    }
}

void eliminarEjercicios() {
    if (cantEjercicios == 0) {
        cout << "No hay ejercicios registrados." << endl;
        return;
    }
    mostrarListaEjercicios();

    int id;
    cout << "\n Ingrese el ID del ejercicio a eliminar: ";
    cin >> id;
    int indice = buscarEjerciciosPorID(id);

    if (indice == -1) {
        cout << "No se encontro un ejercicio con ID " << id << "." << endl;
        return;
    }

    delete ejercicios[indice];
    for (int i = indice; i < cantEjercicios - 1; i++){
        ejercicios[i] = ejercicios[i + 1];
    }
    cantEjercicios--;
    cout << "Ejercicio eliminado correctamente." << endl;
}

void consultarEjercicios() {
    if (cantEjercicios == 0) {
        cout << "No hay ejercicios registrados." << endl;
        return;
    }
    mostrarListaEjercicios();

    int id;
    cout << "\n Ingrese el ID del ejercicio a consultar: ";
    cin >> id;

    int indice = buscarEjerciciosPorID(id);

    if (indice == -1){
        cout << "No se encontro un ejercicio con ID " << id << "." << endl;
        return;
    }
    Ejercicio* e = ejercicios[indice];
    cout << "\n--- INFORMACION DEL EJERCICIO ---" << endl;
    cout << "ID:               " << e->getID() << endl;
    cout << "Nombre:           " << e->getNombre() << endl;
    cout << "Intensidad:       " << e->getIntensidad() << endl;
    cout << "Tiempo:           " << e->getTiempo() << " minutos" << endl;
    cout << "Descripcion:      " << e->getDescripcion() << endl;
    cout << "Gasto base:       " << e->getGastoBase() << " cal" << endl;
    cout << "Gasto energetico: " << e->calcularGastoEnergetico() << " cal" << endl;

    Cardiovascular* cardio = dynamic_cast<Cardiovascular*>(e);
    if (cardio != nullptr) {
        cout << "Tipo:             Cardiovascular" << endl;
        cout << "Distancia:        " << cardio->getDistancia() << " metros" << endl;
        cout << "Velocidad:        " << cardio->getVelocidad() << " m/s" << endl;
    }

    Fuerza* fuerza = dynamic_cast<Fuerza*>(e);
    if (fuerza != nullptr) {
        cout << "Tipo:             Fuerza" << endl;
        cout << "Series:           " << fuerza->getSeries() << endl;
        cout << "Repeticiones:     " << fuerza->getRepeticiones() << endl;
        cout << "Peso:             " << fuerza->getPeso() << " kg" << endl;
    }
}

int buscarEjerciciosPorID(int id) {
    for (int i = 0; i < cantEjercicios; i++) {
        if (ejercicios[i]->getID() == id) return i;
    }
    return -1;
}

void mostrarListaEjercicios() { cout << "Por implementar..." << endl; }

void listarPorIntensidad() {
    if ( cantEjercicios == 0 ) {
        cout << "No hay ejercicios registrados." << endl;
        return;
    }
    int maxIntensidad = 0;
    Ejercicio* listaAux[MAX_EJERCICIOS];

    for (int i = 0; i < cantEjercicios; i++) {
        if (ejercicios[i]->getIntensidad() == 5) {
           cout << "Intensidad: "<< ejercicios[i]->getIntensidad()
                << " | ID: " << ejercicios[i]->getID()
                << " | Nombre: " << ejercicios[i]->getNombre() << endl;
        }
    }

    for (int i = 0; i < cantEjercicios; i++) {
        if (ejercicios[i]->getIntensidad() == 8) {
            cout << "Intensidad: "<< ejercicios[i]->getIntensidad()
                 << " | ID: " << ejercicios[i]->getID()
                 << " | Nombre: " << ejercicios[i]->getNombre() << endl;
        }
    }

    for (int i = 0; i < cantEjercicios; i++) {
        if (ejercicios[i]->getIntensidad() == 12) {
            cout << "Intensidad: "<< ejercicios[i]->getIntensidad()
                 << " | ID: " << ejercicios[i]->getID()
                 << " | Nombre: " << ejercicios[i]->getNombre() << endl;
        }
    }

    for (int i = 0; i < cantEjercicios; i++) {
        if (ejercicios[i]->getIntensidad() == 15) {
            cout << "Intensidad: "<< ejercicios[i]->getIntensidad()
                 << " | ID: " << ejercicios[i]->getID()
                 << " | Nombre: " << ejercicios[i]->getNombre() << endl;
        }
    }

}
void crearRutina()            { cout << "Por implementar..." << endl; }
void consultarRutina()        { cout << "Por implementar..." << endl; }