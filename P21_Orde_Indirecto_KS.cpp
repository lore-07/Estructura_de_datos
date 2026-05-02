#include <iostream>
#include <string>

using namespace std;

struct Libro {
    string titulo;
    int anio;
    bool operator<=(const Libro& otro) const { return anio <= otro.anio; }
};

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

template <typename T>
void quickSortIndirecto(T datos[], int indices[], int inicio, int fin) {
    if (inicio < fin) {
        int pi = particionIndirecta(datos, indices, inicio, fin);
        quickSortIndirecto(datos, indices, inicio, pi - 1);
        quickSortIndirecto(datos, indices, pi + 1, fin);
    }
}
/*
int main() {
    int numeros[5] = {50, 20, 90, 10, 60};
    char letras[5] = {'z', 'x', 'a', 'm', 'b'};
    Libro biblioteca[3] = {{"Noches Blancas", 1848}, {"La metamorfosis", 1915}, {"El jugador", 1866}};

    int indNum[5] = {0, 1, 2, 3, 4};
    int indLet[5] = {0, 1, 2, 3, 4};
    int indLib[3] = {0, 1, 2};

    quickSortIndirecto(numeros, indNum, 0, 4);
    quickSortIndirecto(letras, indLet, 0, 4);
    quickSortIndirecto(biblioteca, indLib, 0, 2);

    cout << "--- P21: QUICK SORT INDIRECTO (PE) ---" << endl;
    cout << "Numeros: "; for(int i=0; i<5; i++) cout << numeros[indNum[i]] << " "; cout << endl;
    cout << "Letras:  "; for(int i=0; i<5; i++) cout << letras[indLet[i]] << " "; cout << endl;
    cout << "Libros:" << endl;
    for(int i=0; i<3; i++) cout << biblioteca[indLib[i]].titulo << " (" << biblioteca[indLib[i]].anio << ")" << endl;

    return 0;
}
*/
