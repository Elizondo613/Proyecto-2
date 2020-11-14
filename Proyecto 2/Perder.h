#pragma once
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;
using namespace sf;

class Perder {
public:
	Perder();
	void GameLoop();
	void Dibujar();
	void ProcesarEventos();

private:
	RenderWindow* ventanaPerder;
	int fps;
	Font* fuente;
	Text* txt_salir, * txt_perdiste;
	Event* evento;
	CircleShape* C;
};