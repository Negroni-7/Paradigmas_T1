#include <iostream>
#include <vector>
using namespace std;

class Matriz{
    private: 
        int filas;
        int columnas;
        vector<vector<int>> datos;
    public:
        Matriz(){
            filas = pedirFilas();
            columnas = pedirColumnas();
            datos.resize(filas, vector<int>(columnas));
        }

    int pedirFilas(){
        int f;
        cout << "Ingrese cantidad de filas: ";
        cin >> f;
        return f;
    }

    int pedirColumnas(){
        int c;
        cout << "Ingrese cantidad de columnas: ";
        cin >> c;
        return c;
    }

    void ingresarDatos(){
        cout << "Ingrese los valores para la matriz de " << filas << "x" << columnas << ": " << endl;
        for (int i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
                cout << "Elemento [" << i << "][" << j << "]: ";
                cin >> datos[i][j];
            }
        }
    }
    
    void mostrarDatos(){
        cout << "---Matriz " << filas << "x" << columnas << "---" << endl;
        for (int i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
                cout << "[" << datos[i][j] << "]";
            }
            cout << endl;  
        }
    }

    void mayorSumaFila(){
        int mayor = 0;
        int suma = 0;
        int mayorFila = 0;
        for (int i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
                suma += datos[i][j];
            }
            if (suma > mayor){
                mayorFila = i;
                mayor = suma;
            }
            cout << "Suma de la fila " << i << ": " << suma << endl;
            suma = 0;
        }
        cout << "La fila con mayor suma es: " << mayorFila << "con: " << mayor << endl;
    }

        void mayorSumaColumna(){
        int mayor = 0;
        int suma = 0;
        int mayorColumna = 0;
        for (int j = 0; j < columnas; j++){
            for (int i = 0; i < filas; i++){
                suma += datos[i][j];
            }
            if (suma > mayor){
                mayorColumna = j;
                mayor = suma;
            }
            cout << "Suma de la columna " << j << ": " << suma << endl;
            suma = 0;
        }
        cout << "La columna con mayor suma es: " << mayorColumna << "con: " << mayor << endl;
    }
};

int main(){
    Matriz matriz;
    matriz.ingresarDatos();
    matriz.mostrarDatos();
    matriz.mayorSumaFila();
    matriz.mayorSumaColumna();
}