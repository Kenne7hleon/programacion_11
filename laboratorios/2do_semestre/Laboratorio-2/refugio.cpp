#include <iostream>
#include <string>
using namespace std;

class Mascota {
protected:
    string nombre;
    int edad;

public:

    Mascota(string nombre, int edad)
        : nombre(nombre), edad(edad) {}

    void imprimir_datos(){
        cout << "Nombre: " << nombre << ", Edad: " << edad << "\n";
        return;
    }

};

class Perro : public Mascota {
public:
    string raza;

    Perro(string nombre, int edad, string raza)
    : Mascota(nombre, edad) {
    this->raza = raza;
    }

    void imprimir_datos(){
        cout << "Nombre: " << nombre << ", Edad: " << edad << ", raza: " << raza << "\n";
        return;
    }
};

class Gato : public Mascota {
public:
    bool vive_interior;

    Gato(string nombre, int edad, bool vive_interior)
    : Mascota(nombre, edad) {
    this->vive_interior = vive_interior;
    }

    void imprimir_datos(){
        if (vive_interior == false){
            cout << "Nombre: " << nombre << ", Edad: " << edad << ", No vive en interiores" << "\n";
        } else{
            cout << "Nombre: " << nombre << ", Edad: " << edad << ", Si vive en interiores" << "\n";
        }
        return;
    }
};

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        string tipo_mascota;
        cin >> tipo_mascota;
        string nombre;
        cin >> nombre;
        int edad;
        cin >> edad;

        if (tipo_mascota == "gato"){
            bool vive_interiores;
            cin >> vive_interiores;

            Gato gato(nombre, edad, vive_interiores);
            gato.imprimir_datos();

        } else if (tipo_mascota == "perro"){
            string raza;
            cin >> raza;

            Perro gato(nombre, edad, raza);
            gato.imprimir_datos();
        }
    }

    return 0;
}