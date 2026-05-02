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
    bool operator>(const Libro& otro) const { return anio > otro.anio; }
    void mostrar() const { cout << titulo << " (" << anio << ")" << endl; }
};

class Ordenador {
public:
    template <typename T>
    void burbujaIndirecta(T datos[], int indices[], int n) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (datos[indices[j]] > datos[indices[j + 1]]) {
                    swap(indices[j], indices[j + 1]);
                }
            }
        }
    }
};
