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
    void mezclarIndirecto(T datos[], int indices[], int inicio, int mitad, int fin) {
        int n1 = mitad - inicio + 1, n2 = fin - mitad;
        int* L = new int[n1]; int* R = new int[n2];
        for (int i = 0; i < n1; i++) L[i] = indices[inicio + i];
        for (int j = 0; j < n2; j++) R[j] = indices[mitad + 1 + j];

        int i = 0, j = 0, k = inicio;
        while (i < n1 && j < n2) {
            if (datos[L[i]] <= datos[R[j]]) indices[k++] = L[i++];
            else indices[k++] = R[j++];
        }
        while (i < n1) indices[k++] = L[i++];
        while (j < n2) indices[k++] = R[j++];
        delete[] L; delete[] R;
    }

public:
    template <typename T>
    void mergeSortIndirecto(T datos[], int indices[], int inicio, int fin) {
        if (inicio >= fin) return;
        int mitad = inicio + (fin - inicio) / 2;
        mergeSortIndirecto(datos, indices, inicio, mitad);
        mergeSortIndirecto(datos, indices, mitad + 1, fin);
        mezclarIndirecto(datos, indices, inicio, mitad, fin);
    }
};
