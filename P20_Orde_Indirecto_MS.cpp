#include <iostream>
#include <string>

using namespace std;

struct Libro {
    string titulo;
    int anio;
    bool operator<=(const Libro& otro) const { return anio <= otro.anio; }
};

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

template <typename T>
void mergeSortIndirecto(T datos[], int indices[], int inicio, int fin) {
    if (inicio >= fin) return;
    int mitad = inicio + (fin - inicio) / 2;
    mergeSortIndirecto(datos, indices, inicio, mitad);
    mergeSortIndirecto(datos, indices, mitad + 1, fin);
    mezclarIndirecto(datos, indices, inicio, mitad, fin);
}
/*
int main() {
    int numeros[5] = {50, 20, 90, 10, 60};
    char letras[5] = {'z', 'x', 'a', 'm', 'b'};
    Libro biblioteca[3] = {{"Noches Blancas", 1848}, {"La metamorfosis", 1915}, {"El jugador", 1866}};

    int indNum[5] = {0, 1, 2, 3, 4};
    int indLet[5] = {0, 1, 2, 3, 4};
    int indLib[3] = {0, 1, 2};

    mergeSortIndirecto(numeros, indNum, 0, 4);
    mergeSortIndirecto(letras, indLet, 0, 4);
    mergeSortIndirecto(biblioteca, indLib, 0, 2);

    cout << "--- P20: MERGE SORT INDIRECTO (PE) ---" << endl;
    cout << "Numeros: "; for(int i=0; i<5; i++) cout << numeros[indNum[i]] << " "; cout << endl;
    cout << "Letras:  "; for(int i=0; i<5; i++) cout << letras[indLet[i]] << " "; cout << endl;
    cout << "Libros:" << endl;
    for(int i=0; i<3; i++) cout << biblioteca[indLib[i]].titulo << " (" << biblioteca[indLib[i]].anio << ")" << endl;

    return 0;
}
*/
