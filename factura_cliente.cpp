#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Cliente {
    string nombre;
    string direccion;
    int telefono;
};

int main() {
    Cliente* cliente = new Cliente(); // Se crea un nuevo cliente

    // Se capturan los datos del cliente
    cout << "Ingrese el nombre del cliente: "<<endl;
    getline(cin, cliente->nombre);

    cout << "Ingrese la direccion del cliente: "<<endl;
    getline(cin, cliente->direccion);

    cout << "Ingrese el telefono del cliente: "<<endl;
    cin >> cliente->telefono;

    // Se imprime la factura en un fichero de texto
    ofstream factura("factura.txt");
    factura << "FACTURA"<<endl;
    factura << "Nombre: " << cliente->nombre <<endl;
    factura << "Direccion: " << cliente->direccion <<endl;
    factura << "Telefono: " << cliente->telefono <<endl;
    factura.close();

    delete cliente; // Se libera la memoria del cliente
    return 0;
}
