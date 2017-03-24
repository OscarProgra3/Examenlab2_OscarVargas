#include "Frutadeldiablo.h"
#include <string>

#ifndef LOGIA_H
#define LOGIA_H

using namespace std;

class Logia : public Frutadeldiablo
{
	private:
	string elemento;

	public:
		Logia();
		Logia(string,string);
		~Logia();
		
		string getElemento();
		void setElemento(string);
};
#endif