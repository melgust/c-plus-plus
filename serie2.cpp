#include <iostream>

using namespace std;

class Transporte
{
    protected:
        string nombre;

    public:
        Transporte(string nombre){
            nombre = nombre;
        }

        void avanzar() {
            cout << "Este es el avance generico " << nombre << endl;            
        }
};

class Avion : public Transporte 
{
    public:
        Avion(string nombre): Transporte(nombre) {}

        void avanzar() {
            cout << "Estoy sobre las nubes ahorita " << nombre << endl;
        }
};

class Barco : public Transporte 
{
    public:
        Barco(string nombre): Transporte(nombre) {}
        void avanzar() {
            cout << "Estoy en el mar avanzando " << nombre << endl;
        }
};

class Motocicleta : public Transporte 
{
    public:
        Motocicleta(string nombre): Transporte(nombre) {}

        void avanzar() {
            cout << "Bruuuuuuu, soy una motocicleta al 100 " << nombre << endl;
        }
};

class Automovil
{
    public:
        
        void avanzar() {
            cout << "Hola soy un auto " << endl;
        }
        
        void avanzar(string nombre) {
            cout << "Hola son otra de avanzar " << nombre << endl;
        }
};

int main () {
    Avion otro("Boing 747");
    otro.avanzar();
    Barco barco("Titanic");
    barco.avanzar();
    Motocicleta moto("Italika");
    moto.avanzar();
    Automovil automovil;
    automovil.avanzar();
    automovil.avanzar("Este si");
    return 0;
}
