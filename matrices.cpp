#include <iostream>

using namespace std;

int main() 
{
	int filas = 2;
	int columnas = 3;
	int matriz[filas][columnas];
	int i, j;
	for(i = 0; i < filas; i++) 
	{
		for(j = 0; j < columnas; j++) 
		{
			cout << "Dame un entero: ";
			cin >> matriz[i][j];
		}
	}
	int suma = 0;
	int promedio;
	for(i = 0; i < filas; i++) 
	{
		for(j = 0; j < columnas; j++) 
		{
			suma += matriz[i][j];
		}
	}
	cout << endl;
	cout << suma;
	cout << endl;
	promedio = suma / (filas * columnas);
	cout << "El promedio es: " << promedio << endl;
	for(i = 0; i < filas; i++) 
	{
		for(j = 0; j < columnas; j++) 
		{
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
