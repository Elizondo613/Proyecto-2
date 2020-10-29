#pragma once
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;
using namespace sf;

class Marcadores {
public:
	Marcadores();
	void GameLoop();
	void Dibujar();
	void ProcesarEventos();

private:
	RenderWindow* ventana3;
	int fps;
	Font* fuente;
	Text* txt_marcador, * txt_volver;
	Event* evento;
	CircleShape* C3;
};

