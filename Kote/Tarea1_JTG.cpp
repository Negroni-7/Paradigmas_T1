/*
Autor: José-Tomás Guzmán Ilabel
*/

#include <cmath>
#include <cctype>
#include <iostream>

//Funcion para solicitar valor n
float pedir_n(){
    int n;
    std::cout << "Ingrese un numero (n): "; std::cin >> n;
    return n;
}

//Funcion para solicitar valor k
float pedir_k(){
    int k;
    std::cout << "Ingrese un numero (k): "; std::cin >> k;
    return k;
}

float sumatoria1(float n){
    float sum = 0;
    for(int i = 1; i<=n; i++){
        sum = sum + 1.0/i;
    }
    return sum;
}

float sumatoria2(float n){
    float sum = 0;
    for(int i = 1; i<=n; i++){
        sum = sum + (float)i/pow(i+1.0,2);
    }
    return sum;
}

float sumatoria3(float n, float k){
    float sum = 0;
    for(int i = 1; i<=n; i++){
        sum = sum + (float)i/pow(k,i);
    }
    return sum;
}

int main() {
    char opcion;
    float sum, n, k;
    //Bucle de repeticion del menu, sale ingresando "d" como opcion
    while (opcion != 'd'){
        std::cout << "Bienvenido al menu de opciones!\n\na)Sumatoria 1: Sumatoria 1: S1 = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n\nb)Sumatoria 2: 1/2^2 + 2/3^2 + 3/4^2 + ... + n/(n+1)^2\nc)Sumatoria 3: 1/K + 2/K^2 + 3/K^3 + ... + n/K^n\nd)Salir\n" << std::endl;
        std::cout << "Ingrese una opcion: "; std::cin >> opcion;
        //Transforma el string ingresado a minusculas
        opcion = tolower(opcion);
        switch(opcion){
            case 'a':{
                n = pedir_n();
                sum = sumatoria1(n);
                std::cout << "El resultado es: \n" << sum << std::endl;
                break;
            }
            case 'b':{
                n = pedir_n();
                sum = sumatoria2(n);
                std::cout << "El resultado es: \n" << sum << std::endl;
                break;
            }
            case 'c':{
                n = pedir_n();
                k = pedir_k();
                sum = sumatoria3(n, k);
                std::cout << "El resultado es: \n" << sum << std::endl;
                break;
            }
            case 'd':{
                break;
            }
            //En caso de input incorrecto solicita reintentar
            default:{
                std::cout << "Opcion invalida, intente de nuevo!\n" << std::endl;
            }
        }
    }
    return 0;
} 