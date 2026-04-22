//Estudiante: Kenneth León Villarreal
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string salida;

void minusculas(string &palabra) {
    for (int i = 0; i < palabra.length(); i++) {
        salida += palabra[i];
        palabra[i] = tolower(palabra[i]);
    }
}
bool es_palindromo(string palabra){
    string evaluador;
    for (int i = palabra.length() - 1; i >= 0; i -= 1){
        evaluador += palabra[i];
    }
    if (palabra == evaluador) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string palabra;
    cout << "Ingrese una palabra" << endl;
    cin >> palabra;
    minusculas(palabra);
    if (es_palindromo(palabra) == true) {
        cout << "\"" << salida << "\"" << " es palindromo" << endl;
    } else {
        cout << "\"" << salida << "\"" << " no es palindromo" << endl;
    }
    return 0;
}