#include <iostream>
using namespace std;

void ejercicioBurbujaPE();
void ejercicioBurbujaPOO();

int main() {
    int opcion;
    cout << "--- MENU DE EJERCICIOS ---" << endl;
    cout << "1. Burbuja Estructurada (PE)" << endl;
    cout << "2. Burbuja Orientada a Objetos (POO)" << endl;
    cout << "Elige una opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        ejercicioBurbujaPE();
    } else if (opcion == 2) {
        ejercicioBurbujaPOO();
    } else {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}

/*#include <iostream>
#include "P17_OrdenamientoMS_POO.cpp"

using namespace std;

int main() {
    Ordenador miOrdenador; // El objeto hace todo el trabajo

    int numeros[5] = {5, 2, 9, 1, 6};
    char letras[5] = {'z', 'x', 'a', 'm', 'b'};
    Libro biblioteca[3] = {
        Libro("Noches Blancas", 1848),
        Libro("La metamorfosis", 1915),
        Libro("El jugador", 1866)
    };

    miOrdenador.mergeSort(numeros, 0, 4);
    miOrdenador.mergeSort(letras, 0, 4);
    miOrdenador.mergeSort(biblioteca, 0, 2);

    cout << "--- MERGE SORT (POO) ---" << endl;
    cout << "Numeros: "; for(int i=0; i<5; i++) cout << numeros[i] << " "; cout << endl;
    cout << "Letras:  "; for(int i=0; i<5; i++) cout << letras[i] << " "; cout << endl;
    cout << "Libros:" << endl;
    for(int i=0; i<3; i++) biblioteca[i].mostrar();

    return 0;
}
*/
/*
#include "P18_OrdenamientoKS_POO.cpp"

int main() {
    Ordenador miOrdenador; // El objeto hace todo el trabajo

    int numeros[5] = {5, 2, 9, 1, 6};
    char letras[5] = {'z', 'x', 'a', 'm', 'b'};
    Libro biblioteca[3] = {
        Libro("Noches Blancas", 1848),
        Libro("La metamorfosis", 1915),
        Libro("El jugador", 1866)
    };

    miOrdenador.quickSort(numeros, 0, 4);
    miOrdenador.quickSort(letras, 0, 4);
    miOrdenador.quickSort(biblioteca, 0, 2);

    cout << "--- QUICK SORT (POO) ---" << endl;
    cout << "Numeros: "; for(int i=0; i<5; i++) cout << numeros[i] << " "; cout << endl;
    cout << "Letras:  "; for(int i=0; i<5; i++) cout << letras[i] << " "; cout << endl;
    cout << "Libros:" << endl;
    for(int i=0; i<3; i++) biblioteca[i].mostrar();

    return 0;
}
*/
/*
#include <iostream>
#include "P19_Orde_Indirecto_Bur_POO.cpp"

using namespace std;

int main() {
    Ordenador miOrdenador;
    int numeros[5] = {50, 20, 90, 10, 60};
    char letras[5] = {'z', 'x', 'a', 'm', 'b'};
    Libro biblioteca[3] = {Libro("Noches Blancas", 1848), Libro("La metamorfosis", 1915), Libro("El jugador", 1866)};

    int indNum[5] = {0, 1, 2, 3, 4};
    int indLet[5] = {0, 1, 2, 3, 4};
    int indLib[3] = {0, 1, 2};

    miOrdenador.burbujaIndirecta(numeros, indNum, 5);
    miOrdenador.burbujaIndirecta(letras, indLet, 5);
    miOrdenador.burbujaIndirecta(biblioteca, indLib, 3);

    cout << "--- P19: BURBUJA INDIRECTA (POO) ---" << endl;
    cout << "Numeros: "; for(int i=0; i<5; i++) cout << numeros[indNum[i]] << " "; cout << endl;
    cout << "Letras:  "; for(int i=0; i<5; i++) cout << letras[indLet[i]] << " "; cout << endl;
    cout << "Libros:" << endl;
    for(int i=0; i<3; i++) biblioteca[indLib[i]].mostrar();

    return 0;
}
*/
/*
#include <iostream>
#include "P20_Orde_Indirecto_MS_POO.cpp"

using namespace std;

int main() {
    Ordenador miOrdenador;
    int numeros[5] = {50, 20, 90, 10, 60};
    char letras[5] = {'z', 'x', 'a', 'm', 'b'};
    Libro biblioteca[3] = {Libro("Noches Blancas", 1848), Libro("La metamorfosis", 1915), Libro("El jugador", 1866)};

    int indNum[5] = {0, 1, 2, 3, 4};
    int indLet[5] = {0, 1, 2, 3, 4};
    int indLib[3] = {0, 1, 2};

    miOrdenador.mergeSortIndirecto(numeros, indNum, 0, 4);
    miOrdenador.mergeSortIndirecto(letras, indLet, 0, 4);
    miOrdenador.mergeSortIndirecto(biblioteca, indLib, 0, 2);

    cout << "--- P20: MERGE SORT INDIRECTO (POO) ---" << endl;
    cout << "Numeros: "; for(int i=0; i<5; i++) cout << numeros[indNum[i]] << " "; cout << endl;
    cout << "Letras:  "; for(int i=0; i<5; i++) cout << letras[indLet[i]] << " "; cout << endl;
    cout << "Libros:" << endl;
    for(int i=0; i<3; i++) biblioteca[indLib[i]].mostrar();

    return 0;
}
*/
/*
#include <iostream>
#include "P21_Orde_Indirecto_KS_POO.cpp"

using namespace std;

int main() {
    Ordenador miOrdenador;
    int numeros[5] = {50, 20, 90, 10, 60};
    char letras[5] = {'z', 'x', 'a', 'm', 'b'};
    Libro biblioteca[3] = {Libro("Noches Blancas", 1848), Libro("La metamorfosis", 1915), Libro("El jugador", 1866)};

    int indNum[5] = {0, 1, 2, 3, 4};
    int indLet[5] = {0, 1, 2, 3, 4};
    int indLib[3] = {0, 1, 2};

    miOrdenador.quickSortIndirecto(numeros, indNum, 0, 4);
    miOrdenador.quickSortIndirecto(letras, indLet, 0, 4);
    miOrdenador.quickSortIndirecto(biblioteca, indLib, 0, 2);

    cout << "--- P21: QUICK SORT INDIRECTO (POO) ---" << endl;
    cout << "Numeros: "; for(int i=0; i<5; i++) cout << numeros[indNum[i]] << " "; cout << endl;
    cout << "Letras:  "; for(int i=0; i<5; i++) cout << letras[indLet[i]] << " "; cout << endl;
    cout << "Libros:" << endl;
    for(int i=0; i<3; i++) biblioteca[indLib[i]].mostrar();

    return 0;
}
*/
