#include <iostream>
#include <cmath>

using namespace std;


int sumatoria (int, int);
int sumatoria(int n, int m){
	int k,j;

	if (n == 0 || n == 1){
		return n;
	}
	else{

		return (n + sumatoria(n, 0) - sumatoria(m, 0));
	}
}

int main(){

	int n,m,k;

	cout << "Dame límite inferior" << endl;
	cin >> k;

	cout << endl << endl << "Dame el límite superior" << endl;
	cin >> n;

	m = sumatoria(n, k);

	cout << "La sumatoria es: " << m << endl;

	return 0;
}
