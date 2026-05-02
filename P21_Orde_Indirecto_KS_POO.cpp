#pragma once
#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    int anio;
public:
    Libro() : titulo(""), anio(0) {}
    Libro(string t, int an) : titulo(t), anio(an) {}
    bool operator<=(const Libro& otro) const { return anio <= otro.anio; }
    void mostrar() const { cout << titulo << " (" << anio << ")" << endl; }
};

class Ordenador {
private:
    template <typename T>
    int particionIndirecta(T datos[], int indices[], int inicio, int fin) {
        int indicePivote = indices[fin];
        int i = (inicio - 1);
        for (int j = inicio; j <= fin - 1; j++) {
            if (datos[indices[j]] <= datos[indicePivote]) {
                i++;
                swap(indices[i], indices[j]);
            }
        }
        swap(indices[i + 1], indices[fin]);
        return (i + 1);
    }

public:
    template <typename T>
    void quickSortIndirecto(T datos[], int indices[], int inicio, int fin) {
        if (inicio < fin) {
            int pi = particionIndirecta(datos, indices, inicio, fin);
            quickSortIndirecto(datos, indices, inicio, pi - 1);
            quickSortIndirecto(datos, indices, pi + 1, fin);
        }
    }
};
