#include "Perder.h"

Perder::Perder() {
	fps = 60;
	ventanaPerder = new RenderWindow(VideoMode(150, 150), "Marcadores");
	ventanaPerder->setFramerateLimit(fps);

	fuente = new Font();
	fuente->loadFromFile("Stay Girly.ttf");

	evento = new Event();

	txt_perdiste = new Text();
	txt_perdiste->setFont(*fuente);
	txt_perdiste->setString("BUEN INTENTO!");
	txt_perdiste->setPosition(20, 50);
	txt_perdiste->setCharacterSize(20);
	txt_perdiste->setFillColor(Color::Green);

	txt_salir = new Text();
	txt_salir->setFont(*fuente);
	txt_salir->setString("SALIR");
	txt_salir->setPosition(45, 80);
	txt_salir->setCharacterSize(20);
	txt_salir->setFillColor(Color::White);

	C = new CircleShape({ 12 });
	C->setFillColor(Color::Transparent);
	C->setOutlineColor(Color::Transparent);
	C->setOutlineThickness(2);
	C->setPosition(45, 80);

	GameLoop();

}

void Perder::GameLoop() {
	while (ventanaPerder->isOpen()) {
		ProcesarEventos();
		Dibujar();
	}
}

void Perder::Dibujar() {
	ventanaPerder->clear(Color::Black);
	ventanaPerder->draw(*txt_perdiste);
	ventanaPerder->draw(*txt_salir);
	ventanaPerder->draw(*C);
	ventanaPerder->display();
}

void Perder::ProcesarEventos() {
	while (ventanaPerder->pollEvent(*evento)) {
		switch (evento->type) {
		case Event::Closed:
			ventanaPerder->close();
			break;

		case Event::KeyPressed:
			if (Keyboard::isKeyPressed(Keyboard::Enter)) {
				if (C->getPosition() == txt_salir->getPosition()) {
					ventanaPerder->close();
				}
			}
		}
	}
}