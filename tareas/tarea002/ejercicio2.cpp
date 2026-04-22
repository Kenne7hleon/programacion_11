//Estudiante: Kenneth León Villarreal
#include <iostream>
using namespace std;

// Tres lados forman un triángulo válido si la suma de cualquier par de lados es estrictamente mayor que el tercer lado.
bool es_valido(int a, int b, int c){
    if ((a < b + c) && (b < a + c) && (c < b + a)) {
        return true;
    } else {
        return false;
    }
}

string tipo_triangulo(int a, int b, int c) {
    if (a == b && a == c){
        return "Equilatero";
    } else if (a == b && a != c) {
        return "Isosceles";
    } else if (a == c && a != b) {
        return "Isosceles";
    } else if (b == c && b != a) {
        return "Isosceles";
    } else if (a != c && a != b) {
        return "Escaleno";
        }
 }

int calcular_perimetro(int a, int b, int c){
    return (a + b + c);
}

void describir_triangulo(int a, int b, int c){
    if (!es_valido(a, b, c)) {
        cout << "Triangulo invalido." << endl;
    } else {
        cout << "Tipo: " << tipo_triangulo(a, b, c) << endl;
        cout << "Perimetro: " << calcular_perimetro(a, b, c) << endl;
    }
    
}

int main() {
    int a;
    int b;
    int c;
    cout << "Ingrese los lados de su triangulo" << endl;
    cin >> a >> b >> c;
    describir_triangulo(a, b, c);
}