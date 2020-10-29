#include "Niveles.h"
#include <string>

using namespace std;

Niveles::Niveles() {
	fps = 60;
	ventana2 = new RenderWindow(VideoMode(400, 300), "SNAKE");
	ventana2->setFramerateLimit(fps);

	fuente = new Font();
	fuente->loadFromFile("Stay Girly.ttf");

	evento = new Event();

	txt_facil = new Text();
	txt_facil->setFont(*fuente);
	txt_facil->setString("FACIL");
	txt_facil->setPosition(170, 40);
	txt_facil->setCharacterSize(20);
	txt_facil->setFillColor(Color::White);

	txt_medio = new Text();
	txt_medio->setFont(*fuente);
	txt_medio->setString("MEDIO");
	txt_medio->setPosition(170, 90);
	txt_medio->setCharacterSize(20);
	txt_medio->setFillColor(Color::Green);

	txt_dificil = new Text();
	txt_dificil->setFont(*fuente);
	txt_dificil->setString("DIFICIL");
	txt_dificil->setPosition(170, 140);
	txt_dificil->setCharacterSize(20);
	txt_dificil->setFillColor(Color::Green);

	txt_dinamico = new Text();
	txt_dinamico->setFont(*fuente);
	txt_dinamico->setString("DINAMICO");
	txt_dinamico->setPosition(170, 190);
	txt_dinamico->setCharacterSize(20);
	txt_dinamico->setFillColor(Color::Green);

	txt_volver = new Text();
	txt_volver->setFont(*fuente);
	txt_volver->setString("VOLVER");
	txt_volver->setPosition(170, 240);
	txt_volver->setCharacterSize(20);
	txt_volver->setFillColor(Color::Green);

	C2 = new CircleShape({ 12 });
	C2->setFillColor(Color::Transparent);
	C2->setOutlineColor(Color::Transparent);
	C2->setOutlineThickness(2);
	C2->setPosition(170, 40);

	GameLoop();

}

void Niveles::GameLoop() {
	while (ventana2->isOpen()) {
		ProcesarEventos();
		Dibujar();
	}
}

void Niveles::Dibujar() {
	ventana2->clear(Color::Black);
	ventana2->draw(*txt_facil);
	ventana2->draw(*txt_medio);
	ventana2->draw(*txt_dificil);
	ventana2->draw(*txt_dinamico);
	ventana2->draw(*txt_volver);
	ventana2->draw(*C2);
	ventana2->display();
}

void Niveles::ProcesarEventos() {
	while (ventana2->pollEvent(*evento)) {
		switch (evento->type) {
		case Event::Closed:
			ventana2->close();
			break;

		case Event::KeyPressed:
			if (Keyboard::isKeyPressed(Keyboard::Down)) {
				if (C2->getPosition() == txt_facil->getPosition()) {
					C2->setPosition(170, 90);
					txt_facil->setFillColor(Color::Green);
					txt_medio->setFillColor(Color::White);
				}
				else {
					if (C2->getPosition() == txt_medio->getPosition()) {
						C2->setPosition(170, 140);
						txt_medio->setFillColor(Color::Green);
						txt_dificil->setFillColor(Color::White);
					}
					else {
						if (C2->getPosition() == txt_dificil->getPosition()) {
							C2->setPosition(170, 190);
							txt_dificil->setFillColor(Color::Green);
							txt_dinamico->setFillColor(Color::White);
						}
						else {
							if (C2->getPosition() == txt_dinamico->getPosition()) {
								C2->setPosition(170, 240);
								txt_dinamico->setFillColor(Color::Green);
								txt_volver->setFillColor(Color::White);
							}
							else {
								if (C2->getPosition() == txt_volver->getPosition()) {
									C2->setPosition(170, 40);
									txt_volver->setFillColor(Color::Green);
									txt_facil->setFillColor(Color::White);
								}
							}
						}
					}
				}
			}
			else {
				if (Keyboard::isKeyPressed(Keyboard::Up)) {
					if (C2->getPosition() == txt_facil->getPosition()) {
						C2->setPosition(170, 240);
						txt_facil->setFillColor(Color::Green);
						txt_volver->setFillColor(Color::White);
					}
					else {
						if (C2->getPosition() == txt_dinamico->getPosition()) {
							C2->setPosition(170, 140);
							txt_dinamico->setFillColor(Color::Green);
							txt_dificil->setFillColor(Color::White);
						}
						else {
							if (C2->getPosition() == txt_dificil->getPosition()) {
								C2->setPosition(170, 90);
								txt_dificil->setFillColor(Color::Green);
								txt_medio->setFillColor(Color::White);
							}
							else {
								if (C2->getPosition() == txt_medio->getPosition()) {
									C2->setPosition(170, 40);
									txt_medio->setFillColor(Color::Green);
									txt_facil->setFillColor(Color::White);
								}
								else {
									if (C2->getPosition() == txt_volver->getPosition()) {
										C2->setPosition(170, 190);
										txt_volver->setFillColor(Color::Green);
										txt_dinamico->setFillColor(Color::White);
									}
								}
							}
						}
					}
				}
				else {
					if (Keyboard::isKeyPressed(Keyboard::Enter)) {
						if (C2->getPosition() == txt_volver->getPosition()) {
							ventana2->close();
						}
					}
				}
			}

			break;

		
		}
	}
}
