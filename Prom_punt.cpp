#include <iostream>
#include "Promedio.h"
#include <clocale>


int main(){
    setlocale(LC_ALL, "");


    Promedio miPuntero;

    miPuntero.Datos();
    miPuntero.Resultados();

    return 0;
}
