#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    const int N = 5;

    vector<pair<int, string>> Estudiantes;
    queue<string> orden;

    for (int i = 0; i < N; i++)
    {
        int monto = 0;
        string nombre = "";

        cin >> nombre;
        cin >> monto;
        Estudiantes.push_back({monto, nombre});
        orden.push(nombre);
    }
    
    sort(Estudiantes.begin(), Estudiantes.end());

    cout << "Pedidos ordenados por monto: " << "\n";
    for (const auto& pedido : Estudiantes){
        cout << pedido.second << " " << pedido.first << "\n";
    }

    pair<int, string> elemento_maximo = *max_element(Estudiantes.begin(), Estudiantes.end());

    cout << "Pedido de mayor monto: " << elemento_maximo.second << "\n";

    string consulta;
    cin >> consulta;

    int encontrado = -1;

    for (int i = 0; i < N; i++)
    {
        if (consulta == Estudiantes[i].second)
        {
            encontrado = i;
        }
    }

    if (encontrado != -1)
    {
        cout << Estudiantes[encontrado].second << " hizo un pedido de " << Estudiantes[encontrado].first << "\n";
    }
    else
    {
        cout << "No se encontro un pedido de dicha persona." << "\n";
    }

    stack<string> Historial;

    for (int i = 0; i < N; i++)
    {
        string estudiante = orden.front();
        int monto;

        for (auto it : Estudiantes)
        {
            if (it.second == estudiante)
            {
                monto = it.first;
            }
        }
        cout << "Atendido: " << estudiante << " " << monto << "\n";
        orden.pop();
        Historial.push(estudiante);
    }

    string descision;
    cin >> descision;

    if (descision == "deshacer")
    {
        orden.push(Historial.top());
        cout << Historial.top() << " vuelve a la fila" << "\n";
        Historial.pop();
    }

    return 0;
}