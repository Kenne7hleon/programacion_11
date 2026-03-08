#include <iostream>
using namespace std;

int main() {
    double t; double y; double h; const double g = 9.8;
    
    cout << "Ingrese el valor del tiempo que el objeto tardará en recorrer la ventana, en segundos" << endl;
    cin >> t;
    cout << "Ingrese el valor de la altura de la ventana, en metros" << endl;
    cin >> y;

    if (!(t > 0)) {
        cout << "Error: el tiempo debe ser positivo." << endl;
    } else if (!(y > 0)) {
        cout << "Error: la altura de la ventana debe ser positiva." << endl;
    } else {
        h = (((y/t)-(0.5*g*t))*((y/t)-(0.5*g*t))/(2*g));
        if (h <= 0) {
            cout << "Error: los valores ingresados implican h <= 0; el objeto no pudo haber sido soltado por debajo del borde superior de la ventana." << endl;
        } else {
            cout << "t = " << t << "s" << endl;
            cout << "y = " << y << "m" << endl;
            cout << "La altura es h = " << h << "m" << endl;
        }
    }
}
