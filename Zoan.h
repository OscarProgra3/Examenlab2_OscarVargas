#include "Frutadeldiablo.h"

#ifndef ZOAN_H
#define ZOAN_H

using namespace std;

class Zoan : public Frutadeldiablo
{
	private: 
		string tipo;
		string animal;

	public:
		Zoan();
		Zoan(string,string,string);
		
		string getTipozoan();
		void setTipo(string);

		string getAnimal();
		string setAnimal(string);

		string getTipo();
};
#endif