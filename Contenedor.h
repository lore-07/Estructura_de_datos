#ifndef CONTENEDOR_H
#define CONTENEDOR_H

#include <iostream>
#include <string>

using namespace std;

class Persona {
public:
    string nombre, ap, am, genero;
    int edad;

    void leerDatos() {
        cout << "Nombre: "; cin >> nombre;
        cout << "Apellido P: "; cin >> ap;
        cout << "Apellido M: "; cin >> am;
        cout << "Genero: "; cin >> genero;
        cout << "Edad: "; cin >> edad;
        cout << endl;
    }

    void mostrarDatos() {
        cout << nombre << " " << ap << " " << am
             << " | " << genero << " | " << edad << " años" << endl;
    }
};

class Auto {
public:
    string nombre;
    float precio;
    int anio;

    void leerDatos() {
        cout << "Nombre del auto: "; cin >> nombre;
        cout << "Precio: "; cin >> precio;
        cout << "Año: "; cin >> anio;
        cout << endl;
    }

    void mostrarDatos() {
        cout << "Auto: " << nombre << " | Precio: " << precio
             << " | Año: " << anio << endl;
    }
};

class ListaPersonasIndirecta {
private:
    Persona* lista;
    int tamano;

public:
    ListaPersonasIndirecta(int n) {
        tamano = n;
        lista = new Persona[tamano];
        cout << "(Objeto Gestor: Memoria dinámica reservada)" << endl;
    }

    ~ListaPersonasIndirecta() {
        delete[] lista;
        cout << "(Objeto Gestor: Memoria dinámica liberada correctamente)" << endl;
    }

    void capturarLista() {
        for (int i = 0; i < tamano; i++) {
            cout << "--- Persona " << i + 1 << " ---" << endl;
            lista[i].leerDatos();
        }
    }

    void mostrarReporte() {
        cout << "\n--- LISTA DE PERSONAS REGISTRADAS ---" << endl;
        for (int i = 0; i < tamano; i++) {
            lista[i].mostrarDatos();
        }
    }
};

class ListaAutosIndirecta {
private:
    Auto* listaAutos;
    int cant;

public:
    ListaAutosIndirecta(int n) {
        cant = n;
        listaAutos = new Auto[cant];
    }

    ~ListaAutosIndirecta() {
        delete[] listaAutos;
    }

    void capturarAutos() {
        for (int i = 0; i < cant; i++) {
            cout << "--- Auto " << i + 1 << " ---" << endl;
            listaAutos[i].leerDatos();
        }
    }

    void imprimirInventario() {
        cout << "\n--- INVENTARIO DE AUTOS ---" << endl;
        for (int i = 0; i < cant; i++) {
            listaAutos[i].mostrarDatos();
        }
    }
};

#endif
