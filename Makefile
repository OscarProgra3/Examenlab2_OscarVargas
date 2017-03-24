Main:	Main.o Seres.o Frutadeldiablo.o Marina.o Piratas.o Revolucionarios.o Paramecia.o Zoan.o Logia.o 
	g++ Main.o Seres.o Frutadeldiablo.o Marina.o Piratas.o Revolucionarios.o Paramecia.o Zoan.o Logia.o  -o Main

Main.o:	Main.cpp Seres.h Frutadeldiablo.h Marina.h Piratas.h Revolucionarios.h Paramecia.h Zoan.h Logia.h 
	g++ -c Main.cpp

Seres.o:	Seres.cpp Seres.h Frutadeldiablo.h
	g++ -c Seres.cpp

Frutadeldiablo.o:	Frutadeldiablo.cpp Frutadeldiablo.h
	g++ -c Frutadeldiablo.cpp

Marina.o:	Marina.cpp Marina.h Seres.h
	g++ -c Marina.cpp

Piratas.o:	Piratas.cpp Piratas.h Seres.h
	g++ -c Piratas.cpp

Revolucionarios.o:	Revolucionarios.cpp Revolucionarios.h Seres.h
	g++ -c Revolucionarios.cpp

Paramecia.o:	Paramecia.cpp Paramecia.h Frutadeldiablo.h
	g++ -c Paramecia.cpp

Zoan.o:	Zoan.cpp Zoan.h Frutadeldiablo.h
	g++ -c Marina.cpp

Logia.o:	Logia.cpp Logia.h Frutadeldiablo.h
	g++ -c Logia.cpp


clean:	
	rm -f *.o Main