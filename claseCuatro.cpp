#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Operacion
{
	protected:
		int a;
		int b;
	public:
		Operacion(int x = 0, int y = 0)
		{
			a = x;
			b = y;
		}
		
		int operar() 
		{
		}
};

class Suma : public Operacion 
{
	public:
		Suma(int n = 0, int m = 0) : Operacion(n, m){}
		
		int operar()
		{
			return a + b;
		}
};

class Resta : public Operacion 
{
	public:
		Resta(int n = 0, int m = 0) : Operacion(n, m){}
		
		int operar()
		{
			return a - b;
		}
};

class Multiplicacion : public Operacion 
{
	public:
		Multiplicacion(int n = 0, int m = 0) : Operacion(n, m){}
		
		int operar()
		{
			return a * b;
		}
};

class Division : public Operacion 
{
	public:
		Division(int n = 0, int m = 0) : Operacion(n, m){}
		
		int operar()
		{
			return a / b;
		}
};

int otraSuma(int a, int b) {
	return a + b;
}

int cuadrado(int x, int &y);
int factorial(int x);
void leeArchivo();

int main() {
	/*Suma suma(4, 5);
	cout << "La suma es: " << suma.operar() << endl;
	Resta resta(4, 5);
	cout << "La resta es: " << resta.operar() << endl;
	Multiplicacion multi(4, 5);
	cout << "El producto es: " << multi.operar() << endl;
	Division division(4, 5);
	cout << "La division es: " << division.operar() << endl;
	cout << "-----------\n";
	cout << "La suma es: " << otraSuma(4, 5) << endl;*/
	//int n = 5;
	/*int m = 10;
	cout << "El cuadrado de 5 es: " << cuadrado(n, m) << endl;
	cout << "El valor de n es: " << n << endl;
	cout << "El valor de m es: " << m << endl;*/
	//5! = 5 * 4 * 3 * 2 * 1 >> 5! = 120
	//cout << "5! = " << factorial(n);
	leeArchivo();
	return 0;
}

int cuadrado(int x, int &y)
{
	int z = x;
	y = 0;
	x = 0;
	return z * z;
}

//5 * 4 * 3 * 2 * 1 * 1

int factorial(int x) {
	if (x == 0) return 1;
	return x * factorial(x - 1);
}

void leeArchivo()
{
	ifstream archivo;
	char linea[100];
	archivo.open("entrada.txt");
	if (archivo.is_open())
	{
		cout << "El archivo esta abierto" << endl;
		while(!archivo.eof()) {
			archivo.getline(linea, 100, '\n');
			cout << linea << "\n";
		}
		archivo.close();
	} else 
	{
		cout << "No se pudo abrir el archivo";
	}
	ofstream otroArchivo;
	otroArchivo.open("nuevo.txt", ios_base::out);
	if (otroArchivo.is_open()) 
	{
		cout << "El archivo esta abierto" << endl;
		otroArchivo.close();
	}
}
