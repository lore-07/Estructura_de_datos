#include <iostream>
#include <stdlib.h>
#include "Pila.h"

using namespace std;

int main() {
    Pila pila;
    int opcion, valor;

    do {
        system("cls"); 

        cout << "========== PILA DINAMICA ==========\n";
        cout << "1. Insertar \n";
        cout << "2. Eliminar \n";
        cout << "3. Mostrar\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        system("cls"); 

        switch(opcion) {
            case 1:
                cout << "Ingresa valor: ";
                cin >> valor;
                pila.push(valor);
                break;

            case 2:
                pila.pop();
                break;

            case 3:
                pila.mostrar();
                break;

            case 4:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion invalida\n";
        }

        system("pause"); 

    } while(opcion != 4);

    return 0;
}
