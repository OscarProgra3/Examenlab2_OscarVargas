#include <vector>
#include <string>
#include <iostream>
#include <fstream>

#include "Seres.h"
#include "Frutadeldiablo.h"
#include "Marina.h"
#include "Piratas.h"
#include "Revolucionarios.h"
#include "Paramecia.h"
#include "Zoan.h"
#include "Logia.h"

using namespace std;

int main()
{

	vector<Seres*> listaseres;
	vector<Frutadeldiablo*> listafrutasdiablo;

	int resp=6;
	while(resp!=2)
	{
		cout<<endl<<"-----------------------------"<<endl;
		cout<<"Bienvenido \n ¿Que es lo que desea hacer? \n1.-Agregar\n2.-Salir\nElija su opcion: ";
		cin>>resp;

		if (resp==1)
		{
			int opcagregar=4;
			while(opcagregar!=3)
			{
				cout<<"¿A quien desea agregar?\n1.-Fruta del diablo\n2.-Seres\n3.-Salir\nIngrese su opcion: ";
				cin>>opcagregar;
				if (opcagregar==1)//agregando frutas
				{
					string nombrefruta;
					cout<<endl<<"Ingrese el nombre de la fruta: ";
					cin>>nombrefruta;

					int opcfruta=9;
					while(opcfruta!=4)
					{
						cout<<endl<<"¿Que tipo de fruta desea?\n1.-Paramecia\n2.-Zoan\n3.-Logia\n4.-Salir\nIngrese su opcion: ";
						cin>>opcfruta;

						if (opcfruta==1)
						{
							string descrip;
							cout<<endl<<"I"
						}

					}
				}//fin de agregar fruta
			}	
		}

		
	}

	return 0;
}