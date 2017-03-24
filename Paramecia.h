#include "Frutadeldiablo.h"
#include <string>

#ifndef PARAMECIA_H
#define PARAMECIA_H

using namespace std;

class Paramecia : public Frutadeldiablo
{
	private:
		string descripcion;

	public:
		Paramecia();
		Paramecia(string,string);
		~Paramecia();
		
		string getDescripcion();
		void setDescripcion(string);
};
#endif