#include <iostream>

using namespace std;

struct Alumno {
	int clave;
	string nombre;
	Alumno *siguiente;
};

Alumno *inicio = NULL;

void insertarFinal() {
	Alumno *alumno = new Alumno();
	cout << "Ingrese la clave: ";
	cin >> alumno->clave;
	cin.ignore();
	cout << "Ingrese el nombre: ";
	getline(cin, alumno->nombre);
	alumno->siguiente = NULL;
	if (inicio == NULL) 
	{
		inicio = alumno;
		return;
	}
	Alumno *aux = inicio;
	while(aux->siguiente != NULL) {
		aux = aux->siguiente;
	}
	aux->siguiente = alumno;
}

void mostrarLista() 
{
	if (inicio == NULL) 
	{
		cout << "No hay datos en la lista" << endl;
		return;
	}
	Alumno *aux = inicio;
	while(aux != NULL) {
		cout << "Clave: " << aux->clave << endl;
		cout << "Nombre: " << aux->nombre << endl;
		aux = aux->siguiente;
	}
}

int main() 
{
	cout << "Listas enlazadas simples" << endl;	
	int agregar = 1;
	do {
		insertarFinal();
		cout << "Desea agregar otro alumno, presione 1 para si y cualquier numero para no" << endl;
		cin >> agregar;
	} while (agregar == 1);	
	mostrarLista();
	return 0;
}
