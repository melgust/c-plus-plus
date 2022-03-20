#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main() {	
	ifstream archivo("entrada.txt");
	string linea, alreves;
    string vocales = "aeiou";
    string consonantes = "bcdfghjklmnpqrstvwxyz";
    int cantidadVocales = 0, cantidadConsonantes;
	if (archivo.is_open()) {
		getline(archivo, linea);
		archivo.close();
		for (int i = 0; i < linea.length(); i++) 
        {
            for (int j = 0; j < vocales.length(); j++)
            {
                if (toupper(linea[i]) == toupper(vocales[j]))
                {
                    cantidadVocales++;
                }
            }
            for (int j = 0; j < consonantes.length(); j++)
            {
                if (toupper(linea[i]) == toupper(consonantes[j]))
                {
                    cantidadConsonantes++;
                }
            }
		}        
	} 
    else 
    {		
		cout << "No se puede abrir el archivo\n";
	}
    cout << endl;
    ofstream salida("salida.txt", ios_base::out);
    if (salida.is_open()) 
    {
        salida << "Cantidad de vocales es: " << cantidadVocales << endl;
        salida << "Cantidad de consonantes es: " << cantidadConsonantes;
        salida.close();
        cout << "He creado un archivo llamado salida.txt" << endl;
    } 
    else 
    {
        cout << "No fue posible crear el archivo de salida\n";
    }
    cout << "Hasta luego\n";
	return 0;
}
