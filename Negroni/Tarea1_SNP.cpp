// Fiona Catalina Castro Villarroel 21501220-4
// José-Tomás Guzmán  Ilabel 21.132.176-8
// Máximo Eduardo González Arriagada 21.978.604-2
// Stefano Negroni Postiglione  21.945.448-1
// Pablo Antonio Labra Jabre 21.280.591-2
// Isabella Victoria Quintero González 25.868.144-4

#include <iostream>
#include <cmath>
using namespace std;
int eleccion;
// Se crean las variables que se utilizarán
float resultado = 0, n , k;
int main() {
    // Texto para mostrar al usuario que opciones tiene a elegir
    cout<< "Sumatorias\n\n";
    cout<< "Sumatoria 1: 1 + 1/2 + 1/3 + ... + 1/n\n";
    cout<< "Sumatoria 2: 1/2^2 + 2/3^2 + 3/4^2 + ... + n/(n+1)^2\n";
    cout<< "Sumatoria 3: 1/K + 2/K^2 + 3/K^3 + ... + n/K^n\n";
    cout<<"Elija que sumatoria desea realizar: \n\n";
    // Elección se le asigna el número que eligio el usuario
    cin >> eleccion;
    // Se entra en el Switch para ejecutar la sumatoria que el usuario desea
    // En caso de colocar otro número o esribir un dato no válido, el programa termina
    switch (eleccion){

        case 1:
            cout << "Ingrese el valor de n"<< endl;
            cin >> n;
            // Operatoria de la sumatoria
            for (float i = 1; i <= n ; i++){
                resultado = (resultado + 1/i);
            }
            cout << "El valor de la sumatoria es: "<<resultado<<endl;
            break;

        case 2:
            cout << "Ingrese el valor de n"<< endl;
            cin >> n;
            // Operatoria de la sumatoria
            for(float i = 1; i <=n; i++){
                resultado = (resultado + (i/pow(i + 1, 2)));
            }
            cout << "El valor de la sumatoria es: "<<resultado<<endl;
            break;

        case 3:
            cout << "Ingrese el valor de n"<< endl;
            cin >> n;
            cout << "Ingrese el valor de k"<< endl;
            cin >> k;
            // Operatoria de la sumatoria
            for (float i = 1; i <= n ; i++){
                resultado = (resultado + (i/pow(k,i)));
            }
            cout << "El valor de la sumatoria es: "<<resultado<<endl;
            break;

        default:
            // Mensaje de despedida al usuario al elegir opción inválida
            cout << "Adios"<< endl;
        break;
    }
    return 0;
}
