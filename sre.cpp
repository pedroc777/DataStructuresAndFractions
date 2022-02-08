#include <iostream>
#include <cmath>

using namespace std;


int mult(int, int);
int mult(int n, int m){

    if (n == 0 || m == 0){
        return 0;
    }
    else if (n == 0 || n == 1){
        return m;
    }
    else{
        return m + mult(n - 1, m);
    }
}

int pot(int, int);
int pot(int m, int n){
    if (n == 0){
        return 1;
    }
    else if (n == 0 || n == 1){
        return m;
    }
    else{
        return m * pot(m, n - 1);
    }

}

int main(){


    int n, m, j,k,l,o;



    cout << "Bienvenido al programa que te ayuda a multiplicar y potenciar recursivamente" << endl << endl
    << "Dame el primer factor de la multiplicacion" << endl;
    cin >> n;

    cout << "Dame el segundo factor de la multiplicacion" << endl;
    cin >> m;


    j = mult(n, m);


    cout << endl << endl << "Dame la base de la potencia" << endl;
    cin >> k;

    cout << "Dame el exponente de la potencia" << endl;
    cin >> l;

    o = pot(k, l);

    cout << endl << endl << "El resultado de la multiplicacion es: " << j << endl;
    cout << endl << endl << "El resultado de la potencia es: " << o << endl;

}

