#pragma once
#include "SFML/Graphics.hpp"
#include <string>

using namespace std;
using namespace sf;

class Niveles {
public:
	Niveles();
	void GameLoop();
	void Dibujar();
	void ProcesarEventos();

private:
	RenderWindow* ventana2;
	int fps;
	Font* fuente;
	Text* txt_facil, * txt_medio, * txt_dificil, * txt_dinamico;
	Event* evento;
	CircleShape* C2;
};

