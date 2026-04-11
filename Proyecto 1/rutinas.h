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
        int k = 1;
        cout << " \n  Ejercicios de Fuerza \n" << endl;
        for (int i = 0; i < (int)ejercicios.size(); i++){
            Fuerza* fuerza = dynamic_cast<Fuerza*>(ejercicios[i]);
            if (fuerza != nullptr) {
                cout << k << ". "
                     << "ID: "        << ejercicios[i]->getID()
                     << " | Nombre: " << ejercicios[i]->getNombre()
                     << " | Intensidad: " << ejercicios[i]->getIntensidadString()
                     << " | Tiempo: " << ejercicios[i]->getTiempo() << " min"
                     << " | Gasto: "  << ejercicios[i]->calcularGastoEnergetico() << " cal"
                     << endl;
                k++;
            }
        }
        cout << " \n Ejercicios cardiovasculares  \n" << endl;
        for (int i = 0; i < (int)ejercicios.size(); i++) {
            Cardiovascular* cardio = dynamic_cast<Cardiovascular*>(ejercicios[i]);
            if (cardio != nullptr) {

                cout << k << ". "
                     << "ID: "        << ejercicios[i]->getID()
                     << " | Nombre: " << ejercicios[i]->getNombre()
                     << " | Intensidad: " << ejercicios[i]->getIntensidadString()
                     << " | Tiempo: " << ejercicios[i]->getTiempo() << " min"
                     << " | Gasto: "  << ejercicios[i]->calcularGastoEnergetico() << " cal"
                     << endl;
                k++;
            }
        }
    cout <<"\n\n"<< endl;
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

