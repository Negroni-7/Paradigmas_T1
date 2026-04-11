#pragma once // investigar que chota es
#include "ejercicio.h"
#include "cardiovascular.h"
#include "fuerza.h"
#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

class Rutina {
private:
    int ID;
    vector<Ejercicio*> ejercicios;
    string nombre;
    int cantCardio;
    int cantFuerza;

public:
    Rutina(){
        setID();
        setNombre();
    }
    //Setters
    void setID() {
        static int contador = 0;
        ID = ++contador;
        cout << "ID asignado automaticamente: " << ID << endl;
}
    void setNombre(){
        cout << "Ingrese nombre de la rutina: ";
        getline(cin >> ws, nombre); // get line permite ingresar espacios
    }

    //Getters
    int getID(){
        return ID;
    }

    string getNombre(){
        return nombre;
    }

    //Utilities
    void mostrarRutina(){
        if (ejercicios.empty()) {
            cout << "La rutina no tiene ejercicios." << endl;
            return;
        }
        cout << "\n--- RUTINA: " << getNombre() << " ---" << endl;
        for (int i = 0; i < (int)ejercicios.size(); i++){
            cout << i + 1 << ". "
                 << "ID: "        << ejercicios[i]->getID()
                 << " | Nombre: " << ejercicios[i]->getNombre()
                 << " | Intensidad: " << ejercicios[i]->getIntensidad()
                 << " | Tiempo: " << ejercicios[i]->getTiempo() << " min"
                 << " | Gasto: "  << ejercicios[i]->calcularGastoEnergetico() << " cal"
                 << endl;
        }
    mostrarTiempoTotal();
    mostrarGastoTotal();
    }

    void mostrarTiempoTotal(){
        float total = 0;
        for (int i = 0; i < (int)ejercicios.size(); i++)
            total += ejercicios[i]->getTiempo();
        cout << "Tiempo total de la rutina: " << total << " minutos" << endl;
    }

    void mostrarGastoTotal(){
        float total = 0;
        for (int i = 0; i < (int)ejercicios.size(); i++)
            total += ejercicios[i]->getGastoEnergetico();
        cout << "Gasto total de la rutina: " << total << " calorias" << endl;
    }

    void agregarEjercicio(Ejercicio* e) {
        ejercicios.push_back(e);
    }
};

