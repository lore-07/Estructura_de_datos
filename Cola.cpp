#include <iostream>
#include <stdlib.h>
#include "Cola.h"

using namespace std;

Nodo::Nodo(int valor) {
    dato = valor;
    siguiente = NULL;
}

Cola::Cola() {
    frente = NULL;
    fin = NULL;
}

void Cola::enqueue(int valor) {
    Nodo* nuevo = new Nodo(valor);

    if (fin == NULL) {
        frente = fin = nuevo;
    } else {
        fin->siguiente = nuevo;
        fin = nuevo;
    }

    cout << "Elemento insertado en la cola\n";
}

void Cola::dequeue() {
    if (frente == NULL) {
        cout << "Cola vacia\n";
        return;
    }

    Nodo* temp = frente;
    cout << "Elemento eliminado: " << temp->dato << endl;

    frente = frente->siguiente;
    delete temp;

    if (frente == NULL) {
        fin = NULL;
    }
}

void Cola::mostrar() {
    if (frente == NULL) {
        cout << "Cola vacia\n";
        return;
    }

    Nodo* aux = frente;
    cout << "Contenido de la cola:\n";

    while (aux != NULL) {
        cout << aux->dato << " ";
        aux = aux->siguiente;
    }
    cout << endl;
}
