#include "Seres.h"

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
		Revolucionarios(string,int,string,Frutadeldiablo*,bool,bool,bool,string);
		
		string getFechaingreso();
		void setFechaingreso(string);

		string getTiposer();
};
#endif