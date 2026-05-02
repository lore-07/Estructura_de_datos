#include <iostream>
#include "ListaDinamica.h"

using namespace std;

// ===== Nodo =====
Nodo::Nodo(int valor) {
    dato = valor;
    siguiente = NULL;
}

// ===== Lista =====
Lista::Lista() {
    inicio = NULL;
}

void Lista::insertar(int valor) {
    Nodo* nuevo = new Nodo(valor);
    nuevo->siguiente = inicio;
    inicio = nuevo;

    cout << "Elemento insertado en la lista\n";
}

void Lista::eliminar() {
    if (inicio == NULL) {
        cout << "Lista vacia\n";
        return;
    }

    Nodo* temp = inicio;
    cout << "Elemento eliminado: " << temp->dato << endl;

    inicio = inicio->siguiente;
    delete temp;
}

void Lista::buscar(int valor) {
    Nodo* aux = inicio;
    int pos = 0;

    while (aux != NULL) {
        if (aux->dato == valor) {
            cout << "Elemento encontrado en la posicion: " << pos << endl;
            return;
        }
        aux = aux->siguiente;
        pos++;
    }

    cout << "Elemento no encontrado\n";
}

void Lista::mostrar() {
    if (inicio == NULL) {
        cout << "Lista vacia\n";
        return;
    }

    Nodo* aux = inicio;
    cout << "Contenido de la lista:\n";

    while (aux != NULL) {
        cout << aux->dato << " ";
        aux = aux->siguiente;
    }
    cout << endl;
}
