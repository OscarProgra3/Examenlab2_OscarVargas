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
void listarFrutas(vector <Frutadeldiablo*> listaFrutasT);

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
				cout<<endl<<"¿A quien desea agregar?\n1.-Fruta del diablo\n2.-Seres\n3.-Salir\nIngrese su opcion: ";
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

						if (opcfruta==1)//Paramecia
						{
							string descrip;
							cout<<endl<<"Ingrese la descripcion de paramecia: ";
							cin>>descrip;

							listafrutasdiablo.push_back(new Paramecia(nombrefruta,descrip));
							cout<<endl<<"Fruta ingresada exitosamente!!!!!"<<endl;
							opcfruta=4;
						}//fin paramecia
						if (opcfruta==2)//Zoan
						{
							string tipoparamecia;
							int opcparamecia=9;
							while(opcparamecia!=4)
							{
								cout<<endl<<"Tipo de Zoan\n1.-Normal\n2.-Prehistorica\n3.-Legendaria\n4.-Salir\nIngrese el tipo: ";
								cin>>opcparamecia;
													
								if (opcparamecia==1)
								{
									tipoparamecia="Normal";	
								}
								if (opcparamecia==2)
								{
									tipoparamecia=="Prehistoria";
								}
								if (opcparamecia==3)
								{
									tipoparamecia=="Legendaria";
								}
							}

							string animal;
							cout<<endl<<"Ingrese el tipo de animal: ";
							cin>>animal;

							listafrutasdiablo.push_back(new Zoan(nombrefruta,tipoparamecia,animal));
							cout<<endl<<"Fruta ingresada exitosamente!!!!!"<<endl;
							opcfruta=4;
						}//fin Zoan
						if (opcfruta==3)//Logia
						{
							string elemento;
							cout<<endl<<"Ingrese el lemento de Logia: ";
							cin>>elemento;

							listafrutasdiablo.push_back(new Logia(nombrefruta,elemento));
							cout<<endl<<"Fruta ingresada exitosamente!!!!!"<<endl;
							opcfruta=4;
						}//fin Logia
					}

				}//fin de agregarfruta

				if (opcagregar==2)//agregando seres
				{
					cout<<endl<<"--------------Agregando Seres-----------------"<<endl;
					string raza;
					cout<<endl<<"Ingrese la raza del ser: ";
					cin>>raza;
					string nombre;
					cout<<endl<<"Ingrese el nombre del ser: ";
					cin>>nombre;
					int edad;
					cout<<endl<<"Ingrese edad del ser: ";
					cin>>edad;
					
					listarFrutas(listafrutasdiablo);
					int frutaescogida;
					cout<<endl<<"¿numero de fruta a agregar?"<<endl;
					cin>>frutaescogida;
					listafrutasdiablo.erase(listafrutasdiablo.begin() + frutaescogida);

					bool hakiobservacion=false;
					int validacion1=0;
					while(validacion1!=1)
					{
						cout<<endl<<"¿Tiene haki de observacion?(S/N): ";
						if (hakiobservacion=='S' || hakiobservacion=='s')
						{
							hakiobservacion=true;
							validacion1=1;
						}
					}


					bool hakiarmadura=false;
					int validacion2=0;
					while(validacion2!=1)
					{
						cout<<endl<<"¿Tiene haki dearmadura?(S/N): ";
						if (hakiarmadura=='S' || hakiarmadura=='s')
						{
							hakiarmadura=true;
							validacion2=1;
						}
					}


					bool hakirey=false;
					int validacion3=0;
					while(validacion3!=1)
					{
						cout<<endl<<"¿Tiene haki de observacion?(S/N): ";
						if (hakirey=='S' || hakirey=='s')
						{
							hakiobservacion=true;
							validacion3=1;
						}
					}


					int opcser=9;
					while(opcser!=4)
					{

						cout<<endl<<"¿Que tipo de fruta desea?\n1.-Paramecia\n2.-Zoan\n3.-Logia\n4.-Salir\nIngrese su opcion: ";
						cin>>opcser;

						if (opcser==1)
						{
							/* code */
						}
					}

				}//fin de agregar seres
			}//fin agregar 
			


		}

		
	}

	return 0;
}

void listarFrutas(vector <Frutadeldiablo*> listaFrutasT)
{
	cout<<endl<<"----------LISTA DE FRUTAS DEL DIABLO---------------------";
	for (int i = 0; i < listaFrutasT.size(); ++i)
	{
		cout << endl<<"        FRUTA numero: " << (i) << endl;
		cout << endl<<"Nombre: "<<listaFrutasT.at(i)->getNombre()<<endl;
		cout << endl<<"Tipo de fruta: "<<listaFrutasT.at(i)->getTipo()<<endl;
			
		cout << "-------------------------------------------------------" << endl;
	}
}