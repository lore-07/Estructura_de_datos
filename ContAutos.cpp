#include <iostream>
#include "Contenedor.h"
#include <clocale>


using namespace std;

int main() {
            setlocale(LC_ALL, "");

    int n;
    cout << "PROGRAMA DE AUTOS" << endl;
    cout << "Cuantos autos tiene el inventario? ";
    cin >> n;

    ListaAutosIndirecta inventario(n);

    inventario.capturarAutos();
    inventario.imprimirInventario();

    return 0;
}
