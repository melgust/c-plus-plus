/**
* Ejemplo de colas
*/
#include <iostream>
using namespace std;

struct Alumno {
	int clave;
	string nombre;
	Alumno *siguiente;
};

Alumno *inicio = NULL, *final = NULL, *tmp;
const int elementos = 5;

bool colaVacia()
{
	if (inicio == NULL) 
	{
		return true;
	}
	return false;
}

int cantidad() {
	if (inicio == NULL) 
	{
		return 0;
	}
	tmp = inicio;
	int i;
	while(tmp != NULL) {
		i++;
		tmp = tmp->siguiente;
	}
	return i;
}

bool colaLlena()
{
	if (cantidad() == elementos) {
		return true;
	}
	return false;
}

void push()
{
	if (colaLlena()) {
		cout << "Lo siento, no hay espacio para agregar un nuevo elemento";
		return;
	}
	Alumno *alumno = new Alumno();
	cout << "Ingrese la clave: ";
	cin >> alumno->clave;
	cin.ignore();
	cout << "Ingrese el nombre: ";
	getline(cin, alumno->nombre);
	alumno->siguiente = NULL;
	if (colaVacia()) 
	{
		inicio = alumno;
		final = alumno;
		return;
	}
	final->siguiente = alumno;
	final = alumno;
}

void pop()
{
	if (colaVacia()) 
	{
		cout << "No hay elementos para sacar" << endl;
		return;
	}
	tmp = inicio->siguiente;
	cout << "Se elimino al alumno: " << inicio->clave << ") " << inicio->nombre << endl;
	delete(inicio);
	inicio = tmp;
	if (tmp == NULL) {
		final = NULL;
	}
}

void mostrarElementos() {
	if (colaVacia()) 
	{
		cout << "No hay elementos para sacar" << endl;
		return;
	}
	tmp = inicio;	
	while(tmp != NULL) {	
		cout << "Alumno: " << tmp->clave << ") " << tmp->nombre << endl;
		tmp = tmp->siguiente;
	}
}

int main() 
{
	push();
	push();
	push();
	push();
	pop();
	mostrarElementos();
	push();
	pop();
	pop();
	pop();
	pop();
	mostrarElementos();
	return 0;
}
