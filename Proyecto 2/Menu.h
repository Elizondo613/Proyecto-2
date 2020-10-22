#pragma once
#include "SFML/Graphics.hpp"
#include <string>

using namespace std;
using namespace sf;

class Menu {
public:
	Menu();
	void GameLoop();
	void Dibujar();
	void ProcesarEventos();

private:
	RenderWindow* ventana1;
	int fps;
	Font* fuente;
	Text* txt_jugar, * txt_marcador, * txt_salir;
	Event* evento;
	CircleShape* C;
};

