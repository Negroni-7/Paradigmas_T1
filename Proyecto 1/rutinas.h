// Fiona Catalina Castro Villarroel 21501220-4
// José-Tomás Guzmán  Ilabel 21.132.176-8
// Máximo Eduardo González Arriagada 21.978.604-2
// Stefano Negroni Postiglione  21.945.448-1
// Pablo Antonio Labra Jabre 21.280.591-2
// Isabella Victoria Quintero González 25.868.144-4

#pragma once // Mejora tiempos de compilación y evita errores de redefinición
#include "ejercicio.h"
#include "cardiovascular.h"
#include "fuerza.h"
#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;
// Esta clase almacena el puntero a distintos ejercicios

class Rutina {
private:
    int ID;
    vector<Ejercicio*> ejercicios;
    string nombre;
    int cantEjercicios;

public:
    Rutina(){
        setID();
        setNombre();
    }

    //Setters

    void setID() {
        static int contador = 0;
        ID = ++contador;
        cout << "ID asignado automáticamente: " << ID << endl;
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
        cout << "Gasto total de la rutina: " << total << " calorías" << endl;
    }

    void agregarEjercicio(Ejercicio* e) {
        ejercicios.push_back(e);
    }

    // Revisa si hay un ejercicio en la rutina
    // Función ocupada en el gestor de ejercicios para poder borrar ejercicios
    bool revisarEjercicio(Ejercicio* e) {
        for (int i = 0; i < (int)ejercicios.size(); i++) {
            if (ejercicios[i] == e) {
                return true;
            }
        }
        return false;
    }
};

