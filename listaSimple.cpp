/*
	Integrantes
	Melvin cali
*/
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

void insertarNodo() {
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
		cout << "Registro agregado\n";
		return;
	}	
	if (alumno->clave < inicio->clave) 
	{
		alumno->siguiente = inicio;
		inicio = alumno;
		cout << "Registro agregado\n";
		return;
	}
	Alumno *aux = inicio;
	Alumno *anterior;
	while(aux != NULL) {
		if (alumno->clave == aux->clave) 
		{
			cout << "La clave ya existe, no es posible agregar\n" << endl;
			return;
		}
		if (alumno->clave < aux->clave) 
		{
			anterior->siguiente = alumno;
			alumno->siguiente = aux;
			cout << "Registro agregado\n";
			return;
		}
		anterior = aux;
		aux = aux->siguiente;
	}
	anterior->siguiente = alumno;
}

void mostrarLista() 
{
	if (inicio == NULL) 
	{
		cout << "No hay datos en la lista" << endl;
		return;
	}
	cout << "\n*** Lista de alumnos ***\n";
	Alumno *aux = inicio;
	while(aux != NULL) {
		cout << "Clave: " << aux->clave << ", nombre: " << aux->nombre << endl;
		aux = aux->siguiente;
	}
}

int main() 
{
	cout << "Listas enlazadas simples" << endl;	
	int agregar = 1;
	do {
		insertarNodo();
		mostrarLista();
		cout << "Desea agregar otro alumno, presione 1 para si y cualquier numero para no" << endl;
		cin >> agregar;
	} while (agregar == 1);	
	return 0;
}
