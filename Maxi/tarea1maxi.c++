// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int eleccion;
float resultado = 0, n , k;
int main() {
    // Write C++ code here
    cout << "Sumatorias\n\n";
    cout << "Sumatoria 1: 1 + 1/2 + 1/3 + ... + 1/n\n";
    cout << "Sumatoria 2: 1/2^2 + 2/3^2 + 3/4^2 + ... + n/(n+1)^2\n";
    cout << "Sumatoria 3: 1/K + 2/K^2 + 3/K^3 + ... + n/K^n\n";
    cout <<"Elija que sumatoria desea realizar: \n\n";
    cin >> eleccion;
    switch (eleccion){
        
        case 1:
            cout << "Ingrese el valor de n"<< endl;
            cin >> n;
            for (float i = 1; i <= n ; i++){
                resultado = (resultado + 1/i);
            }
            cout << "El valor de la sumatoria es: "<<resultado<<endl;
            break;
            
        case 2:
            cout << "Ingrese el valor de n"<< endl;
            cin >> n;
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
            
            for (float i = 1; i <= n ; i++){
                resultado = (resultado + (i/pow(k,i)));
            }
            cout << "El valor de la sumatoria es: "<<resultado<<endl;
            break;
            
        default:
            cout << "Adios"<< endl;
            break;
    }
    return 0;
}
