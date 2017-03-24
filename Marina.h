#include "Seres.h"

#include <string>

#ifndef MARINA_H
#define MARINA_H

using namespace std;

class Marina : public Seres
{
	private:
		string fechaingreso;
		string rango;

	public:
		Marina();
		Marina(string,int,string,Frutadeldiablo*,bool,bool,bool,string,string);
	
	string getFechaingreso();
	void setFechaingreso(string);

	string setRango();
	void setRango(string);
};
#endif