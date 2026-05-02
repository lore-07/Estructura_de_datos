#include <iostream>
#include <stack>
#include "Pila8.h"

using namespace std;

void Pila::push(int valor) {
    pila.push(valor);
    cout << "Elemento insertado\n";
}

void Pila::pop() {
    if (pila.empty()) {
        cout << "Pila vacia\n";
        return;
    }

    cout << "Elemento eliminado: " << pila.top() << endl;
    pila.pop();
}

void Pila::mostrar() {
    if (pila.empty()) {
        cout << "Pila vacia\n";
        return;
    }

    stack<int> aux = pila;

    cout << "Contenido de la pila:\n";
    while (!aux.empty()) {
        cout << aux.top() << endl;
        aux.pop();
    }
}

void Pila::cima() {
    if (pila.empty()) {
        cout << "Pila vacia\n";
    } else {
        cout << "Elemento en la cima: " << pila.top() << endl;
    }
}
