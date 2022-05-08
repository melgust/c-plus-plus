#include <iostream>

using namespace std;

struct Alumno {
	int clave;
	string nombre;
};

int main() 
{
	int cantidad = 5;
	Alumno alumnos[cantidad];
	for(int i = 0; i < cantidad; i++) 
	{
		Alumno alumno;
		cout << "Ingrese la clave: ";
		cin >> alumno.clave;
		cin.ignore();
		cout << "Ingrese el nombre: ";
		getline(cin, alumno.nombre);
		alumnos[i] = alumno;
	}
	cout << "Los alumnos ingresados fueron: " << endl;
	for(int i = 0; i < cantidad; i++) 
	{
		Alumno alumno = alumnos[i];
		cout << "Clave: " << alumno.clave << endl;
		cout << "Nombre: " << alumno.nombre << endl;
	}
	return 0;
}
