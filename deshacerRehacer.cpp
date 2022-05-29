#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

struct Cambio {	
	string nombre;
	Cambio *siguiente;
};

Cambio *cimaDeshacer = NULL, *cimaRehacer = NULL;

bool pilaVaciarDeshacer()
{
	if (cimaDeshacer == NULL) 
	{
		return true;
	}
	return false;
}

bool pilaVaciarRehacer()
{
	if (cimaRehacer == NULL) 
	{
		return true;
	}
	return false;
}

void pushDeshacer(string str)
{
	Cambio *cambio = new Cambio();
	cambio->nombre = str;
	cambio->siguiente = NULL;
	if (pilaVaciarDeshacer()) 
	{
		cimaDeshacer = cambio;
		return;
	}
	cambio->siguiente = cimaDeshacer;
	cimaDeshacer = cambio;
}


void pushRehacer(string str)
{
	Cambio *cambio = new Cambio();
	cambio->nombre = str;
	cambio->siguiente = NULL;
	if (pilaVaciarRehacer()) 
	{
		cimaRehacer = cambio;
		return;
	}
	cambio->siguiente = cimaRehacer;
	cimaRehacer = cambio;
}

string popDeshacer()
{
	if (pilaVaciarDeshacer()) 
	{
		cout << "No hay elementos para sacar" << endl;
		return "";
	}
	Cambio *cambio = cimaDeshacer;
	cimaDeshacer = cambio->siguiente;
	cout << "Se restauro el cambio: " << cambio->nombre << endl;
	string str = cambio->nombre;
	pushRehacer(str);
	delete(cambio);
	return str;
}


string popRehacer()
{
	if (pilaVaciarRehacer()) 
	{
		cout << "No hay elementos para sacar" << endl;
		return "";
	}
	Cambio *cambio = cimaRehacer;
	cimaRehacer = cambio->siguiente;
	cout << "Se restuaro el cambio: " << cambio->nombre << endl;
	string str = cambio->nombre;
	delete(cambio);
	return str;
}

int main() {	
	ifstream archivo("entrada.txt");
	string linea, alreves;
    string vocales = "aeiou";
    string consonantes = "bcdfghjklmnpqrstvwxyz";
    int cantidadVocales = 0, cantidadConsonantes;
	if (archivo.is_open()) {
		getline(archivo, linea);
		archivo.close();
		cout << "Linea original: " << linea << endl;
		pushDeshacer(linea);
		linea = "Hola con el cambio";
		cout << "Se cambio a " << linea << endl;
		//3. elegir simulacion de ctrl + z
		linea = popDeshacer();
		cout << "Valor actual de linea: " << linea << endl;
		//4. elegir simulacion de ctrl + y
		linea = popRehacer();
		cout << "Valor actual de linea: " << linea << endl;
	} 
    else 
    {		
		cout << "No se puede abrir el archivo\n";
	}
    cout << "Hasta luego\n";
	return 0;
}
