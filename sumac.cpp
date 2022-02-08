#include <iostream>
#include <cmath>

using namespace std;


int sumatoria (int);
int sumatoria(int n){


	if (n == 0 || n == 1){
		return n;
	}
	else{

		return (n + sumatoria(n - 1));
	}
}

int sumatoria2 (int, int);
int sumatoria2(int n, int m){
    int j;

    if (n <= 0 || n == 1){
	    j = m + sumatoria(m - 1);
	}
	else{
	    j = m + sumatoria(m - 1) - sumatoria(n - 1);
	}

}

int main(){

	int n,m,k,j,l,o;

	cout << "Dame limite inferior" << endl;
	cin >> k;

	cout << "Dame el limite superior" << endl;
	cin >> n;

	m = sumatoria2(k, n);

	cout << endl << endl <<  "Dame el numero que quieres evaluar con la funcion" << endl;
	cin >> j;


	l = 5*pow((j),3) + (6*j) - 2;

	o = sumatoria(l);
	cout << endl << endl << "Cuando n = " << j << ", f(n) = " << l << endl;


	cout << "La sumatoria 1 es: " << m << endl;
	cout<< "La sumatoria 2 es: " << o << endl;

	return 0;
}

