#include <iostream>
using namespace std;

void Apv(int v, int p, int arr[]){
    for (int i = 0; i <= (p - 1); i++){
        arr[i] += v;
    }
}

void Cp(int p, int arr[]){
    cout << arr[p] << endl;
}

int main(){
    int N;
    cin >> N;
    int vagones[N];
    int Q;
    cin >> Q;

    for (int i = 0; i <= (Q - 1); i++){
        char decision;
        int v;
        int p;
        cin >> decision, p, v;
        if (decision == "A") {
            Apv(v, p, vagones);
        } else if (decision == "C"){
            Cp(p, vagones);
        }
    }
    return 0;
}