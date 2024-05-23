#pragma once
#include <iostream>
#include <string>
using namespace std;
class Persona{
public:
	Persona(string Nombre, string Apellido);
	string obtenerNombre();
	string obtenerApellido();
	virtual double ingresos() const; //Virtual pura
	virtual void imprimir() const;
private:
	string Nombre, Apellido;
};