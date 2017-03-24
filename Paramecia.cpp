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

//poli del papi

string Paramecia::getTipo(){

	return "Paramecia";
}