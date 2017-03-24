#include <string>

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
		Seres(string,int,string,Frutadiablo*,bool,bool,bool);
		~Seres();
		
		string getRaza();
		void setRaza(string);

		int getRaza();
		void setRaza(int);
		
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