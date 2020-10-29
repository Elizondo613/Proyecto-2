#include "Menu.h"
#include "Niveles.h"
#include "Marcadores.h"
#include <string>

using namespace std;

Menu::Menu() {
	fps = 60;
	ventana1 = new RenderWindow(VideoMode(300, 200), "SNAKE");
	ventana1->setFramerateLimit(fps);

	fuente = new Font();
	fuente->loadFromFile("Stay Girly.ttf");

	evento = new Event();

	txt_jugar = new Text();
	txt_jugar->setFont(*fuente);
	txt_jugar->setString("JUGAR");
	txt_jugar->setPosition(100, 40);
	txt_jugar->setCharacterSize(20);
	txt_jugar->setFillColor(Color::White);

	txt_marcador = new Text();
	txt_marcador->setFont(*fuente);
	txt_marcador->setString("MARCADORES");
	txt_marcador->setPosition(100, 90);
	txt_marcador->setCharacterSize(20);
	txt_marcador->setFillColor(Color::Green);

	txt_salir = new Text();
	txt_salir->setFont(*fuente);
	txt_salir->setString("SALIR");
	txt_salir->setPosition(100, 140);
	txt_salir->setCharacterSize(20);
	txt_salir->setFillColor(Color::Green);

	C = new CircleShape({ 12 });
	C->setFillColor(Color::Transparent);
	C->setOutlineColor(Color::Transparent);
	C->setOutlineThickness(2);
	C->setPosition(100, 40);

	GameLoop();
}

void Menu::GameLoop() {
	while (ventana1->isOpen()) {
		ProcesarEventos();
		Dibujar();
	}
}

void Menu::Dibujar() {
	ventana1->clear(Color::Black);
	ventana1->draw(*txt_jugar);
	ventana1->draw(*txt_marcador);
	ventana1->draw(*txt_salir);
	ventana1->draw(*C);
	ventana1->display();

}

void Menu::ProcesarEventos() {
	while (ventana1->pollEvent(*evento)) {
		switch (evento->type) {
		case Event::Closed:
			ventana1->close();
			exit(1);
			break;

		case Event::KeyPressed:
			if (Keyboard::isKeyPressed(Keyboard::Down)) {
				if (C->getPosition() == txt_jugar->getPosition()) {
					C->setPosition(100,90);
					txt_jugar->setFillColor(Color::Green);
					txt_marcador->setFillColor(Color::White);
				}
				else {
					if (C->getPosition() == txt_marcador->getPosition()) {
						C->setPosition(100, 140);
						txt_salir->setFillColor(Color::Red);
						txt_marcador->setFillColor(Color::Green);
					}
					else {
						if (C->getPosition() == txt_salir->getPosition()) {
							C->setPosition(100, 40);
							txt_salir->setFillColor(Color::Green);
							txt_jugar->setFillColor(Color::White);
						}
					}
				}
			}
			else {
				if (Keyboard::isKeyPressed(Keyboard::Up)) {
					if (C->getPosition() == txt_jugar->getPosition()) {
						C->setPosition(100, 140);
						txt_jugar->setFillColor(Color::Green);
						txt_salir->setFillColor(Color::Red);
					}
					else {
						if (C->getPosition() == txt_salir->getPosition()) {
							C->setPosition(100, 90);
							txt_salir->setFillColor(Color::Green);
							txt_marcador->setFillColor(Color::White);
						}
						else {
							if (C->getPosition() == txt_marcador->getPosition()) {
								C->setPosition(100, 40);
								txt_marcador->setFillColor(Color::Green);
								txt_jugar->setFillColor(Color::White);
							}
						}
					}
				}
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter)) {
				if (C->getPosition() == txt_jugar->getPosition()) {
					Niveles* MenuNiveles;
					MenuNiveles = new Niveles();
				}
				else {
					if (C->getPosition() == txt_salir->getPosition()) {
						ventana1->close();
						exit(1);
					}
					else {
						if (C->getPosition() == txt_marcador->getPosition()) {
							Marcadores* VentanaMarcador;
							VentanaMarcador = new Marcadores();
						}
					}
				}
			}
			break;
		}
	}
}