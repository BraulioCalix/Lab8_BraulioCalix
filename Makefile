Make: Main.o Pieza.o Alfil.o Torre.o Caballo.o Reina.o Rey.o Peon.o
	g++ Main.o Pieza.o Alfil.o Torre.o Caballo.o Reina.o Rey.o Peon.o -o Make
Main.o: Main.cpp Pieza.h Alfil.h Torre.h Caballo.h Reina.h Rey.h Peon.h
	g++ -c Main.cpp
Pieza.o: Pieza.h Pieza.cpp
	g++ -c Pieza.cpp
Alfil.o: Alfil.h Alfil.cpp
	g++ -c Alfil.cpp
Torre.o: Torre.h Torre.cpp
	g++ -c Torre.cpp
Caballo.o: Caballo.h Caballo.cpp
	g++ -c Caballo.cpp
Reina.o: Reina.h Reina.cpp
	g++ -c Reina.cpp
Rey.o: Rey.h Rey.cpp
	g++ -c Rey.cpp
Peon.o: Peon.h Peon.cpp
	g++ -c Peon.cpp
	