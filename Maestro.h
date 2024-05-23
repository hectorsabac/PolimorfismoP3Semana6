#pragma once
#include <string>
#include "Persona.h"
class Maestro : public Persona {
	string NumeroTalentoHumano;
	double Salario;
public:
	Maestro(string Nombre, string Apellido, string NumeroTalentoHumano, double Salario);
	string obtenerNumero();
	visual double ingresos() const override;
	virtual void imprimir() const override;
};

