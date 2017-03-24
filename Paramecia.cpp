#include "Paramecia.h"

Paramecia::Paramecia(string pnombre, string pdescripcion) : Frutadeldiablo(pnombre)
{
	descripcion=pdescripcion;
}

string Paramecia::getDescripcion()
{
	return descripcion;
}
void Paramecia::setDescripcion(string tdescripcion)
{
	descripcion=tdescripcion;
}
