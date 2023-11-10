#ifndef PLAYER_H
#define PLAYER_H

#include <string.h>
#include <cstdlib>
#include <string>
class Player
{
private:
	int _puntaje;
	std::string _nombre;

public:
	Player();
	Player(int puntaje, std::string nombre);
	//sets()
	void setPuntaje(int puntaje);
	void setNombre(std::string nombre);
		//gets()
	int getPuntaje();
	std::string getNombre();


};


#endif // PLAYER_H
