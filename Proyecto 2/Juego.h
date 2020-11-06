#pragma once
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;
using namespace sf;

class Juego {
public:
	Juego(string fa);
	Juego(string me, string dio);
	Juego(string di, string fi, string cil);
	Juego(string d, string a, string m, string co);

	void GameLoop();
	void GameLoopM();
	void GameLoopD();
	void GameLoopDI();

	void Dibujar();
	void DibujarM();
	void DibujarD();
	void DibujarDI();

	void ProcesarEventos();
	void ProcesarEventosM();
	void ProcesarEventosD();
	void ProcesarEventosDI();

	//int Aleatorio(int num);

private:
	string fa, me, dio, di, fi, cil, d, a, m, co;
	RenderWindow* ventana4, * ventana5, * ventana6, * ventana7;
	int fps;
	Event* evento4, * evento5, * evento6, * evento7;
	CircleShape* C5;
	RectangleShape* R, *R2, *R3, *R4;
};

