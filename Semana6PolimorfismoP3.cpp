#include <iostream>
#include "Persona.h"
#include "Maestro.h"
#include "Alumno.h"
#include <vector>
using namespace std;

int main() {
	Maestro m("Martin", "Cuellar", "12345", 1500); m.imprimir();
	Alumno a("Gabriel", "Vasquez", "67890", 100); a.imprimir();
	vector <Persona*> personas(2);
	vector <Persona> personas2;
	personas2.push_back(m);
	personas2.push_back(a);
	personas[0] = dynamic_cast<Persona*>(&m);
	personas[1] = dynamic_cast<Persona*>(&a);
	for (Persona* personaPtr : personas) {
		cout << personaPtr->ingresos() << " -> ";
		personaPtr->imprimir();
	}
	/*for (Persona persona : personas2) {
		cout << persona.ingresos() << " -> ";
		persona.imprimir();
	}*/
}