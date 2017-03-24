#include "Piratas.h"


Piratas::Pratas(string praza,int pedad,string pnombre,Frutadiablo* pfrutadiablo,bool phakiobservacion,bool phakiarmadura,bool phakirey,string poceano, string ptripulacion, string pfuncion ) : Seres(praza,pedad,pnombre, pfrutadiablo, phakiobservacion,phakiarmadura,phakirey)
{
	oceano=poceano;
	tripulacion=ptripulacion;
	funcion=pfuncion;
}

string Piratas::getOceano()
{
	return oceano;
}
void Piratas::setOceano(string toceano)
{
	oceano=toceano;
}

string Piratas::getTripulacion()
{
	return tripulacion;
}
void Piratas::setTripulacion(string ttripulacion)
{
	tripulacion=ttripulacion;
}

string Piratas::getFuncion()
{
	return funcion;
}
void Piratas::setFuncion(string tfuncion)
{
		funcion=tfuncion;
}