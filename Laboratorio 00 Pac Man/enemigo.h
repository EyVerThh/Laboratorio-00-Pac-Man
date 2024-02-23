#pragma once
#include <iostream>
#include <string>
using namespace std;
class enemigo
{
private:
	int posicx;
	int posicy;
	int velocidad;
	int tipoenemigo;
	int tipoataque;
	int color;
	void moverse(int posicx, int posicy);
	void atacar(int tipoataque, int posicy)
public:
	string nombre;

	//el enemigo con posicion x, y velocidad y tipos
};

