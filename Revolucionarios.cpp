#include "Revolucionarios.h"

Revolucionarios::Revolucionarios(string praza,int pedad,string pnombre,Frutadeldiablo* pfrutadiablo,bool phakiobservacion,bool phakiarmadura,bool phakirey,string pfechaingreso) : Seres(praza,pedad,pnombre, pfrutadiablo, phakiobservacion,phakiarmadura,phakirey)
{
	fechaingreso=pfechaingreso;

}

string Revolucionarios::getFechaingreso()
{
	return fechaingreso;
}
void Revolucionarios::setFechaingreso(string tfechaingreso)
{
	fechaingreso=tfechaingreso;
}