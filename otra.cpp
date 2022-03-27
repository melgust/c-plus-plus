#include <iostream>

using namespace std;

void eduardotato01(){
	cout<< "me llamo eduardotato01"
}

int main() 
{
	int tamanio = 5;
	int vector[tamanio];
	int i, numero;
	for(i = 0; i < tamanio; i++) 
	{
		cout << "Dame un entero: ";
		cin >> vector[i];
	}
	int suma = 0;
	int promedio;
	for(i = 0; i < tamanio; i++) 
	{
		suma = suma + vector[i];
	}
	cout << endl;
	cout << suma;
	cout << endl;
	promedio = suma / tamanio;
	cout << "El promedio es: " << promedio << endl;
	for(i = 0; i < tamanio; i++) 
	{
		cout << vector[i] << " ";
	}
	return 0;
}
