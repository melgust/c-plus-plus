#include <iostream>

using namespace std;

int main()
{
	int filas, columnas;
	cout << "Indique la longitud de la matriz: ";
	cin >> filas >> columnas;
	int matriz[filas][columnas];
	for(int i = 0; i < filas; i++) 
	{
		for(int j = 0; j < columnas; j++) 
		{
			cout << "Indique el numero entero: ";
			cin >> matriz[i][j];
		}
	}
	//imprir los datos
	for(int i = 0; i < filas; i++) 
	{
		for(int j = 0; j < columnas; j++) 
		{
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	//ahora la busqueda secuencial por filas
	int buscar;
	cout << "Que numero desea buscar: ";
	cin >> buscar;
	bool encontrado = false;
	for(int i = 0; i < filas; i++) 
	{
		for(int j = 0; j < columnas; j++) 
		{
			if (matriz[i][j] == buscar) {
				cout << "El numero fue encontrado en la celda " << i + 1 << ", " << j + 1 << endl;
				encontrado = true;
			}
		}
	}
	if (!encontrado) 
	{
		cout << "El valor indicado no se encontro" << endl;
	}
	//busqueda por columnas
	cout << "Busqueda por columnas \n";
	for(int i = 0; i < columnas; i++) 
	{
		for(int j = 0; j < filas; j++) 
		{
			if (matriz[j][i] == buscar) {
				cout << "El numero fue encontrado en la celda " << j + 1 << ", " << i + 1 << endl;
				encontrado = true;
			}
		}
	}
	if (!encontrado) 
	{
		cout << "El valor indicado no se encontro" << endl;
	}
	return 0;
}
