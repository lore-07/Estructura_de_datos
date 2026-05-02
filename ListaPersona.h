#ifndef LISTAPERSONA_H
#define LISTAPERSONA_H

#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre, ap, am, genero;
    int edad;

public:
    void leerDatos() {
        cout << "Nombre: "; cin >> nombre;
        cout << "Apellido Paterno: "; cin >> ap;
        cout << "Apellido Materno: "; cin >> am;
        cout << "Genero: "; cin >> genero;
        cout << "Edad: "; cin >> edad;
        cout << endl;
    }

    void mostrarDatos() {
        cout << nombre << " " << ap << " " << am
             << " | " << genero << " | " << edad << " años" << endl;
    }
};

class Personas {
private:
    Persona* lista;
    int total;

public:
    Personas(int n) {
        total = n;
        lista = new Persona[total];
    }

    ~Personas() {
        delete[] lista;
    }

    void capturar() {
        for (int i = 0; i < total; i++) {
            cout << "Persona " << i + 1 << ":" << endl;
            lista[i].leerDatos();
        }
    }

    void imprimir() {
        cout << "\nREGISTRO DE PERSONAS" << endl;
        for (int i = 0; i < total; i++) {
            lista[i].mostrarDatos();
        }
    }
};

#endif
