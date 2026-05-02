#pragma once
#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    int anio;

public:
    Libro() : titulo(""), anio(0) {} // Constructor por defecto
    Libro(string t, int an) : titulo(t), anio(an) {} // Constructor con parámetros

    // Sobrecarga para comparar objetos
    bool operator>(const Libro& otro) const {
        return this->anio > otro.anio;
    }

    void mostrar() const {
        cout << titulo << " (" << anio << ")" << endl;
    }
};

// Clase con el algoritmo genérico
class Ordenador {
public:
    // Plantilla que permite ordenar cualquier tipo de dato
    template <typename T>
    void ordenarBurbuja(T arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    T temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
};

template <typename T>
void imprimirArreglo(T arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ejercicioBurbujaPOO() {
    Ordenador miOrdenador;

    // Declaración de los arreglos desordenados
    int numeros[5] = {5, 2, 9, 1, 6};
    char letras[5] = {'z', 'x', 'a', 'm', 'b'};
    Libro biblioteca[3] = {
        Libro("Noches Blancas", 1848),
        Libro("La metamorfosis", 1915),
        Libro("El jugador", 1866)
    };

    cout << "--- ESTADO INICIAL (DESORDENADO) ---" << endl;
    cout << "Numeros: "; imprimirArreglo(numeros, 5);
    cout << "Letras:  "; imprimirArreglo(letras, 5);
    cout << "Libros:" << endl;
    for (int i = 0; i < 3; i++) biblioteca[i].mostrar();
    cout << "------------------------------------\n" << endl;

    // Un solo método ordena todo gracias a la plantilla y la sobrecarga
    miOrdenador.ordenarBurbuja(numeros, 5);
    miOrdenador.ordenarBurbuja(letras, 5);
    miOrdenador.ordenarBurbuja(biblioteca, 3);

    cout << "--- ESTADO FINAL (ORDENADO) ---" << endl;
    cout << "Numeros: "; imprimirArreglo(numeros, 5);
    cout << "Letras:  "; imprimirArreglo(letras, 5);
    cout << "Libros:" << endl;
    for (int i = 0; i < 3; i++) biblioteca[i].mostrar();
    cout << "------------------------------------" << endl;

}
