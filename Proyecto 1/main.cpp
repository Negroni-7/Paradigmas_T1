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

//Menús
void menuPrincipal();
void menuEjercicios();
void menuRutinas();
//Se gestiona los ejercicios
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
    cout << "Sistema de Gestión de Entrenamiento" << endl;
    cout << "-----------------------------------" << endl;

    // Cardiovasculares: (id, nombre, intensidad, tiempo, descripción, distancia, velocidad)
    ejercicios[cantEjercicios++] = new Cardiovascular(1, "Trote",    5,  30, "Trote ligero en parque",    3000, 2.5);
    ejercicios[cantEjercicios++] = new Cardiovascular(2, "Ciclismo", 8,  45, "Bicicleta a ritmo moderado",15000, 5.5);
    ejercicios[cantEjercicios++] = new Cardiovascular(3, "Natacion", 12, 60, "Nado continuo en piscina",  2000, 1.2);

    // Fuerza: (id, nombre, intensidad, tiempo, descripción, series, repeticiones, peso)
    ejercicios[cantEjercicios++] = new Fuerza(4, "Sentadilla",    8,  40, "Sentadilla con barra",    4, 12, 60.0);
    ejercicios[cantEjercicios++] = new Fuerza(5, "Press banca",   12, 45, "Press banca plano",       4, 10, 80.0);
    ejercicios[cantEjercicios++] = new Fuerza(6, "Peso muerto",   15, 50, "Peso muerto convencional", 5, 8,  100.0);

    menuPrincipal();
    return 0;
}

void menuPrincipal (){
    int opcion;
    do {
        cout << "\n--------- MENU PRINCIPAL ---------" << endl;
        cout << "1. Gestión de Ejercicios" << endl;
        cout << "2. Gestión de Rutinas" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        switch (opcion){
            case 1: menuEjercicios(); break;
            case 2: menuRutinas(); break;
            case 3: cout << "Saliendo. Adiós usuario." << endl; break;
            default: cout << "Opción inválida, intente nuevamente." << endl;
        }
    } while (opcion != 3);
}

void menuEjercicios(){
    int opcion;
    do {
        cout << "\n------ GESTIÓN DE EJERCICIOS ------" << endl;
        cout << "1. Registrar nuevo ejercicio" << endl;
        cout << "2. Eliminar ejercicio" << endl;
        cout << "3. Consultar ejercicio" << endl;
        cout << "4. Listar ejercicios por intensidad" << endl;
        cout << "5. Volver al menu principal" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        switch (opcion){
        case 1: registrarEjercicios(); break;
        case 2: eliminarEjercicios(); break;
        case 3: consultarEjercicios(); break;
        case 4: listarPorIntensidad(); break;
        case 5: break;
        default: cout << "Opción inválida, intente nuevamente." << endl;
        }
    } while (opcion != 5);
}

void menuRutinas(){
    int opcion;
    do {
        cout << "\n------ GESTIÓN DE RUTINAS ------" << endl;
        cout << "1. Crear rutina" << endl;
        cout << "2. Consultar rutina" << endl;
        cout << "3. Volver al menu principal" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        switch (opcion){
            case 1: crearRutina(); break;
            case 2: consultarRutina(); break;
            case 3: break;
            default: cout << "Opción inválida, intente nuevamente." << endl;
        }
    } while (opcion != 3);
}

void registrarEjercicios(){
    if (cantEjercicios >= MAX_EJERCICIOS){
        cout << "Se ha alcanzado el máximo de ejercicios registrados (" << MAX_EJERCICIOS << ")." << endl;
        return;  
    }

    int tipoEjercicio;
    cout << "\n------ REGISTRAR EJERCICIO ------" << endl;
    cout << "Tipo de ejercicio:" << endl;
    cout << "1. Cardiovascular" << endl;
    cout << "2. Fuerza" << endl;
    cout << "Seleccione el tipo: ";
    cin >> tipoEjercicio;
    if (tipoEjercicio == 1){
        ejercicios[cantEjercicios] = new Cardiovascular();
        cantEjercicios++;
        cout << "\n Ejercicio cardiovascular registrado correctamente." << endl;
    } else if (tipoEjercicio == 2){
        ejercicios[cantEjercicios] = new Fuerza();
        cantEjercicios++;
        cout << "\n Ejercicio de fuerza registrado correctamente." << endl;
    } else {
        cout << "Tipo ejercicio inválido. No se registró ningún ejercicio." << endl;
    }
}

void eliminarEjercicios(){
    if (cantEjercicios == 0){
        cout << "No hay ejercicios registrados." << endl;
        return;
    }
    mostrarListaEjercicios();

    int id;
    cout << "\n Ingrese el ID del ejercicio a eliminar: ";
    cin >> id;
    int indice = buscarEjerciciosPorID(id);

    if (indice == -1){
        cout << "No se encontró un ejercicio con ID " << id << "." << endl;
        return;
    }

    delete ejercicios[indice];
    for (int i = indice; i < cantEjercicios - 1; i++){
        ejercicios[i] = ejercicios[i + 1];
    }
    cantEjercicios--;
    cout << "Ejercicio eliminado correctamente." << endl;
}

