#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


class EstacionMetereologica {
    private:
        string nombre = "";
        vector<double> lecturas;

    public:
        EstacionMetereologica(string nombre){
            this -> nombre = nombre;
        }

        EstacionMetereologica(){
            nombre = "Estacion sin nombre";
        }

        bool registrarLectura(double temperatura){
            if (temperatura >= -50 && temperatura <= 60){
                lecturas.push_back(temperatura);
                cout << "Lectura registrada: " << temperatura << "\n";
                return true;
            }
            else{
                cout << "Error: la temperatura debe estar entre -50 y 60." << "\n";
                return false;
            }
        }

        double promedio(){
            double suma = 0.00;
            int divisor = 0;
            if (!lecturas.empty()){
                for (auto &temperatura : lecturas){
                suma += temperatura;
                divisor += 1;
            }
            cout << "Promedio: " << (suma / divisor) << "\n";
            return (suma/divisor);
        } else{
            return 0;
        }
        }

        double maxima(){
            if (lecturas.empty()){
                return 0;
            } else{
                double maximo = *max_element(lecturas.begin(), lecturas.end());
                cout << "Maxima: " << maximo << "\n";
                return maximo;
            }
        }
        
        string getNombreEstacion(){
            return nombre;
        }

        int getCantidadLecturas(){
            return lecturas.size();
        }
    };

int main(){
    string nombre;
    cin >> nombre;

    EstacionMetereologica E1(nombre);
    int M;
    cin >> M;
    for (int i = 0; i < M; i++){
        string opcion = "";
        cin >> opcion;
        if (opcion == "registrar"){
            double temperatura;
            cin >> temperatura;

            E1.registrarLectura(temperatura);

        } else if (opcion == "promedio"){
            if (E1.promedio() == 0){
                cout << "Sin lecturas registradas." << "\n";
            }else {
                cout << E1.promedio() << endl;
            }

        }else if (opcion == "maxima"){
            if (E1.maxima() == 0){
                cout << "Sin lecturas registradas." << "\n";
            } else {
                cout << E1.maxima() << endl;
            }

        }else if (opcion == "cantidad"){
        cout << E1.getNombreEstacion() << " - lecturas registradas: " << E1.getCantidadLecturas() << endl;
        }
    }

    return 0;
}