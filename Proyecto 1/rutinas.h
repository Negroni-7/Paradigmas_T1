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
    vector<Cardiovascular> cardio;
    vector<Fuerza> fuerza;
    int cantCardio;
    int cantFuerza;

public:
    Rutina(){
        cout << "...Creando rutina..." << endl;
        cout << "Ingrese la cantidad de ejercicios cardiovasculares que desea agregar a la rutina (maximo 10): ";
        while (!(cin >> cantCardio) || (cantCardio < 0 || cantCardio > 10)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ingrese una cantidad de ejercicios cardiovasculares valida: ";
        }
        cout << "ingrese la cantidad de ejercicios de fuerza que desea agregar a la rutina (maximo 10): ";
        while (!(cin >> cantFuerza) || (cantFuerza < 0 || cantFuerza > 10)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ingrese una cantidad de ejercicios de fuerza valida: ";
        }
        for (int i = 0; i < cantCardio; i++){
            cardio.push_back(Cardiovascular());
        }
        for (int i = 0; i < cantFuerza; i++){
            fuerza.push_back(Fuerza());
        }
    }

    void mostrarRutina(){
        cout << "Rutina  con ejercicios Cardiovascular: " << endl;
        for (int i = 0; i < cantCardio; i++){
            cout << "Ejercicio " << i + 1 << ": " << cardio[i].getNombre() << ", Intensidad: " << cardio[i].getIntensidad() << ", Tiempo: " << cardio[i].getTiempo() << " minutos, Gasto Energetico: " << cardio[i].calcularGastoEnergetico() << " calorias" << endl;
        }
        cout << "Rutina de Fuerza: " << endl;
        for (int i = 0; i < cantFuerza; i++){
            cout << "Ejercicio " << i + 1 << ": " << fuerza[i].getNombre() << ", Intensidad: " << fuerza[i].getIntensidad() << ", Tiempo: " << fuerza[i].getTiempo() << " minutos, Gasto Energetico: " << fuerza[i].calcularGastoEnergetico() << " calorias" << endl;
        }
    }

    float TiempoTotal(){
        float tiempoTotal = 0;
        for (int i = 0; i < cantCardio; i++){
            tiempoTotal += cardio[i].getTiempo();
        }
        for (int i = 0; i < cantFuerza; i++){
            tiempoTotal += fuerza[i].getTiempo();
        }
        return tiempoTotal;
    }

    void mostrartiempoTotal(){
        cout << "\nTiempo total de la rutina: "
             << TiempoTotal()
             << " minutos" << endl;
    }
};

