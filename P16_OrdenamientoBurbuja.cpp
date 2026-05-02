#include <iostream>
#include <string>

using namespace std;

// Estructura del nuevo tipo de dato
struct Libro {
    string titulo;
    int anio;
};

// Función auxiliar para imprimir arreglos simples rápidamente
template <typename T>
void imprimirArreglo(T arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Burbuja para Enteros
void burbujaEnteros(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Burbuja para Caracteres
void burbujaCaracteres(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Burbuja para Libros (Ordena por año)
void burbujaLibros(Libro arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].anio > arr[j + 1].anio) {
                Libro temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void ejercicioBurbujaPE() {
    // Declaración de los arreglos desordenados
    int numeros[5] = {5, 2, 9, 1, 6};
    char letras[5] = {'z', 'x', 'a', 'm', 'b'};
    Libro biblioteca[3] = {
        {"Noches Blancas", 1848},
        {"La metamorfosis", 1915},
        {"El jugador", 1866}
    };

    cout << "--- ESTADO INICIAL (DESORDENADO) ---" << endl;
    cout << "Numeros: "; imprimirArreglo(numeros, 5);
    cout << "Letras:  "; imprimirArreglo(letras, 5);
    cout << "Libros:" << endl;
    for (int i = 0; i < 3; i++) cout << biblioteca[i].titulo << " (" << biblioteca[i].anio << ")" << endl;
    cout << "------------------------------------\n" << endl;

    // Llamadas a las funciones de ordenamiento
    burbujaEnteros(numeros, 5);
    burbujaCaracteres(letras, 5);
    burbujaLibros(biblioteca, 3);

    cout << "--- ESTADO FINAL (ORDENADO) ---" << endl;
    cout << "Numeros: "; imprimirArreglo(numeros, 5);
    cout << "Letras:  "; imprimirArreglo(letras, 5);
    cout << "Libros:" << endl;
    for (int i = 0; i < 3; i++) cout << biblioteca[i].titulo << " (" << biblioteca[i].anio << ")" << endl;
    cout << "------------------------------------" << endl;

}
