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
//ESTO ESTÁ POR LA VERGA GRANDE :)