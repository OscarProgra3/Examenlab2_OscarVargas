#include "Seres.h"

Seres::Seres(string praza,int pedad,string pnombre,Frutadeldiablo* pfrutadiablo,bool phakiobservacion,bool phakiarmadura,bool phakirey)
{
	raza=praza;
	edad=pedad;
	nombre=pnombre;
	frutad=pfrutadiablo;
	hakiobservacion=phakiobservacion;
	hakiarmadura=phakiarmadura;
	hakirey=phakirey;

}

string Seres::getRaza()
{
	return raza;
}
void Seres::setRaza(string traza)
{
	raza=traza;
}

int Seres::getEdad()
{
	return edad;
}
void Seres::setEdad(int tedad)
{
	edad=tedad;
}
		
string Seres::getNombre()
{
	return nombre;
}
void Seres::setNombre(string tnombre)
{
	nombre=tnombre;
}

Frutadeldiablo* Seres::getFrutadiablo()
{
	return frutad;
}
void Seres::setFrutadiablo(Frutadeldiablo* tfrutad )
{
	frutad=tfrutad;
}

bool Seres::getHakiobservacion()
{
	return hakiobservacion;
}
void Seres::setHakiobservacion(bool thakiobservacion)
{
	hakiobservacion=thakiobservacion;
}

bool Seres::getHakiarmadura()
{
	return hakiarmadura;
}
void Seres::setHakiarmadura(bool thakiarmadura)
{
	hakiarmadura=thakiarmadura;
}

bool Seres::getHakirey()
{
	return hakirey;
}
void Seres::setHakirey(bool thakirey)
{
	hakirey=thakirey;
}
string Seres::getTiposer(){

	return "";
}