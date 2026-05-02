#include <iostream>
#include <stdlib.h>
#include "Cola.h"

using namespace std;

int main() {
    Cola cola;
    int opcion, valor;

    do {
        system("cls"); 

        cout << "====== COLA STL  ======\n";
        cout << "1. Insertar\n";
        cout << "2. Eliminar\n";
        cout << "3. Mostrar\n";
        cout << "4. Ver frente\n";
        cout << "5. Tamanio\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        system("cls"); 

        switch(opcion) {
            case 1:
                cout << "Ingresa valor: ";
                cin >> valor;
                cola.enqueue(valor);
                break;

            case 2:
                cola.dequeue();
                break;

            case 3:
                cola.mostrar();
                break;

            case 4:
                cola.frente();
                break;

            case 5:
                cola.tamanio();
                break;

            case 6:
                cout << "Saliendo del programa...\n";
                break;

            default:
                cout << "Opcion invalida\n";
        }

        system("pause"); 

    } while(opcion != 6);

    return 0;
}
