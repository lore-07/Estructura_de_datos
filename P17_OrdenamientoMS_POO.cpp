#pragma once
#include <iostream>
#include <string>

using namespace std;

// Clase encapsulada
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

// Clase utilitaria con los métodos recursivos
class Ordenador {
private:
    template <typename T>
    void mezclar(T arr[], int inicio, int mitad, int fin) {
        int n1 = mitad - inicio + 1, n2 = fin - mitad;
        T* Izquierda = new T[n1]; T* Derecha = new T[n2];

        for (int i = 0; i < n1; i++) Izquierda[i] = arr[inicio + i];
        for (int j = 0; j < n2; j++) Derecha[j] = arr[mitad + 1 + j];

        int i = 0, j = 0, k = inicio;
        while (i < n1 && j < n2) {
            if (Izquierda[i] <= Derecha[j]) arr[k++] = Izquierda[i++];
            else arr[k++] = Derecha[j++];
        }
        while (i < n1) arr[k++] = Izquierda[i++];
        while (j < n2) arr[k++] = Derecha[j++];

        delete[] Izquierda; delete[] Derecha;
    }

public:
    template <typename T>
    void mergeSort(T arr[], int inicio, int fin) {
        if (inicio >= fin) return;
        int mitad = inicio + (fin - inicio) / 2;
        mergeSort(arr, inicio, mitad);
        mergeSort(arr, mitad + 1, fin);
        mezclar(arr, inicio, mitad, fin);
    }
};
