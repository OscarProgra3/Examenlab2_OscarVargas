#include "Seres.h"

#include <string>

#ifndef PIRATAS_H
#define PIRATAS_H

using namespace  std;

class Piratas : public Seres
{
	private: 
		string oceano;
		string tripulacion;
		string funcion;

	public:
		Piratas();
		Piratas(string,int,string,Frutadiablo*,bool,bool,bool,string,string,string);
		~Piratas();
	
	string getOceano();
	void setOceano(string);

	string getTripulacion();
	void setTripulacion(string);

	string getFuncion();
	void setFuncion(string);
};
#endif