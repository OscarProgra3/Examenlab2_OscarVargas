#include "Frutadeldiablo.h"

Frutadeldiablo::Frutadeldiablo(string pnombre)
{
	nombre=pnombre;
}

string Frutadeldiablo::getNombre()
{
	return nombre;
}
void Frutadeldiablo::setNombre(string tnombre)
{
	nombre=tnombre;
}