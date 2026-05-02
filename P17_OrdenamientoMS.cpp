#include <iostream>
#include <string>

using namespace std;

// 1. Estructura simple con sobrecarga para que el template sepa compararla
struct Libro {
    string titulo;
    int anio;

    bool operator<=(const Libro& otro) const {
        return anio <= otro.anio;
    }
};

// 2. Función genérica para MEZCLAR (el bucle con condición que mencionaste)
template <typename T>
void mezclar(T arr[], int inicio, int mitad, int fin) {
    int n1 = mitad - inicio + 1;
    int n2 = fin - mitad;

    T* Izquierda = new T[n1];
    T* Derecha = new T[n2];

    for (int i = 0; i < n1; i++) Izquierda[i] = arr[inicio + i];
    for (int j = 0; j < n2; j++) Derecha[j] = arr[mitad + 1 + j];

    int i = 0, j = 0, k = inicio;

    // Aquí está el bucle condicional que hace la magia de ordenar
    while (i < n1 && j < n2) {
        if (Izquierda[i] <= Derecha[j]) {
            arr[k] = Izquierda[i];
            i++;
        } else {
            arr[k] = Derecha[j];
            j++;
        }
        k++;
    }

    while (i < n1) { arr[k] = Izquierda[i]; i++; k++; }
    while (j < n2) { arr[k] = Derecha[j]; j++; k++; }

    delete[] Izquierda;
    delete[] Derecha;
}

// 3. Función genérica RECURSIVA para dividir
template <typename T>
void mergeSort(T arr[], int inicio, int fin) {
    if (inicio >= fin) return; // Condición de salida de la recursividad

    int mitad = inicio + (fin - inicio) / 2;
    mergeSort(arr, inicio, mitad);
    mergeSort(arr, mitad + 1, fin);
    mezclar(arr, inicio, mitad, fin);
}

/*int main() {
    int numeros[5] = {5, 2, 9, 1, 6};
    char letras[5] = {'z', 'x', 'a', 'm', 'b'};
    Libro biblioteca[3] = {{"Noches Blancas", 1848}, {"La metamorfosis", 1915}, {"El jugador", 1866}};

    // Llamamos a la misma función recursiva para los 3 tipos
    mergeSort(numeros, 0, 4);
    mergeSort(letras, 0, 4);
    mergeSort(biblioteca, 0, 2);

    cout << "--- MERGE SORT (PE) ---" << endl;
    cout << "Numeros: "; for(int i=0; i<5; i++) cout << numeros[i] << " "; cout << endl;
    cout << "Letras:  "; for(int i=0; i<5; i++) cout << letras[i] << " "; cout << endl;
    cout << "Libros:" << endl;
    for(int i=0; i<3; i++) cout << biblioteca[i].titulo << " (" << biblioteca[i].anio << ")" << endl;

    return 0;
}
*/
