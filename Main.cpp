#include <vector>
#include <string>
#include <iostream>
#include <fstream>

#include <sstream>


#include <fstream> //PARA FICHEROS

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
void imprimirSer(Seres* elser);

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
					Frutadeldiablo* estafruta;
					int frutaescogida;
					cout<<endl<<"¿numero de fruta a agregar?"<<endl;
					cin>>frutaescogida;
					estafruta=listafrutasdiablo.at(frutaescogida);
					listafrutasdiablo.erase(listafrutasdiablo.begin() + frutaescogida);

					bool hakiobservacion=false;
					int validacion1=0;
					while(validacion1==1)
					{
						cout<<endl<<"¿Tiene haki de observacion?(S/N): ";
						if (hakiobservacion=='S' || hakiobservacion=='s')
						{
							hakiobservacion=true;
							validacion1=1;
						}
					}


					char hakiar='n';
					bool hakiarmadura=false;
					int validacion2=0;
					while(validacion2==1)
					{
						cout<<endl<<"¿Tiene haki dearmadura?(S/N): ";
						cin>>hakiar;
						if (hakiar=='S' || hakiar=='s')
						{
							hakiarmadura=true;
							validacion2=1;
						}
					}


					bool hakirey=false;
					char hakir='n';
					int validacion3=0;
					while(validacion3==1)
					{
						cout<<endl<<"¿Tiene haki de observacion?(S/N): ";
						if (hakir=='S' || hakir=='s')
						{
							hakirey=true;
							validacion3=1;
						}
					}


					int opcser=9;
					while(opcser!=4)
					{

						cout<<endl<<"¿Que tipo de ser desea?\n1.-Marina\n2.-Pirata\n3.-Revolucionario\n4.-Salir\nIngrese su opcion: ";
						cin>>opcser;

						if (opcser==1)//MARINA
						{
							string fechain;
							cout<<endl<<"Ingrese fecha de ingreso: ";
							cin>>fechain;

							string tiporango="";
							int opcrango=9;
							while(opcrango!=5)
							{
								cout<<endl<<"Tipo de Zoan\n1.-Cadete\n2.-Teniente\n3.-Vicealmirante\n4.-almirante de tropa\n5.-Salir\nIngrese el tipo: ";
								cin>>opcrango;
													
								if (opcrango==1)
								{
									tiporango="Cadete";	
									opcrango=5;
								}
								if (opcrango==2)
								{
									tiporango=="Teniente";
									opcrango=5;
								}
								if (opcrango==3)
								{
									tiporango=="Vicealmirante";
									opcrango=5;
								}
								if (opcrango==4)
								{
									tiporango=="almirante de tropa";
									opcrango=5;	
								}
							}

							listaseres.push_back(new Marina(raza,edad,nombre,estafruta,hakiobservacion,hakiarmadura,hakirey,fechain,tiporango));
							
							Seres* printser;
					
							int lol=listaseres.size();
							printser=listaseres.at(lol-1);
							imprimirSer(printser);

							opcser=4;

						}//FIN MARINA
						if (opcser==2)//PIRATAS
						{
							
							string tipoceano;
							int opcoceano=9;
							while(opcoceano!=8)
							{
								cout<<endl<<"Tipo de Zoan\n1.-East\n2.-West\n3.-South\n4.-North\n5.-blue\n6.-Grand Line\n7.-New world\n8.-Salir\nIngrese el tipo: ";
								cin>>opcoceano;
													
								if (opcoceano==1)
								{
									tipoceano="East";
									opcoceano=8;
								}
								if (opcoceano==2)
								{
									tipoceano="West";
									opcoceano=8;
								}
								if (opcoceano==3)
								{
									tipoceano="South";
									opcoceano=8;
								}
								if (opcoceano==4)
								{
									tipoceano="North";
									opcoceano=8;	
								}
								if (opcoceano==5)
								{
									tipoceano="blue";
									opcoceano=8;	
								}
								if (opcoceano==6)
								{
									tipoceano="Grand line";
									opcoceano=8;	
								}
								if (opcoceano==7)
								{
									tipoceano="New World";
									opcoceano=8;	
								}
							}

							string tripulacion;
							cout<<"ingrese tripulacion: ";
							cin>>tripulacion;
							string funcion;
							cout<<"ingrese funcion: ";
							cin>>funcion;


							listaseres.push_back(new Piratas(raza,edad,nombre,estafruta,hakiobservacion,hakiarmadura,hakirey,tipoceano,tripulacion,funcion));
							
							Seres* printser;
					
							int lol=listaseres.size();
							printser=listaseres.at(lol-1);
							imprimirSer(printser);


						}//FIN PIRATAS
						if (opcser==3)
						{
							string fechaing;
							cout<<"ingrese fechaingreso: ";
							cin>>fechaing;


							listaseres.push_back(new Revolucionarios(raza,edad,nombre,estafruta,hakiobservacion,hakiarmadura,hakirey,fechaing));
							
							Seres* printser;
					
							int lol=listaseres.size();
							printser=listaseres.at(lol-1);
							imprimirSer(printser);
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

void imprimirSer(Seres* elser)
{
	
	ofstream  salida;
	stringstream stm;
	string fichero;

	stm << "./Log_Seres/" << elser->getNombre()<< ".log";
	fichero = stm.str();
	salida.open(fichero.c_str());
	salida << "-------------SER-----------" << endl;
	salida << "---------------------------" << endl;
	salida << "Nombre: "<<elser->getNombre()<< endl;
	salida << "Raza: "<<elser->getRaza()<< endl;
	salida << "Edad"<<elser->getEdad()<< endl;
	salida << "Nombre: "<<elser->getNombre()<< endl;
	salida << "Fruta: "<<elser->getFrutadiablo()->getNombre()<< endl;
	bool hakio=elser->getHakiobservacion();
	if (hakio==true)
	{
		salida << "hakiobservacion: Si"<< endl;
	}else if (hakio==false)
	{
		salida << "hakiobservacion: No"<< endl;
	}

	bool hakia=elser->getHakiarmadura();
	if (hakia==true)
	{
		salida << "hakiarmadura: Si"<< endl;
	}else if (hakia==false)
	{
		salida << "hakiarmadura: No"<< endl;
	}
	bool hakir=elser->getHakirey();
	if (hakir==true)
	{
		salida << "hakiRey: Si"<< endl;
	}else if (hakir==false)
	{
		salida << "hakiRey: No"<< endl;
	}

	if (elser->getTiposer()=="Marina")
	{
		salida<<"tipo de ser Marina"<<endl;
	}else if (elser->getTiposer()=="Pirata")
	{
		salida<<"tipo ser Pirata"<<endl;


	}else if (elser->getTiposer()=="Revolucionrios")
	{
		salida<<"tipo ser Revolucionarios"<<endl;
	//	salida<<"Fecha de ingreso: "<<elser->(Revolucionarios)getFechaingreso()<<endl;
	}


	
	
	salida << "---------------------------" << endl;
	salida << "---------------------------" << endl;
	salida.close();
}