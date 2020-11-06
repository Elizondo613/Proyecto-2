#include "Juego.h"
#include "Cola.h"
#include <stdlib.h>
#include <time.h>

//PANTALLAS - NIVELES
//FACIL
Juego::Juego(string fa) {
	fps = 60;
	int x = rand() % (400 + 1);
	int y = rand() % (400 + 1);
	ventana4 = new RenderWindow(VideoMode(400, 400), "NIVEL FACIL");
	ventana4->setFramerateLimit(fps);

	evento4 = new Event();

	C5 = new CircleShape({ 10 });
	C5->setFillColor(Color::Blue);
	C5->setOutlineColor(Color::Blue);
	C5->setOutlineThickness(2);
	C5->setPosition(x,y);

	GameLoop();
}

//MEDIO
Juego::Juego(string me, string dio) {
	fps = 60;
	int x = rand() % (400 + 1), w = rand() % (400 + 1), a1 = rand() % (400 + 1);
	int y = rand() % (400 + 1), z = rand() % (400 + 1), a2 = rand() % (400 + 1);
	ventana5 = new RenderWindow(VideoMode(400, 400), "NIVEL MEDIO");
	ventana5->setFramerateLimit(fps);

	evento5 = new Event();

	C5 = new CircleShape({ 10 });
	C5->setFillColor(Color::Blue);
	C5->setOutlineColor(Color::Blue);
	C5->setOutlineThickness(2);
	C5->setPosition(x, y);

	R = new RectangleShape({ 20,20 });
	R->setFillColor(Color::White);
	R->setOutlineColor(Color::White);
	R->setOutlineThickness(2);
	R->setPosition(y, x);

	R2 = new RectangleShape({ 20,20 });
	R2->setFillColor(Color::White);
	R2->setOutlineColor(Color::White);
	R2->setOutlineThickness(2);
	R2->setPosition(a1, a2);

	R3 = new RectangleShape({ 80,20 });
	R3->setFillColor(Color::White);
	R3->setOutlineColor(Color::White);
	R3->setOutlineThickness(2);
	R3->setPosition(a2, a1);

	GameLoopM();
}

//DIFICIL
Juego::Juego(string di, string fi, string cil) {
	fps = 60;
	int x = rand() % (400 + 1), w = rand() % (400 + 1), a1 = rand() % (400 + 1);
	int y = rand() % (400 + 1), z = rand() % (400 + 1), a2 = rand() % (400 + 1);
	ventana6 = new RenderWindow(VideoMode(400, 400), "NIVEL DIFICIL");
	ventana6->setFramerateLimit(fps);

	evento6 = new Event();

	C5 = new CircleShape({ 10 });
	C5->setFillColor(Color::Blue);
	C5->setOutlineColor(Color::Blue);
	C5->setOutlineThickness(2);
	C5->setPosition(x, y);

	R = new RectangleShape({ 20,20 });
	R->setFillColor(Color::White);
	R->setOutlineColor(Color::White);
	R->setOutlineThickness(2);
	R->setPosition(y, x);

	R2 = new RectangleShape({ 20,20 });
	R2->setFillColor(Color::White);
	R2->setOutlineColor(Color::White);
	R2->setOutlineThickness(2);
	R2->setPosition(x, a1);

	R3 = new RectangleShape({ 80,20 });
	R3->setFillColor(Color::White);
	R3->setOutlineColor(Color::White);
	R3->setOutlineThickness(2);
	R3->setPosition(a1, a2);

	R4 = new RectangleShape({ 120,20 });
	R4->setFillColor(Color::White);
	R4->setOutlineColor(Color::White);
	R4->setOutlineThickness(2);
	R4->setPosition(a2, a1);

	GameLoopD();
}

//DINAMICO
Juego::Juego(string d, string a, string m, string co) {
	fps = 60;
	int x = rand() % (400 + 1), w = rand() % (400 + 1), a1 = rand() % (400 + 1);
	int y = rand() % (400 + 1), z = rand() % (400 + 1), a2 = rand() % (400 + 1);
	ventana7 = new RenderWindow(VideoMode(400, 400), "NIVEL DINAMICO");
	ventana7->setFramerateLimit(fps);

	evento7 = new Event();

	C5 = new CircleShape({ 10 });
	C5->setFillColor(Color::Blue);
	C5->setOutlineColor(Color::Blue);
	C5->setOutlineThickness(2);
	C5->setPosition(x, y);

	R = new RectangleShape({ 20,20 });
	R->setFillColor(Color::White);
	R->setOutlineColor(Color::White);
	R->setOutlineThickness(2);
	R->setPosition(y, x);

	R2 = new RectangleShape({ 20,20 });
	R2->setFillColor(Color::White);
	R2->setOutlineColor(Color::White);
	R2->setOutlineThickness(2);
	R2->setPosition(a1, a2);

	R3 = new RectangleShape({ 80,20 });
	R3->setFillColor(Color::White);
	R3->setOutlineColor(Color::White);
	R3->setOutlineThickness(2);
	R3->setPosition(a2, a1);

	R4 = new RectangleShape({ 120,20 });
	R4->setFillColor(Color::White);
	R4->setOutlineColor(Color::White);
	R4->setOutlineThickness(2);
	R4->setPosition(y, a2);

	GameLoopDI();
}

//GAMELOOP
void Juego::GameLoop() {
	while (ventana4->isOpen()) {
		ProcesarEventos();
		Dibujar();
	}
}

void Juego::GameLoopM() {
	while (ventana5->isOpen()) {
		ProcesarEventosM();
		DibujarM();
	}
}

void Juego::GameLoopD() {
	while (ventana6->isOpen()) {
		ProcesarEventosD();
		DibujarD();
	}
}

void Juego::GameLoopDI() {
	while (ventana7->isOpen()) {
		ProcesarEventosDI();
		DibujarDI();
	}
}

//DIBUJAR EN PANTALLA
void Juego::Dibujar() {
	ventana4->clear(Color::Black);
	ventana4->draw(*C5);
	ventana4->display();
}

void Juego::DibujarM() {
	ventana5->clear(Color::Black);
	ventana5->draw(*C5);
	ventana5->draw(*R);
	ventana5->draw(*R2);
	ventana5->draw(*R3);
	ventana5->display();
}

void Juego::DibujarD() {
	ventana6->clear(Color::Black);
	ventana6->draw(*C5);
	ventana6->draw(*R);
	ventana6->draw(*R2);
	ventana6->draw(*R3);
	ventana6->draw(*R4);
	ventana6->display();
}

void Juego::DibujarDI() {
	ventana7->clear(Color::Black);
	ventana7->draw(*C5);
	ventana7->draw(*R);
	ventana7->draw(*R2);
	ventana7->draw(*R3);
	ventana7->draw(*R4);
	ventana7->display();
}

//EVENTOS
void Juego::ProcesarEventos() {
	while (ventana4->pollEvent(*evento4)) {
		switch (evento4->type) {
		case Event::Closed:
			ventana4->close();
			break;
		}
	}
}

void Juego::ProcesarEventosM() {
	while (ventana5->pollEvent(*evento5)) {
		switch (evento5->type) {
		case Event::Closed:
			ventana5->close();
			break;
		}
	}
}

void Juego::ProcesarEventosD() {
	while (ventana6->pollEvent(*evento6)) {
		switch (evento6->type) {
		case Event::Closed:
			ventana6->close();
			break;
		}
	}
}

void Juego::ProcesarEventosDI() {
	while (ventana7->pollEvent(*evento7)) {
		switch (evento7->type) {
		case Event::Closed:
			ventana7->close();
			break;
		}
	}
}
