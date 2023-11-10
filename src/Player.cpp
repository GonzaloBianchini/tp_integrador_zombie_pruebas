#include "Player.h"
#include <iostream>

Player::Player() {
		_puntaje = 0;
		_nombre[30] = 'P', 'l', 'a', 'y', 'e', 'r';
}
Player::Player(int puntaje, std::string nombre) {
	_puntaje = 0;
	_nombre = nombre;

}

void Player::setPuntaje(int puntaje) {
	_puntaje = puntaje;
}

void Player::setNombre(std::string nombre) {

	_nombre = nombre;

}
int Player::getPuntaje() {
	return _puntaje;

}
std::string Player::getNombre() {
	return _nombre;

}
