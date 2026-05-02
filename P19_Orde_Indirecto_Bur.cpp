#include <iostream>
#include <string>

using namespace std;

struct Libro {
    string titulo;
    int anio;
    bool operator>(const Libro& otro) const { return anio > otro.anio; }
};

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
/*
int main() {
    int numeros[5] = {50, 20, 90, 10, 60};
    char letras[5] = {'z', 'x', 'a', 'm', 'b'};
    Libro biblioteca[3] = {{"Noches Blancas", 1848}, {"La metamorfosis", 1915}, {"El jugador", 1866}};

    int indNum[5] = {0, 1, 2, 3, 4};
    int indLet[5] = {0, 1, 2, 3, 4};
    int indLib[3] = {0, 1, 2};

    burbujaIndirecta(numeros, indNum, 5);
    burbujaIndirecta(letras, indLet, 5);
    burbujaIndirecta(biblioteca, indLib, 3);

    cout << "--- P19: BURBUJA INDIRECTA (PE) ---" << endl;
    cout << "Numeros: "; for(int i=0; i<5; i++) cout << numeros[indNum[i]] << " "; cout << endl;
    cout << "Letras:  "; for(int i=0; i<5; i++) cout << letras[indLet[i]] << " "; cout << endl;
    cout << "Libros:" << endl;
    for(int i=0; i<3; i++) cout << biblioteca[indLib[i]].titulo << " (" << biblioteca[indLib[i]].anio << ")" << endl;

    return 0;
}
*/
