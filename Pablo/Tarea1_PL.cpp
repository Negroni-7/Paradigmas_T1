//Autor Pablo Labra

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a = 0;   // opcion del menu
    int n;       // cantidad de terminos
    float k;     // base para sumatoria 3
    float resultado; // almacena el resultado de cada sumatoria

    // Bucle principal: se repite hasta que el usuario elija salir (opcion 4)
    while (a != 4){

        // Mostrar menu de opciones al usuario
        cout << "\nSumatorias" << endl;
        cout << "1. Sumatoria 1 = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n" << endl;
        cout << "2. Sumatoria 2 = 1/2^2 + 2/3^2 + 3/4^2 + ... + n/(n+1)^2" << endl;
        cout << "3. Sumatoria 3 = 1/K + 2/K^2 + 3/K^3 + ... + n/K^n" << endl;
        cout << "4. Salir del programa" << endl;
        cout << "Indique la opcion: ";
        cin >> a;

        switch (a){

            case 1:
                resultado = 0;
                cout << "Indique la cantidad de terminos (n): ";
                cin >> n;
                if (n <= 0){
                    cout << "Error: n debe ser mayor a 0." << endl;
                    break;
                }
                for (int i = 1; i <= n; i++){
                    resultado += (1.0 / i);
                }
                cout << "Sumatoria 1: " << resultado << endl;
                break;

            case 2:
                resultado = 0;
                cout << "Indique la cantidad de terminos (n): ";
                cin >> n;
                if (n <= 0){
                    cout << "Error: n debe ser mayor a 0." << endl;
                    break;
                }
                for (int i = 1; i <= n; i++){
                    resultado += ((float)i / pow(i + 1, 2));
                }
                cout << "Sumatoria 2: " << resultado << endl;
                break;

            case 3:
                resultado = 0;
                cout << "Indique la cantidad de terminos (n): ";
                cin >> n;
                if (n <= 0){
                    cout << "Error: n debe ser mayor a 0." << endl;
                    break;
                }
                cout << "Indique el valor de K: ";
                cin >> k;
                if (k == 0){
                    cout << "Error: K no puede ser cero." << endl;
                    break;
                }
                for (int i = 1; i <= n; i++){
                    resultado += ((float)i / pow(k, i));
                }
                cout << "Sumatoria 3: " << resultado << endl;
                break;
            case 4:
                // El usuario elige salir
                cout << "Adios usuario" << endl;
                break;

            default:
                // Opcion fuera del rango 1-4
                cout << "INGRESO UNA OPCION EQUIVOCADA" << endl;
        }
    }

    return 0;
}