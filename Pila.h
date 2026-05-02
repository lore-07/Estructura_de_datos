#ifndef PILA_H
#define PILA_H

class Nodo {
public:
    int dato;
    Nodo* siguiente;

    Nodo(int valor);
};

class Pila {
private:
    Nodo* cima;

public:
    Pila();

    void push(int valor);
    void pop();
    void mostrar();
};

#endif
