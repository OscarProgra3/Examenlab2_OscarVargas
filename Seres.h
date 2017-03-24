#include <string>
#include "Frutadeldiablo.h"

#ifndef SERES_H
#define SERES_H

using namespace std;



class Seres
{
	protected:
		string raza;
		int edad;
		string nombre;
		Frutadeldiablo* frutad;
		bool hakiobservacion;
		bool hakiarmadura;
		bool hakirey;


	public:
		Seres();
		Seres(string,int,string,Frutadeldiablo*,bool,bool,bool);
		
		string getRaza();
		void setRaza(string);

		int getEdad();
		void setEdad(int);
		
		string getNombre();
		void setNombre(string);

		Frutadeldiablo* getFrutadiablo();
		void setFrutadiablo(Frutadeldiablo*);

		bool getHakiobservacion();
		void setHakiobservacion(bool);

		bool getHakiarmadura();
		void setHakiarmadura(bool);

		bool getHakirey();
		void setHakirey(bool);




};
#endif