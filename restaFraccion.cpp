#include "restaFraccion.h"

Fraccion restaFraccion(Fraccion a, Fraccion b){
    Fraccion resultado;
    resultado.numerador = (a.numerador * b.denominador)- (b.numerador * a.denominador);
    resultado.denominador = (a.denominador * b.denominador);

    return resultado;

}
