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

    // Sobrecarga para que el método de partición sepa comparar los objetos
    bool operator<=(const Libro& otro) const { return anio <= otro.anio; }
    void mostrar() const { cout << titulo << " (" << anio << ")" << endl; }
};

// Clase utilitaria con los métodos de Quick Sort
class Ordenador {
private:
    // Método privado que solo la clase usa para encontrar el acomodo del pivote
    template <typename T>
    int particion(T arr[], int inicio, int fin) {
        T pivote = arr[fin];
        int i = (inicio - 1);

        for (int j = inicio; j <= fin - 1; j++) {
            if (arr[j] <= pivote) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[fin]);
        return (i + 1);
    }

public:
    // Método público recursivo
    template <typename T>
    void quickSort(T arr[], int inicio, int fin) {
        if (inicio < fin) {
            int pi = particion(arr, inicio, fin);
            quickSort(arr, inicio, pi - 1);
            quickSort(arr, pi + 1, fin);
        }
    }
};
