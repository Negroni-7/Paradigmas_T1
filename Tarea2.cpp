#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
// Se define la calse personas, la cual almacenará todos los datos de las personas en vectores.
// Como los vectores son un tipo de lista, siempre se añadirán los datos de forma ordenada.
// De esta forma se pueden acceder a los datos de cada persona colocando el número de la posición en la que se encuentra
class Personas{
  private:
    // se definen los datos que van a tener las personas
    vector<float> estaturas;
    vector<float> pesos;
    vector<float> imcs;
    vector<string> categoria_imc;

  public:

    // Función para agregar la estatura
    void agregarEstatura(int i){
      float estatura;
      cout << "Ingrese estatura de la persona "<< (i+1) << " en metros: " << endl;
       //Filtro para saber si el usuario colocó un dato válido o no
       while(!(cin >> estatura)){
         cin.clear();
         cin.ignore(1000, '\n');
         cout << "Valor invalido, debe ingresas un número." << endl;
         cout << "Ingrese estatura de la persona "<< (i+1) << " en metros: " << endl;
       }
       // Se agrega a al final del arreglo
       estaturas.push_back(estatura);
    }

    // Función para agregar el peso
    void agregarPesos(int i){
      float peso;
      cout << "Ingrese peso de la persona "<< (i+1) << " en kilogramos: " << endl;
      //Verificador para saber si el usuario colocó un dato válido o no
      while(!(cin >> peso)){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Valor invalido, debe ingresas un número." << endl;
        cout << "Ingrese peso de la persona "<< (i+1) << " en kilogramos: " << endl;
      }
      // Se agrega a al final del arreglo
      pesos.push_back(peso);
    }

    // Agrega los imc una vez que ya se han agregado todos los pesos y estaturas
    void agregarImc(){
      for (int i = 0; i < estaturas.size(); i++){
        float estatura_aux = estaturas.at(i);
        float peso_aux = pesos.at(i);
        float imc_aux;
        imc_aux = peso_aux / pow( estatura_aux,2);
        imcs.push_back(imc_aux);

        // Dependiendo del valor del imc, se le asigna una categoría a la persona

        if (imc_aux < 18.5) categoria_imc.push_back("Bajo Peso");
        else if(18 <= imc_aux and imc_aux < 25) categoria_imc.push_back("Normal");
        else if(25 <= imc_aux and imc_aux < 30) categoria_imc.push_back("Sobrepeso");
        else categoria_imc.push_back("Obesidad");
      }
    }

    // Función para calcular promedio IMC
    float promedio_imc(){
      float suma_imc = 0;
      for(int i = 0; i < imcs.size(); i++) suma_imc += imcs[i];
      return suma_imc / imcs.size();
    }

    // Función para ingresar la cantidad de datos que desea el usuario
    void ingresar_datos(){  // <------------------------------------------------------ Se agrega al main
      int n;
      cout << "Escriba el numero de ingresos que deseas: " << endl;
      //Verificador
      while(!(cin >> n)){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Valor invalido, debe ingresas un número entero." << endl;
        cout << "Escriba el numero de ingresos que deseas: " << endl;
      }
      //Bucle para añadir la cantidad de personas que el usuario desea
      for(int i = 0; i < n; i++){
        cout << "-----------------Persona " << i+1 << " -----------------"<< endl;
        agregarEstatura(i);
        agregarPesos(i);
        cout << "--------------------------------------------"<< endl;
      }
      agregarImc();

    }

    // Función para mostrar las estadísticas
    void mostrar_estadisticas(){  // <------------------------------------------------ Se agrega al main
      int bajo = 0, normal = 0, sobrepeso = 0, obesidad = 0;
      float promedio_imcs = promedio_imc();
      for (int i = 0; i < categoria_imc.size(); i++){
        if (categoria_imc.at(i) == "Bajo Peso") bajo ++;
        else if (categoria_imc.at(i) == "Normal") normal ++;
        else if (categoria_imc.at(i) == "Sobrepeso") sobrepeso ++;
        else obesidad ++;
      }
      cout << "---------------------------Estadísticas---------------------------" << endl;
      cout << "Promedio IMC: "<< promedio_imcs <<endl;
      cout << "Personas con BAJO PESO: "<< bajo <<endl;
      cout << "Personas con PESO NORMAL: "<< normal <<endl;
      cout << "Personas con SOBREPESO: "<< sobrepeso <<endl;
      cout << "Personas con OBESIDAD: "<< obesidad <<endl;
    }
};

int main() {

  cout << "Bienvenido al programa de IMCs" << endl;
  Personas datos_personas;
  datos_personas.ingresar_datos();
  datos_personas.mostrar_estadisticas();
  return 0;

}