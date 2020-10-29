#include "Marcadores.h"
#include <string>

using namespace std;

Marcadores::Marcadores() {
	fps = 60;
	ventana3 = new RenderWindow(VideoMode(400, 300), "Marcadores");
	ventana3->setFramerateLimit(fps);

	fuente = new Font();
	fuente->loadFromFile("Stay Girly.ttf");

	evento = new Event();

	txt_marcador = new Text();
	txt_marcador->setFont(*fuente);
	txt_marcador->setString("MARCADORES:");
	txt_marcador->setPosition(140, 40);
	txt_marcador->setCharacterSize(20);
	txt_marcador->setFillColor(Color::Green);

	txt_volver = new Text();
	txt_volver->setFont(*fuente);
	txt_volver->setString("VOLVER");
	txt_volver->setPosition(170, 240);
	txt_volver->setCharacterSize(20);
	txt_volver->setFillColor(Color::White);

	C3 = new CircleShape({ 12 });
	C3->setFillColor(Color::Transparent);
	C3->setOutlineColor(Color::Transparent);
	C3->setOutlineThickness(2);
	C3->setPosition(170, 240);

	GameLoop();

}

void Marcadores::GameLoop() {
	while (ventana3->isOpen()) {
		ProcesarEventos();
		Dibujar();
	}
}

void Marcadores::Dibujar() {
	ventana3->clear(Color::Black);
	ventana3->draw(*txt_marcador);
	ventana3->draw(*txt_volver);
	ventana3->draw(*C3);
	ventana3->display();
}

void Marcadores::ProcesarEventos() {
	while (ventana3->pollEvent(*evento)) {
		switch (evento->type) {
		case Event::Closed:
			ventana3->close();
			break;

		case Event::KeyPressed:
			if (Keyboard::isKeyPressed(Keyboard::Enter)) {
				if (C3->getPosition() == txt_volver->getPosition()) {
					ventana3->close();
				}
			}
		}
	}
}