void consultarEjercicios(){
    if (cantEjercicios == 0){
        cout << "No hay ejercicios registrados." << endl;
        return;
    }
    mostrarListaEjercicios();
    int id;
    cout << "\n Ingrese el ID del ejercicio a consultar: ";
    cin >> id;
    int indice = buscarEjerciciosPorID(id);
    if (indice == -1){
        cout << "No se encontró un ejercicio con ID " << id << "." << endl;
        return;
    }
    Ejercicio* e = ejercicios[indice];
    cout << "\n--- INFORMACIÓN DEL EJERCICIO ---" << endl;
    cout << "ID:               " << e->getID() << endl;
    cout << "Nombre:           " << e->getNombre() << endl;
    cout << "Intensidad:       " << e->getIntensidadString() << endl;
    cout << "Tiempo:           " << e->getTiempo() << " minutos" << endl;
    cout << "Descripción:      " << e->getDescripcion() << endl;
    cout << "Gasto base:       " << e->getGastoBase() << " cal" << endl;
    cout << "Gasto energético: " << e->calcularGastoEnergetico() << " cal" << endl;

    Cardiovascular* cardio = dynamic_cast<Cardiovascular*>(e);
    if (cardio != nullptr){
        cout << "Tipo:             Cardiovascular" << endl;
        cout << "Distancia:        " << cardio->getDistancia() << " metros" << endl;
        cout << "Velocidad:        " << cardio->getVelocidad() << " m/s" << endl;
    }

    Fuerza* fuerza = dynamic_cast<Fuerza*>(e);
    if (fuerza != nullptr){
        cout << "Tipo:             Fuerza" << endl;
        cout << "Series:           " << fuerza->getSeries() << endl;
        cout << "Repeticiones:     " << fuerza->getRepeticiones() << endl;
        cout << "Peso:             " << fuerza->getPeso() << " kg" << endl;
    }
}

int buscarEjerciciosPorID(int id){
    for (int i = 0; i < cantEjercicios; i++){
        if (ejercicios[i]->getID() == id) 
            return i;
    }
    return -1;
}

void mostrarListaEjercicios(){
    cout << "\n--- LISTA DE EJERCICIOS ---" << endl;
    for(int i = 0; i < cantEjercicios; i++){
        cout << "ID: " << ejercicios[i]->getID()
             << " | Nombre: " << ejercicios[i]->getNombre() << endl;
    }
}
void listarPorIntensidad(){

    if ( cantEjercicios == 0 ){
        cout << "No hay ejercicios registrados." << endl;
        return;
    }

    for (int i = 0; i < cantEjercicios; i++){
        if (ejercicios[i]->getIntensidad() == 5){
            cout << "Intensidad: "<< ejercicios[i]->getIntensidadString()
                 << " | ID: " << ejercicios[i]->getID()
                 << " | Nombre: " << ejercicios[i]->getNombre() << endl;
        }
    }

    for (int i = 0; i < cantEjercicios; i++){
        if (ejercicios[i]->getIntensidad() == 8){
            cout << "Intensidad: "<< ejercicios[i]->getIntensidadString()
                 << " | ID: " << ejercicios[i]->getID()
                 << " | Nombre: " << ejercicios[i]->getNombre() << endl;
        }
    }

    for (int i = 0; i < cantEjercicios; i++){
        if (ejercicios[i]->getIntensidad() == 12){
            cout << "Intensidad: "<< ejercicios[i]->getIntensidadString()
                 << " | ID: " << ejercicios[i]->getID()
                 << " | Nombre: " << ejercicios[i]->getNombre() << endl;
        }
    }

    for (int i = 0; i < cantEjercicios; i++){
        if (ejercicios[i]->getIntensidad() == 15){
            cout << "Intensidad: "<< ejercicios[i]->getIntensidadString()
                 << " | ID: " << ejercicios[i]->getID()
                 << " | Nombre: " << ejercicios[i]->getNombre() << endl;
        }
    }

}

void crearRutina(){
    if (cantRutinas >= MAX_RUTINAS){
        cout << "No se pueden ingresar más rutinas, se llegó al máximo." << endl;
        return; 
    }
    if (cantEjercicios == 0){
        cout << "No hay ejercicios registrados, registre ejercicios para crear una rutina." << endl;
        return;
    }
    rutinas[cantRutinas] = new Rutina();
    int opcion;
    do {
        mostrarListaEjercicios();
        cout << "\nIngrese el ID del ejercicio a agregar (0 para terminar): ";
        cin >> opcion;

        if (opcion == 0) {
            break;
        }
        int indice = buscarEjerciciosPorID(opcion);
        if (indice == -1){
            cout << "No se encontró un ejercicio con ID " << opcion << "." << endl;
        } 
        else{
            rutinas[cantRutinas]->agregarEjercicio(ejercicios[indice]);
            cout << "Ejercicio '" << ejercicios[indice]->getNombre() << "' agregado." << endl;
        }
    } while (true);    
    cantRutinas++;
    cout << "Rutina creada exitosamente." << endl;
}


void consultarRutina(){
    if (cantRutinas == 0){
        cout << "No hay rutinas registradas." << endl;
        return;
    }
    cout << "\n--- LISTA RUTINAS ---" << endl;
    for(int i = 0; i < cantRutinas; i++){
        cout << "ID: " << rutinas[i]->getID()
             << " | Nombre: " << rutinas[i]->getNombre() << endl;
    }
    int id;
    cout << "\nIngrese el ID de la rutina a consultar: ";
    cin >> id;
    for (int i = 0; i < cantRutinas; i++){
        if (rutinas[i]->getID() == id) {
            rutinas[i]->mostrarRutina();
            return;
        }
    }
    cout << "No se encontró una rutina con ID " << id << "." << endl;
}
