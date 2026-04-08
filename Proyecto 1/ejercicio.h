#pragma once // investigar que chota es
#include <iostream>
#include <string>
using namespace std;

class Ejercicio{
    private:
        int ID;
        string nombre;
        int intensidad;
        float tiempo;
        string descripcion;
        float gastoBase;
        float gastoEnergetico;
    public:
    //constructor
        Ejercicio() : ID(0), nombre(""), intensidad(0), tiempo(0), descripcion(""), gastoBase(0), gastoEnergetico(0) {}
        virtual float calcularGastoEnergetico() = 0; \\ virtual asociado a la polimorfismo 
        //Setters
        void setID(){
            cout << "Ingrese ID del ejercicio: ";
            cin >> ID;
            while (ID <= 0){
                cout << "Ingrese un numero mayor a 0 para el ID del ejercicio";
                cin >> ID;                
            }
        }

        void setNombre(){
            cout << "Ingrese Nombre del ejercicio: ";
            getline(cin >> ws, nombre);\\ get line permite ingresar espacios
        }

        void setIntensidad(){
            string intens;
            cout << "Ingrese intensidad (Basico, Intermedio, Avanzado o Alto rendimiento): ";
            getline(cin >> ws, intens);
            while (intens != "Basico" && intens != "Intermedio" && intens != "Avanzado" && intens != "Alto rendimiento"){
                cout << "Ingrese intensidad valida (Basico, Intermedio, Avanzado o Alto rendimiento): ";
                getline(cin >> ws, intens);
            }
            if (intens == "Basico"){
                intensidad = 5;
            }
            else if (intens == "Intermedio"){
                intensidad = 8;
            }
            else if (intens == "Avanzado"){
                intensidad = 12;
            }
            else if (intens == "Alto rendimiento"){
                intensidad = 15;
            }
        }

        void setTiempo(){
            cout << "Ingrese el tiempo estimado de duracion del ejercicio en minutos: ";
            cin >> tiempo;
            while (tiempo <= 0){
                cout << "Tiempo ingresado invalido, un tiempo mayor a 0 minutos: ";
                cin >> tiempo; 
            }
        }

        void setDescripcion(){
            cout << "Ingrese la descripcion del ejercicio: ";
            getline(cin >> ws, descripcion);
        }

        void setGastoBase(){
            gastoBase = tiempo * intensidad;
        }

        void setGastoEnergetico(){
            gastoEnergetico = calcularGastoEnergetico();
        }   
        //Getters
        int getID(){
            return ID;
        }

        string getNombre(){
            return nombre;
        }

        int getIntensidad(){
            return intensidad;
        }

        float getTiempo(){
            return tiempo;
        }

        string getDescripcion(){
            return descripcion;
        }

        float getGastoBase(){
            return gastoBase;
        }

        float getGastoEnergetico(){
            return gastoEnergetico;
        }
    };