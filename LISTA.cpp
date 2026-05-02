#include <iostream>
#include <list>
#include "Lista.h"

using namespace std;

void Lista::insertar(int valor) {
    lista.push_back(valor);
    cout << "Elemento aniadido a la lista\n";
}

void Lista::eliminar(int valor) {
    if (lista.empty()) {
        cout << "Lista vacia\n";
        return;
    }

    lista.remove(valor);
    cout << "Elemento eliminado (si existia)\n";
}

void Lista::buscar(int valor) {
    int pos = 0;
    bool encontrado = false;

    for (list<int>::iterator it = lista.begin(); it != lista.end(); ++it) {
        if (*it == valor) {
            cout << "Elemento encontrado en la posicion: " << pos << endl;
            encontrado = true;
            break;
        }
        pos++;
    }

    if (!encontrado) {
        cout << "Elemento no encontrado\n";
    }
}

void Lista::mostrar() {
    if (lista.empty()) {
        cout << "Lista vacia\n";
        return;
    }

    cout << "Contenido de la lista:\n";

    for (list<int>::iterator it = lista.begin(); it != lista.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

void Lista::tamanio() {
    cout << "Tamanio: " << lista.size() << endl;
}

void Lista::limpiar() {
    lista.clear();
    cout << "Lista limpiada\n";
}
