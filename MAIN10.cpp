#include <iostream>
#include <cstdlib>
#include "Lista.h"

using namespace std;

int main() {
    Lista lista;
    int opcion, valor;

    do {
        system("cls");

        cout << "====== LISTA STL ======\n";
        cout << "1. Insertar\n";
        cout << "2. Eliminar\n";
        cout << "3. Buscar\n";
        cout << "4. Mostrar\n";
        cout << "5. Tamanio\n";
        cout << "6. Limpiar\n";
        cout << "7. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        system("cls");

        switch(opcion) {
            case 1:
                cout << "Valor: ";
                cin >> valor;
                lista.insertar(valor);
                break;

            case 2:
                cout << "Valor a eliminar: ";
                cin >> valor;
                lista.eliminar(valor);
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
                lista.tamanio();
                break;

            case 6:
                lista.limpiar();
                break;

            case 7:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion invalida\n";
        }

        system("pause");

    } while(opcion != 7);

    return 0;
}
