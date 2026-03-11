// ClaseTriangulo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Triangulo.h"

using namespace std;

int main()
{
    float base, altura;
    Triangulo triangulito;
    cout << "Ingresar la base:";
    cin >> base;
    cout << "Ingresar la altura:";
    cin >> altura;
    cout << "El area es: " << triangulito.calculararea(base, altura);
    return 0;
}
