#include <iostream>
using namespace std;
int main() {
    string regimen; double v; double T; const double K = -273.15; const double A = 331.06; double vs; double M; const double B = 0.6;

    cout << "Ingrese, respectivamente, la velocidad del objeto y la temperatura del aire" << endl;
    cin >> v  >> T;
    if (!(v >= 0)) {
        cout << "Error: la velocidad no puede ser negativa." << endl;
    } else if (!(T > K)) {
        cout << "Error: la temperatura no puede ser menor o igual al cero absoluto (-273.15 C)." << endl;
    } else {
        vs = A + (B * T);
        M = (v / vs);
        if (M < 0.8) {
            regimen = "Subsonico";
        } else if (0.8 <= M && M < 1.2) {
            regimen = "Transonico";
        } else if (1.2 <= M && M < 5) {
            regimen = "Supersonico";
        } else if (M >= 5) {
            regimen = "Hipersonico";
        }
        cout << "vs = " << vs << "m/s" << endl;
        cout << "M = " << M << endl;
        cout << "Regimen: <" << regimen << ">" << endl;
    }
}