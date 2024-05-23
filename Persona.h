#pragma once
#include <string>
using namespace std;
class Persona{
public:
	enum TipoGenero {FEMENINO, MASCULINO};
	Persona(string Nombre, string Apellido, TipoGenero genero);
	string obtenerNombre();
	TipoGenero obtenerGenero();
	string obtenerNombre();
	string obtenerApellido();
private:
	string Nombre, Apellido;
	TipoGenero Genero;
};

