/**
* Programa de Pilas
*/
#include <iostream>
using namespace std;
struct Alumno {
	int clave;
	string nombre;
	Alumno *siguiente;
};
Alumno *cima = NULL;

bool pilaVacia()
{
	if (cima == NULL) 
	{
		return true;
	}
	return false;
}

void push()
{
	Alumno *alumno = new Alumno();
	cout << "Ingrese la clave: ";
	cin >> alumno->clave;
	cin.ignore();
	cout << "Ingrese el nombre: ";
	getline(cin, alumno->nombre);
	alumno->siguiente = NULL;
	if (pilaVacia()) 
	{
		cima = alumno;
		return;
	}
	alumno->siguiente = cima;
	cima = alumno;
}

void pop()
{
	if (pilaVacia()) 
	{
		cout << "No hay elementos para sacar" << endl;
		return;
	}
	Alumno *alumno = new Alumno();
	alumno = cima;
	cima = alumno->siguiente;
	cout << "Se elimino al alumno: " << alumno->clave << ") " << alumno->nombre << endl;
	delete(alumno);
}

bool pilaLlena()
{
	return false;
}

int main() 
{
	push();
	pop();
	return 0;
}
