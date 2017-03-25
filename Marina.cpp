#include "Marina.h"


Marina::Marina(string praza,int pedad,string pnombre,Frutadeldiablo* pfrutadiablo,bool phakiobservacion,bool phakiarmadura,bool phakirey, string pfechaingreso,string prango) : Seres(praza,pedad,pnombre,pfrutadiablo,phakiobservacion,phakiarmadura,phakirey)
{
	fechaingreso=pfechaingreso;
	rango=prango;
}

		

string Marina::getFechaingreso()
{
	return fechaingreso;
}
void Marina::setFechaingreso(string tfechaingreso)
{
	fechaingreso=tfechaingreso;
}

string Marina::setRango()
{
	return rango;
}
void Marina::setRango(string trango)
{
	rango=trango;
}
string Marina::getTiposer()
{
	return "Marina"; 
}
