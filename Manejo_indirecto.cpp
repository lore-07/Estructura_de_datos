#include <iostream>
#include "Contenedor.h"
#include <clocale>


using namespace std;

int main() {
        setlocale(LC_ALL, "");

    int cantidad;
    cout << "Programa de personas" << endl;
    cout << "¿Cuántas personas desea registrar? ";
    cin >> cantidad;

    ListaPersonasIndirecta miRegistro(cantidad);
    miRegistro.capturarLista();
    miRegistro.mostrarReporte();

    return 0;
}
