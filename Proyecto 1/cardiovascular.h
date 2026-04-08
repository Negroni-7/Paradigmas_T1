#pragma once // investigar que chota es
#include "ejercicio.h"
#include <iostream>
#include <string>
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

        //Setters
        void setDistancia(){
            cout << "Ingrese la distancia del ejercicio en metros: ";
            cin >> distancia;
            while (distancia <= 0){
                cout << "Distancia ingresada invalida, ingrese una distancia mayor a 0 metros: ";
                cin >> distancia; 
            }
        }            
        
        void setVelocidad(){
            cout << "Ingrese la velocidad del ejercicio en m/s: ";
            cin >> velocidad;
            while (velocidad <= 0){
                cout << "Velocidad ingresada invalida, ingrese una velocidad mayor a 0 m/s: ";
                cin >> velocidad;
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
            return getGastoBase() + (distancia * 10);
        }
};