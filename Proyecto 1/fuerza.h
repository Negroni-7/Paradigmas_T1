#pragma once // investigar que chota es
#include "ejercicio.h"
#include <iostream>
#include <string>
using namespace std;

class Fuerza : public Ejercicio{
    private:
        int series;
        int repeticiones;
        float peso;
    public:
        Fuerza() : Ejercicio(){
            //Heredados
            setID();
            setNombre();
            setIntensidad();
            setTiempo();
            setDescripcion();
            setGastoBase();
            //Propios
            setSeries();
            setRepeticiones();
            setPeso();
            //Polimorfismo
            setGastoEnergetico();
        }
        //Setters
        void setSeries(){
            cout << "Ingrese la cantidad de series: ";
            cin >> series;
            while (series <= 0){
                cout << "Ingrese una cantidad mayor a 0 para las series del ejercicio: ";
                cin >> series;                
            }
        }

        void setRepeticiones(){
            cout << "Ingrese la cantidad de repeticiones del ejercicio: ";
            cin >> repeticiones;
            while (repeticiones <= 0){
                cout << "Ingrese una cantidad de repeticiones mayor a 0 para el ejercicio";
                cin >> repeticiones;                
            }
        }

        void setPeso(){
            cout << "Ingrese el peso que utilizara en el ejercicio en KG: ";
            cin >> peso;
            while (peso <= 0){
                cout << "Ingrese un peso mayor a 0 para el ejercicio: ";
                cin >> peso;                
            }
        }        

        float calcularGastoEnergetico() override {
            return getGastoBase() + (series * repeticiones * peso * 0.1);
        }
};