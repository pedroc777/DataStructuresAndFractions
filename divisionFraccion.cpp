#include "divisionFraccion.h"

Fraccion divisionFraccion(Fraccion a, Fraccion b){

    Fraccion resultado;
    resultado.numerador = (a.numerador * b.denominador);
    resultado.denominador = (b.numerador * a.denominador);

    return resultado;
}
