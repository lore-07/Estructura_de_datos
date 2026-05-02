#include <iostream>
#include <stdlib.h>
#include "ListaDinamica.h"

using namespace std;

int main() {
    Lista lista;
    int opcion, valor;

    do {
        system("cls"); 

        cout << "====== LISTA DINAMICA 7 bis ======\n";
        cout << "1. Insertar\n";
        cout << "2. Eliminar\n";
        cout << "3. Buscar\n";
        cout << "4. Mostrar\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        system("cls"); 

        switch(opcion) {
            case 1:
                cout << "Ingresa valor: ";
                cin >> valor;
                lista.insertar(valor);
                break;

            case 2:
                lista.eliminar();
                break;

            case 3:
                cout << "Valor a buscar: ";
                cin >> valor;
                lista.buscar(valor);
                break;

            case 4:
                lista.mostrar();
                break;

            case 5:
                cout << "Saliendo del programa...\n";
                break;

            default:
                cout << "Opcion invalida\n";
        }

        system("pause"); 

    } while(opcion != 5);

    return 0;
}
