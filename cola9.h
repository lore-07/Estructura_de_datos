#ifndef COLA_H
#define COLA_H

#include <queue>

class Cola {
private:
    std::queue<int> cola;

public:
    void enqueue(int valor);
    void dequeue();
    void mostrar();
    void frente();
    void tamanio();
};

#endif
