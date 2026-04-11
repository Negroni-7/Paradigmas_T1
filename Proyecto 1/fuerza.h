#pragma once
#include "ejercicio.h" // Asi se importa en c++
#include <iostream>
#include <string>
#include <limits>
using namespace std;
// Aquí se crea la clase + se agrega la que se importa
class Fuerza : public Ejercicio{
    private:
        int series;
        int repeticiones;
        float peso;
    public:
        // Aqui se tienen que setear tanto como los seters de ejercicios como los nuevos
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
        Fuerza(int id, string nom, int intens, float tpo, string desc, int ser, int rep, float pes)
            : Ejercicio(id, nom, intens, tpo, desc), series(ser), repeticiones(rep), peso(pes) {
            setGastoEnergetico();
        }
        //Setters
        // Se ingresa la cantidad de series realizadas
        void setSeries(){
            cout << "Ingrese la cantidad de series: ";
            // Se crea un bucle para que determine un número mayor a cero y no provoque errores en el calculo
            while (!(cin >> series) || series <= 0){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Ingrese una cantidad mayor a 0 para las series del ejercicio: ";             
            }
        }
        // Se ingresa la cantidad de Repiticiones
        void setRepeticiones(){
            cout << "Ingrese la cantidad de repeticiones del ejercicio: ";
            while (!(cin >> repeticiones) || repeticiones <= 0){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Ingrese una cantidad de repeticiones mayor a 0 para el ejercicio.";
            }
        }
        // Se ingresa la cantidad de peso
        void setPeso(){
            cout << "Ingrese el peso que utilizará en el ejercicio en KG: ";
            while (!(cin >> peso) || peso <= 0){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Ingrese un peso mayor a 0 para el ejercicio: ";               
            }
        }  

        int getSeries(){
            return series;
        }

        int getRepeticiones(){
            return repeticiones;
        }

        float getPeso(){
            return peso;
        }

        // El override sobreescribe la función original para realizar un cambio del valor 0
        float calcularGastoEnergetico() override {
            return getGastoBase() + (series * repeticiones * peso * 0.1);
        }
};