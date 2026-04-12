// Fiona Catalina Castro Villarroel 21501220-4
// José-Tomás Guzmán  Ilabel 21.132.176-8
// Máximo Eduardo González Arriagada 21.978.604-2
// Stefano Negroni Postiglione  21.945.448-1
// Pablo Antonio Labra Jabre 21.280.591-2
// Isabella Victoria Quintero González 25.868.144-4

#pragma once // Mejora tiempos de compilación y evita errores de redefinición
#include "ejercicio.h"
#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Cardiovascular : public Ejercicio{
    private:
        float distancia;
        float velocidad;
    public:
        Cardiovascular() : Ejercicio(){
            //Heredados
            setID();
            setNombre();
            setIntensidad();
            setTiempo();
            setDescripcion();
            setGastoBase();
            //Propios
            setDistancia();
            setVelocidad();
            //Polimorfismo
            setGastoEnergetico();
        }
        Cardiovascular(int id, string nom, int intens, float tpo, string desc, float dist, float vel)
            : Ejercicio(id, nom, intens, tpo, desc), distancia(dist), velocidad(vel) {
            setGastoEnergetico();
        }
        //Setters
        //Se ingresa la distacia recorrida
        void setDistancia(){
            cout << "Ingrese la distancia del ejercicio en metros: ";
            while (!(cin >> distancia) || distancia <= 0){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Distancia ingresada inválida, ingrese una distancia mayor a 0 metros: ";
            }
        }            
        // Se ingresa la velocidad promedio del ejercicio
        void setVelocidad(){
            cout << "Ingrese la velocidad del ejercicio en m/s: ";
            while (!(cin >> velocidad) || velocidad <= 0){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Velocidad ingresada inválida, ingrese una velocidad mayor a 0 m/s: ";
            }
        }               

        //Getters
        float getDistancia(){
            return distancia;
        }

        float getVelocidad(){
            return velocidad;
        }

        float calcularGastoEnergetico() override {
            return getGastoBase() * (1 + (getVelocidad()/10.0));
        }
};
