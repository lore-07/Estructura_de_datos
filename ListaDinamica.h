#ifndef LISTADINAMICA_H
#define LISTADINAMICA_H

class Nodo {
public:
    int dato;
    Nodo* siguiente;

    Nodo(int valor);
};

class Lista {
private:
    Nodo* inicio;

public:
    Lista();

    void insertar(int valor);
    void eliminar();
    void buscar(int valor);
    void mostrar();
};

#endif
