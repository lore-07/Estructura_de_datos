#include <iostream>
#include <string>

using namespace std;

// 1. Estructura simple con sobrecarga para compararse con el pivote
struct Libro {
    string titulo;
    int anio;

    // Sobrecarga necesaria para el Quick Sort (menor o igual)
    bool operator<=(const Libro& otro) const {
        return anio <= otro.anio;
    }
};

// 2. Función genérica para PARTICIONAR (acomoda menores a la izquierda y mayores a la derecha)
template <typename T>
int particion(T arr[], int inicio, int fin) {
    T pivote = arr[fin]; // Elegimos el último elemento como pivote
    int i = (inicio - 1); // Índice de los elementos más pequeños

    for (int j = inicio; j <= fin - 1; j++) {
        // Si el elemento actual es menor o igual al pivote
        if (arr[j] <= pivote) {
            i++; // Incrementamos el índice del menor
            swap(arr[i], arr[j]); // Los intercambiamos
        }
    }
    // Colocamos el pivote en su posición final correcta
    swap(arr[i + 1], arr[fin]);
    return (i + 1);
}

// 3. Función genérica RECURSIVA de Quick Sort
template <typename T>
void quickSort(T arr[], int inicio, int fin) {
    if (inicio < fin) {
        // pi es el índice de partición, arr[pi] ya está en el lugar correcto
        int pi = particion(arr, inicio, fin);

        // Ordenamos recursivamente los elementos antes y después de la partición
        quickSort(arr, inicio, pi - 1);
        quickSort(arr, pi + 1, fin);
    }
}
/*
int main() {
    int numeros[5] = {5, 2, 9, 1, 6};
    char letras[5] = {'z', 'x', 'a', 'm', 'b'};
    Libro biblioteca[3] = {{"Noches Blancas", 1848}, {"La metamorfosis", 1915}, {"El jugador", 1866}};

    // Llamamos a la función recursiva (pasando índice inicial 0 y final tamaño-1)
    quickSort(numeros, 0, 4);
    quickSort(letras, 0, 4);
    quickSort(biblioteca, 0, 2);

    cout << "--- QUICK SORT (PE) ---" << endl;
    cout << "Numeros: "; for(int i=0; i<5; i++) cout << numeros[i] << " "; cout << endl;
    cout << "Letras:  "; for(int i=0; i<5; i++) cout << letras[i] << " "; cout << endl;
    cout << "Libros:" << endl;
    for(int i=0; i<3; i++) cout << biblioteca[i].titulo << " (" << biblioteca[i].anio << ")" << endl;

    return 0;
}
*/
