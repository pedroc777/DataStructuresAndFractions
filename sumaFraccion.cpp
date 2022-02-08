#include "sumaFraccion.h"

Fraccion sumaFraccion(Fraccion a, Fraccion b){

    Fraccion resultado;
    resultado.numerador = (a.numerador * b.denominador) + (b.numerador * a.denominador);
    resultado.denominador = (b.denominador * a.denominador);

    return resultado;
}
