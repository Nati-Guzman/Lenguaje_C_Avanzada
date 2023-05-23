#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

// Definici�n de la estructura
struct Persona {
  char nombre[50];
  char apellido[50];
};

// Funci�n para comparar dos personas y ordenarlas alfab�ticamente
bool compararPersonas(Persona p1, Persona p2) {
  int cmp = strcmp(p1.apellido, p2.apellido);
  if (cmp == 0) {
    return strcmp(p1.nombre, p2.nombre) < 0;
  }
  return cmp < 0;
}

int main() {
  int n;
  cout << "Ingrese el n�mero de personas: ";
  cin >> n;

  // Vector de personas
  vector<Persona> personas(n);

  // Leer datos de las personas
  for (int i = 0; i < n; i++) {
    cout << "Ingrese el nombre de la persona " << i+1 << ": ";
    cin >> personas[i].nombre;
    cout << "Ingrese el apellido de la persona " << i+1 << ": ";
    cin >> personas[i].apellido;
  }

  // Ordenar las personas alfab�ticamente
  sort(personas.begin(), personas.end(), compararPersonas);

  // Imprimir las personas ordenadas
  cout << endl << "Las personas ordenadas alfab�ticamente son:" << endl;
  for (int i = 0; i < n; i++) {
    cout << personas[i].nombre << " " << personas[i].apellido << endl;
  }

  return 0;
}

