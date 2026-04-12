#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Calificaciones{
    private:
        vector <float> calificaciones;
        int cantidad;
        float promedio;
        float cal_min;
        float cal_max;
    public:
        //Constructor
        Calificaciones(){
            cantidad = 0;
            promedio = 0.0;
            cal_min = 0.0;
            cal_max = 0.0;
        }

        void leerCalificaciones(){
            setCantidad();
            for (int i = 0; i < cantidad; i++){
                setCalificaciones();
            }
            cout << "¡Notas ingresadas con exito!" << endl;
            setPromedio();
            setMaximo();
            setMinimo();
        }

        //Setters
        void setCantidad(){
            cout << "Ingrese cantidad de notas a ingresar: ";
            cin >> cantidad;
            while (cantidad < 0){
                cout << "Ingrese una cantidad de notas valida: ";
                cin >> cantidad;
            }
        }

        void setCalificaciones(){
            float nota;
            cout << "Ingrese una calificaciones entre el 1.0 y el 7.0: ";
            cin >> nota;
            while (nota < 1.0 || nota > 7.0){
                cout << "Ingrese una calificacion valida entre 1.0 y 7.0, intente de nuevo: ";
                cin >> nota;
            }
            calificaciones.push_back(nota);
        }   

        void setPromedio(){
            float prom = 0;
            if (cantidad == 0){
                return;
            }
            for (float n: calificaciones){
                prom += n;
            }
            promedio = prom/calificaciones.size();
        }

        void setMaximo(){
            cal_max = *max_element(calificaciones.begin(), calificaciones.end());
        }
        
        void setMinimo(){
            cal_min = *min_element(calificaciones.begin(), calificaciones.end());
        }

        //Getters
        vector<float> getCalificaciones(){
            return calificaciones;
        }

        int getCantidad(){
            return cantidad;
        }

        float getPromedio(){
            return promedio;
        }

        float getMaximo(){
            return cal_max;
        }

        float getMinimo(){
            return cal_min;
        }

        //Utilitys
        void mostrarCalificaciones(){
            for (float n : getCalificaciones()){
                cout << n << " ";
            }
        }

        void listarCalificacionesSobrePromedio(){
            cout << "Notas mayores al promedio " << getPromedio() << endl;
            for (float n : calificaciones){
                    if (n > getPromedio()){
                        cout << n << " ";
                    }
            }
        }

        void mostrarCalificacionMinima(){
            cout << "Nota minima: " << getMinimo() << endl;
        }

        void mostrarCalificacionMaxima(){
            cout << "Nota maxima: " << getMaximo() << endl;
        }
};


int main() {
    Calificaciones calificaciones;
    int opcion;
    do {
        cout << "\n--- MENU CALIFICACIONES ---" << endl;
        cout << "1. Ingresar Notas" << endl;
        cout << "2. Mostrar Calificacion Maxima" << endl;
        cout << "3. Mostrar Calificacion Minima" << endl;
        cout << "4. Listar Notas sobre el Promedio" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                calificaciones.leerCalificaciones();
                break;
            case 2:
                calificaciones.mostrarCalificacionMaxima();
                break;
            case 3:
                calificaciones.mostrarCalificacionMinima();
                break;
            case 4:
                calificaciones.listarCalificacionesSobrePromedio();
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cin.clear();
                cin.ignore(1000000, '\n');
                cout << "Opcion no valida." << endl;
        }
    } while (opcion != 5);
    return 0;
}
