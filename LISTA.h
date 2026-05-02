#ifndef LISTA_H
#define LISTA_H

#include <list>

class Lista {
private:
    std::list<int> lista;

public:
    void insertar(int valor);
    void eliminar(int valor);
    void buscar(int valor);
    void mostrar();
    void tamanio();
    void limpiar();
};

#endif
