#include "Zoan.h"

Zoan::Zoan(string pnombre, string ptipo, string panimal) : Frutadeldiablo(pnombre)
{
	tipo=ptipo;
	animal=panimal;
}

string Zoan::getTipo()
{
	return tipo;
}
void Zoan::setTipo(string ttipo)
{
	tipo=ttipo;
}

string Zoan::getAnimal()
{
	return animal;
}
string Zoan::setAnimal(string tanimal)
{
	animal=tanimal;
}