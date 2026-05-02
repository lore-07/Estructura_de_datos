#ifndef COLA_H
#define COLA_H

class Nodo {
public:
    int dato;
    Nodo* siguiente;

    Nodo(int valor);
};

class Cola {
private:
    Nodo* frente;
    Nodo* fin;

public:
    Cola();

    void enqueue(int valor);
    void dequeue();
    void mostrar();
};

#endif
