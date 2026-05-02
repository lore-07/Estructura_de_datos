#include <iostream>
#include <stdlib.h>
#include "Pila.h"

using namespace std;

Nodo::Nodo(int valor) {
    dato = valor;
    siguiente = NULL;
}

Pila::Pila() {
    cima = NULL;
}

void Pila::push(int valor) {
    Nodo* nuevo = new Nodo(valor);
    nuevo->siguiente = cima;
    cima = nuevo;
    cout << "Elemento insertado\n";
}

void Pila::pop() {
    if (cima == NULL) {
        cout << "Pila vacia\n";
        return;
    }

    Nodo* temp = cima;
    cout << "Elemento eliminado: " << temp->dato << endl;
    cima = cima->siguiente;
    delete temp;
}

void Pila::mostrar() {
    if (cima == NULL) {
        cout << "Pila vacia\n";
        return;
    }

    Nodo* aux = cima;
    cout << "Contenido de la pila:\n";

    while (aux != NULL) {
        cout << aux->dato << endl;
        aux = aux->siguiente;
    }
}
