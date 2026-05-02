#ifndef PILA_H
#define PILA_H

#include <stack>

class Pila {
private:
    std::stack<int> pila;

public:
    void push(int valor);
    void pop();
    void mostrar();
    void cima();
};

#endif
