#include "Seres"

Seres::Seres(string praza,int pedad,string pnombre,Frutadiablo* pfrutadiablo,bool phakiobservacion,bool phakiarmadura,bool phakirey)
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
void setRaza(string traza)
{
	raza=traza;
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
