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
        Fuerza(){

        }

        float calcularGastoEnergetico() override {
            return getGastoBase() + (series * repeticiones * peso * 0.1);
        }
};