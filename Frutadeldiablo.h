#include <string>

#ifndef FRUTADELDIABLO_H
#define FRUTADELDIABLO_H

using namespace std;

class Frutadeldiablo
{	
	protected: 
		string nombre;

	public:
		Frutadeldiablo();
		Frutadeldiablo(string);
	
		string getNombre();
		void setNombre(string);

		virtual string getTipo();

};
#endif