#include <iostream>

using namespace std;

//primo: divisible por el mismo y por el uno
bool esPrimo(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int filas;
	int columnas;
	cout << "Indique la cantidad de filas: ";
	cin >> filas;
	cout << "Indique la cantidad de columnas: ";
	cin >> columnas;
	int matriz[filas][columnas];
	int i, j;
	cout << "Establecio una matriz de " << filas << " x " << columnas << ". Vamos a llenar la matriz" << endl;
	int suma = 0;
	for(i = 0; i < filas; i++) 
	{
		for(j = 0; j < columnas; j++) 
		{
			cout << "Dame un entero: ";
			cin >> matriz[i][j];
			suma += matriz[i][j];
		}
	}	
	cout << endl;
	if (esPrimo(suma)) {
		cout << "La sumatoria (" << suma << ") de la matriz es primo" << endl;
	} else {
		cout << "La sumatoria (" << suma << ") de la matriz es no primo" << endl;
	}
	return 0;
}
