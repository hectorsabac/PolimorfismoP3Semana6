#include "Persona.h"
Persona::Persona(string Nombre, string Apellido, TipoGenero Genero) {
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->Genero = Genero;
}
string Persona::obtenerNombre() {
	return Nombre;
}
Persona::TipoGenero Persona::obtenerGenero() {
	return Genero;
}

string Persona::obtenerNombre() {
	return Nombre;
}

string Persona::obtenerApellido() {
	return Apellido;
}