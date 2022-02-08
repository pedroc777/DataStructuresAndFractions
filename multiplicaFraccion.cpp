#include "multiplicacionFraccion.h"

Fraccion multiplicaFracciones(Fraccion a, Fraccion b){

    Fraccion resultado;
    resultado.numerador = a.numerador * b.numerador;
    resultado.denominador = a.denominador * b.denominador;


    return resultado;

}
