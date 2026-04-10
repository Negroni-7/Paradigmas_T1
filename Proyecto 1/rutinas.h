#pragma once // investigar que chota es
#include "ejercicio.h"
#include <iostream>
#include <string>
using namespace std;

class Rutina {
private:
    Cardiovascular cardio[10];
    Fuerza fuerza[10];
    int cantCardio;
    int cantFuerza;

public:
    Rutina(){

        cout << "...Creando rutina..." << endl;

        cout << "ingrese la cantidad de ejercicios cardiovasculares que desea agregar a la rutina (maximo 10): ";
        cin >> cantCardio;
        cout << "ingrese la cantidad de ejercicios de fuerza que desea agregar a la rutina (maximo 10): ";
        cin >> cantFuerza;
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
             << calcularTiempoTotal()
             << " minutos" << endl;
    }
};

