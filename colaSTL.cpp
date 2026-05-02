#include <iostream>
#include <queue>
#include "Cola9.h"

using namespace std;

void Cola::enqueue(int valor) {
    cola.push(valor);
    cout << "Elemento reguistrado en la cola\n";
}

void Cola::dequeue() {
    if (cola.empty()) {
        cout << "Cola vacia\n";
        return;
    }

    cout << "Elemento eliminado: " << cola.front() << endl;
    cola.pop();
}

void Cola::mostrar() {
    if (cola.empty()) {
        cout << "Cola vacia\n";
        return;
    }

    queue<int> aux = cola;

    cout << "Contenido de la cola:\n";
    while (!aux.empty()) {
        cout << aux.front() << " ";
        aux.pop();
    }
    cout << endl;
}

void Cola::frente() {
    if (cola.empty()) {
        cout << "Cola vacia\n";
    } else {
        cout << "Elemento al frente: " << cola.front() << endl;
    }
}

void Cola::tamanio() {
    cout << "Tamaño de la cola: " << cola.size() << endl;
}
