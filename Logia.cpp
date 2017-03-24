#include "Logia.h"

Logia::Logia(string pnombre,string pelemento) : Frutadeldiablo(pnombre)
{
	elemento=pelemento;
}

string Logia::getElemento()
{
	return elemento;
}
void Logia::setElemento(string telemento)
{
	elemento=telemento;
}

string Logia::getTipo(){

	return "Logia";
}

//ESTO ESTÁ POR LA VERGA GRANDE :)
//con tal de pasar no me imporrta mage XDXDXDXDXD