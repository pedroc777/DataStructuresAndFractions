#include <iostream>
#include "multiplicacionFraccion.h"
#include "restaFraccion.h"
#include "sumaFraccion.h"
#include "divisionFraccion.h"


using namespace std;

int main()
{
    Fraccion fraccionA;
    Fraccion fraccionB;
    Fraccion r1,r2,r3,r4;

    cout << "Bienvenido al programa que te ayuda a hacer operaciones con fracciones" << endl << endl;

    cout << "Dame el numerador de la primera fraccion:" << endl;
    cin >> fraccionA.numerador;

    cout << "Dame el denominador de la primera fraccion:" << endl;
    cin >> fraccionA.denominador;

    cout << "Dame el numerador de la segunda fraccion:" << endl;
    cin >> fraccionB.numerador;

    cout << "Dame el denominador de la segunda fraccion:" << endl;
    cin >> fraccionB.denominador;


    r1 = multiplicaFracciones(fraccionA, fraccionB);
    r2 = restaFraccion(fraccionA, fraccionB);
    r3 = sumaFraccion(fraccionA, fraccionB);
    r4 = divisionFraccion(fraccionA, fraccionB);

    cout << "La multiplicacion es "
         << r1.numerador << "/" <<
            r1.denominador << endl;


    cout << "La suma es "
         << r3.numerador << "/" <<
            r3.denominador << endl;


    cout << "La resta es "
         << r2.numerador << "/" <<
            r2.denominador << endl;


    cout << "La division es "
         << r4.numerador << "/" <<
            r4.denominador << endl;

    return 0;

}
