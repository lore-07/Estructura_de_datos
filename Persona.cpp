#include <iostream>
#include "ListaPersona.h"
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int n;
    cout << "Ingrese la cantidad de personas: ";
    cin >> n;

    Personas misDatos(n);

    misDatos.capturar();
    misDatos.imprimir();

    return 0;
}
