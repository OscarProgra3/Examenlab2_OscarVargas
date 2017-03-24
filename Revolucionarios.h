#include "Seres"

#ifndef REVOLUCIONARIOS_H
#define REVOLUCIONARIOS_H

#include <string>

using namespace std;

class Revolucionarios : public Seres
{
	private:
		string fechaingreso;

	public:
		Revolucionarios();
		Revolucionarios(string,int,string,Frutadiablo*,bool,bool,bool,string);
		~Revolucionarios();
	
		string getFechaingreso();
		void setFechaingreso(string);
};
#endif