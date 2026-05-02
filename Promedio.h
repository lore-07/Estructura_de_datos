#include <iostream>
#include <algorithm>

using namespace std;

class Promedio{
private:
    float numeros[5];
    float* ptr;

public:
    Promedio(){
        ptr= numeros;
    }

    void Datos(){
        cout << "Ingresa 5 números: " << endl;
        for (int i= 0; i<5; i++){
            cout << "Numéro " << i+1 << ": ";
            cin >> *(ptr + i);
        }
    }

    float Suma(){
        float suma= 0;
        for(int i= 0; i<5; i++) suma += *(ptr + i);
        return suma;
    }

    float Maximo(){
        float maximo= *ptr;
        for (int i= 1; i<5; i++){
            if (*(ptr + i) > maximo) {
            maximo = *(ptr + i);
        }
    }
        return maximo;
    }

    float Minimo(){
        float minimo= *ptr;
        for (int i= 1; i<5; i++){
            if (*(ptr + i) < minimo) {
            minimo = *(ptr + i);
        }
    }
        return minimo;

    }

    void Resultados(){
        float suma= Suma();
        cout << "Resultados\n" << endl;
        cout << "Suma: " << suma << endl;
        cout << "Promedio: " << suma/5.0 << endl;
        cout << "Máximo: " << Maximo() << endl;
        cout << "Minimo: " << Minimo() << endl;
    }
};
