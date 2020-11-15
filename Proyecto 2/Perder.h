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
	int Puntaje(int puntaje);

private:
	RenderWindow* ventanaPerder;
	int fps, puntaje;
	Font* fuente;
	Text* txt_salir, * txt_perdiste, * txt_punteo;
	Event* evento;
	CircleShape* C;
};