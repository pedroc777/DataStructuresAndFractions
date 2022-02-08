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

int multi(int, int);
int multi(int n, int m){


    int i,j,r;

    r = 0;
    for (i = 0; i < m; i++){
        r += n;
    }

    return r;
}


int poti(int, int);
int poti(int n, int m){
    int i,j,r;

    r = n;
    for (i = 1; i < m; i++){
        r *= n;
    }

    return r;

}
int main(){


    int n, m,j,k,l,o,r,s;



    cout << "Bienvenido al programa que te ayuda a multiplicar y potenciar recursiva e interativamente" << endl << endl
    << "Dame el primer factor de la multiplicacion" << endl;
    cin >> n;

    cout << "Dame el segundo factor de la multiplicacion" << endl;
    cin >> m;


    j = mult(n, m);
    r = multi(n, m);


    cout << endl << endl << "Dame la base de la potencia" << endl;
    cin >> k;

    cout << "Dame el exponente de la potencia" << endl;
    cin >> l;

    o = pot(k, l);
    s = poti(k, l);



    cout << endl << endl << "El resultado de la multiplicacion recursiva es: " << j << endl;
    cout << "El resultado de la multiplicacion iterativa es: " << r << endl;
    cout << endl << endl << "El resultado de la potencia recursiva es: " << o << endl;
    cout << "El resultado de la potencia iterativa es: " << s << endl;


    return 0;

}
