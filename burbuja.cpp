#include <iostream>

using namespace std;

int main() {
	int elementos;
	cout << "Indique la cantidad de elementos: ";
	cin >> elementos;
	int vector[elementos];
	int i, j;
	cout << "Establecio una cantidad de " << elementos << " elementos en el vector" << endl;
	for(i = 0; i < elementos; i++) 
	{		
		cout << "Dame un entero: ";
		cin >> vector[i];
	}
	cout << "Se procedera a ordenar los siguientes elementos: " << endl;
	for(i = 0; i < elementos; i++) 
	{				
		cout << vector[i] << " ";
	}
	//metodo de burbuja
	int aux;
	for(i = 0; i < elementos; i++) 
	{				
		for(j = 1; j < elementos; j++) 
		{
			if (vector[j] < vector[j - 1]) {
				aux = vector[j];
				vector[j] = vector[j - 1];
				vector[j - 1] = aux;
			}
		}
	}
	//imprimir de nuevo el vector
	cout << "\nLos elementos ordenados son: " << endl;
	for(i = 0; i < elementos; i++) 
	{				
		cout << vector[i] << " ";
	}
	return 0;
}
