#include <iostream>
using namespace std;


class DatosPersonales {
protected:
    string nombre;
    string direccion;

public:
    DatosPersonales(string n, string d) : nombre(n), direccion(d) {}

    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Direccion: " << direccion << endl;
    }
};


class Edad {
protected:
    int edad;

public:
    Edad(int e) : edad(e) {}

    void verificarEdad() {
        cout << "Edad: " << edad << endl;
        if (edad >= 18) {
            cout << "Ya puedes votar." << endl;
        } else {
            cout << "Aun no puedes votar" << endl;
        }
    }
};



class Persona : public DatosPersonales, public Edad {
public:
    Persona(string n, string d, int e) : DatosPersonales(n, d), Edad(e) {}

    void mostrarTodo() {
        cout << "--- Informaci�n de la Persona ---" << endl;
        mostrarDatos();
        verificarEdad();
    }
};

int main() {
    Persona p1("Laura", "Cuahutepec 234", 17);
    p1.mostrarTodo();

    cout << endl;

    Persona p2("Juan", "San Lorenzo 123", 21);
    p2.mostrarTodo();

    return 0;
}



                                         
    
