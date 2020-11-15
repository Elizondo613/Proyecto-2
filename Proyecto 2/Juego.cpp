#include "Juego.h"
#include "Perder.h"
#include <stdlib.h>
#include <time.h>

//PANTALLAS - NIVELES
//FACIL
Juego::Juego(string fa) {
	fps = 60;
	ventana4 = new RenderWindow(VideoMode(400, 400), "NIVEL FACIL");
	ventana4->setFramerateLimit(fps);

	evento4 = new Event();

	C5 = new CircleShape({ 10 });
	C5->setFillColor(Color::Blue);
	C5->setOutlineColor(Color::Blue);
	C5->setOutlineThickness(2);
	C5->setPosition(50,100);

	Manzana = new CircleShape({ 8 });
	Manzana->setFillColor(Color::Red);
	Manzana->setOutlineColor(Color::Red);
	Manzana->setOutlineThickness(2);
	Manzana->setPosition(90, 260);
	
	Fresa = new CircleShape({ 8 });
	Fresa->setFillColor(Color::Magenta);
	Fresa->setOutlineColor(Color::Magenta);
	Fresa->setOutlineThickness(2);
	Fresa->setPosition(400, 400);

	Banano = new RectangleShape({ 20,25 });
	Banano->setFillColor(Color::Yellow);
	Banano->setOutlineColor(Color::Yellow);
	Banano->setOutlineThickness(2);
	Banano->setPosition(400, 400);

	Pera = new CircleShape({ 8 });
	Pera->setFillColor(Color::Green);
	Pera->setOutlineColor(Color::Green);
	Pera->setOutlineThickness(2);
	Pera->setPosition(400, 400);

	Piña = new RectangleShape({ 20, 20 });
	Piña->setFillColor(Color::Yellow);
	Piña->setOutlineColor(Color::Yellow);
	Piña->setOutlineThickness(2);
	Piña->setPosition(400, 400);
	
	GameLoop();
}

//MEDIO
Juego::Juego(string me, string dio) {
	fps = 60;
	ventana5 = new RenderWindow(VideoMode(400, 400), "NIVEL MEDIO");
	ventana5->setFramerateLimit(fps);

	evento5 = new Event();

	C5 = new CircleShape({ 10 });
	C5->setFillColor(Color::Blue);
	C5->setOutlineColor(Color::Blue);
	C5->setOutlineThickness(2);
	C5->setPosition(130, 250);

	R = new RectangleShape({ 20,20 });
	R->setFillColor(Color::White);
	R->setOutlineColor(Color::White);
	R->setOutlineThickness(2);
	R->setPosition(90, 370);

	R2 = new RectangleShape({ 20,20 });
	R2->setFillColor(Color::White);
	R2->setOutlineColor(Color::White);
	R2->setOutlineThickness(2);
	R2->setPosition(230, 170);

	R3 = new RectangleShape({ 80,20 });
	R3->setFillColor(Color::White);
	R3->setOutlineColor(Color::White);
	R3->setOutlineThickness(2);
	R3->setPosition(190, 70);

	Manzana = new CircleShape({ 8 });
	Manzana->setFillColor(Color::Red);
	Manzana->setOutlineColor(Color::Red);
	Manzana->setOutlineThickness(2);
	Manzana->setPosition(267, 98);

	Fresa = new CircleShape({ 8 });
	Fresa->setFillColor(Color::Magenta);
	Fresa->setOutlineColor(Color::Magenta);
	Fresa->setOutlineThickness(2);
	Fresa->setPosition(400, 400);

	Banano = new RectangleShape({ 20,25 });
	Banano->setFillColor(Color::Yellow);
	Banano->setOutlineColor(Color::Yellow);
	Banano->setOutlineThickness(2);
	Banano->setPosition(400, 400);

	Pera = new CircleShape({ 8 });
	Pera->setFillColor(Color::Green);
	Pera->setOutlineColor(Color::Green);
	Pera->setOutlineThickness(2);
	Pera->setPosition(400, 400);

	Piña = new RectangleShape({ 20, 20 });
	Piña->setFillColor(Color::Yellow);
	Piña->setOutlineColor(Color::Yellow);
	Piña->setOutlineThickness(2);
	Piña->setPosition(400, 400);

	GameLoopM();
}

//DIFICIL
Juego::Juego(string di, string fi, string cil) {
	fps = 60;
	ventana6 = new RenderWindow(VideoMode(400, 400), "NIVEL DIFICIL");
	ventana6->setFramerateLimit(fps);

	evento6 = new Event();

	C5 = new CircleShape({ 10 });
	C5->setFillColor(Color::Blue);
	C5->setOutlineColor(Color::Blue);
	C5->setOutlineThickness(2);
	C5->setPosition(350, 90);

	R = new RectangleShape({ 20,20 });
	R->setFillColor(Color::White);
	R->setOutlineColor(Color::White);
	R->setOutlineThickness(2);
	R->setPosition(100, 327);

	R2 = new RectangleShape({ 20,20 });
	R2->setFillColor(Color::White);
	R2->setOutlineColor(Color::White);
	R2->setOutlineThickness(2);
	R2->setPosition(270, 80);

	R3 = new RectangleShape({ 80,20 });
	R3->setFillColor(Color::White);
	R3->setOutlineColor(Color::White);
	R3->setOutlineThickness(2);
	R3->setPosition(150, 200);

	R4 = new RectangleShape({ 80,20 });
	R4->setFillColor(Color::White);
	R4->setOutlineColor(Color::White);
	R4->setOutlineThickness(2);
	R4->setPosition(20, 380);

	R5 = new RectangleShape({ 120,20 });
	R5->setFillColor(Color::White);
	R5->setOutlineColor(Color::White);
	R5->setOutlineThickness(2);
	R5->setPosition(220, 380);

	Manzana = new CircleShape({ 8 });
	Manzana->setFillColor(Color::Red);
	Manzana->setOutlineColor(Color::Red);
	Manzana->setOutlineThickness(2);
	Manzana->setPosition(100, 80);

	Fresa = new CircleShape({ 8 });
	Fresa->setFillColor(Color::Magenta);
	Fresa->setOutlineColor(Color::Magenta);
	Fresa->setOutlineThickness(2);
	Fresa->setPosition(400, 400);

	Banano = new RectangleShape({ 20,25 });
	Banano->setFillColor(Color::Yellow);
	Banano->setOutlineColor(Color::Yellow);
	Banano->setOutlineThickness(2);
	Banano->setPosition(400, 400);

	Pera = new CircleShape({ 8 });
	Pera->setFillColor(Color::Green);
	Pera->setOutlineColor(Color::Green);
	Pera->setOutlineThickness(2);
	Pera->setPosition(400, 400);

	Piña = new RectangleShape({ 20, 20 });
	Piña->setFillColor(Color::Yellow);
	Piña->setOutlineColor(Color::Yellow);
	Piña->setOutlineThickness(2);
	Piña->setPosition(400, 400);

	GameLoopD();
}

//DINAMICO
Juego::Juego(string d, string a, string m, string co) {
	fps = 60;
	ventana7 = new RenderWindow(VideoMode(400, 400), "NIVEL DINAMICO");
	ventana7->setFramerateLimit(fps);

	evento7 = new Event();

	C5 = new CircleShape({ 10 });
	C5->setFillColor(Color::Blue);
	C5->setOutlineColor(Color::Blue);
	C5->setOutlineThickness(2);
	C5->setPosition(275, 290);

	R = new RectangleShape({ 20,20 });
	R->setFillColor(Color::White);
	R->setOutlineColor(Color::White);
	R->setOutlineThickness(2);
	R->setPosition(200, 350);

	R2 = new RectangleShape({ 20,20 });
	R2->setFillColor(Color::White);
	R2->setOutlineColor(Color::White);
	R2->setOutlineThickness(2);
	R2->setPosition(50, 90);

	R3 = new RectangleShape({ 80,20 });
	R3->setFillColor(Color::White);
	R3->setOutlineColor(Color::White);
	R3->setOutlineThickness(2);
	R3->setPosition(70, 280);

	R4 = new RectangleShape({ 80,20 });
	R4->setFillColor(Color::White);
	R4->setOutlineColor(Color::White);
	R4->setOutlineThickness(2);
	R4->setPosition(340, 80);

	R5 = new RectangleShape({ 120,20 });
	R5->setFillColor(Color::White);
	R5->setOutlineColor(Color::White);
	R5->setOutlineThickness(2);
	R5->setPosition(200, 200);

	Manzana = new CircleShape({ 8 });
	Manzana->setFillColor(Color::Red);
	Manzana->setOutlineColor(Color::Red);
	Manzana->setOutlineThickness(2);
	Manzana->setPosition(100, 330);

	Fresa = new CircleShape({ 8 });
	Fresa->setFillColor(Color::Magenta);
	Fresa->setOutlineColor(Color::Magenta);
	Fresa->setOutlineThickness(2);
	Fresa->setPosition(400, 400);

	Banano = new RectangleShape({ 20,25 });
	Banano->setFillColor(Color::Yellow);
	Banano->setOutlineColor(Color::Yellow);
	Banano->setOutlineThickness(2);
	Banano->setPosition(400, 400);

	Pera = new CircleShape({ 8 });
	Pera->setFillColor(Color::Green);
	Pera->setOutlineColor(Color::Green);
	Pera->setOutlineThickness(2);
	Pera->setPosition(400, 400);

	Piña = new RectangleShape({ 20, 20 });
	Piña->setFillColor(Color::Yellow);
	Piña->setOutlineColor(Color::Yellow);
	Piña->setOutlineThickness(2);
	Piña->setPosition(400, 400);

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
	ventana4->draw(*Manzana);
	ventana4->draw(*Fresa);
	ventana4->draw(*Banano);
	ventana4->draw(*Pera);
	ventana4->draw(*Piña);
	ventana4->display();
}

void Juego::DibujarM() {
	ventana5->clear(Color::Black);
	ventana5->draw(*C5);
	ventana5->draw(*R);
	ventana5->draw(*R2);
	ventana5->draw(*R3);
	ventana5->draw(*Manzana);
	ventana5->draw(*Fresa);
	ventana5->draw(*Banano);
	ventana5->draw(*Pera);
	ventana5->draw(*Piña);
	ventana5->display();
}

void Juego::DibujarD() {
	ventana6->clear(Color::Black);
	ventana6->draw(*C5);
	ventana6->draw(*R);
	ventana6->draw(*R2);
	ventana6->draw(*R3);
	ventana6->draw(*R4);
	ventana6->draw(*R5);
	ventana6->draw(*Manzana);
	ventana6->draw(*Fresa);
	ventana6->draw(*Banano);
	ventana6->draw(*Pera);
	ventana6->draw(*Piña);
	ventana6->display();
}

void Juego::DibujarDI() {
	ventana7->clear(Color::Black);
	ventana7->draw(*C5);
	ventana7->draw(*R);
	ventana7->draw(*R2);
	ventana7->draw(*R3);
	ventana7->draw(*R4);
	ventana7->draw(*R5);
	ventana7->draw(*Manzana);
	ventana7->draw(*Fresa);
	ventana7->draw(*Banano);
	ventana7->draw(*Pera);
	ventana7->draw(*Piña);
	ventana7->display();
}

//EVENTOS
void Juego::ProcesarEventos() {
	while (ventana4->pollEvent(*evento4)) {
		switch (evento4->type) {
		//CERRAR VENTANA
		case Event::Closed:
			ventana4->close();
			break;
		//MOVIMIENTO
		case Event::KeyPressed:
				if (Keyboard::isKeyPressed(Keyboard::Up)) {
					C5->setPosition(C5->getPosition().x, C5->getPosition().y - 2);
					if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(90, 260);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(340, 60);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(280, 320);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(200, 170);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(170, 305);
						}
					}
					else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(90, 260);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(340, 60);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(280, 320);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(200, 170);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(170, 305);
						}
					}
					else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(90, 260);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(340, 60);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(280, 320);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(200, 170);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(170, 305);
						}
					}
					else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(90, 260);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(340, 60);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(280, 320);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(200, 170);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(170, 305);
						}
					}
					else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(90, 260);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(340, 60);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(280, 320);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(200, 170);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(170, 305);
						}
					}
				}
				else {
					if (Keyboard::isKeyPressed(Keyboard::Down)) {
						C5->setPosition(C5->getPosition().x, C5->getPosition().y + 2);
						if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(90, 260);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(340, 60);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(280, 320);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(200, 170);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(170, 305);
							}
						}
						else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(90, 260);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(340, 60);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(280, 320);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(200, 170);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(170, 305);
							}
						}
						else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(90, 260);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(340, 60);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(280, 320);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(200, 170);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(170, 305);
							}
						}
						else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(90, 260);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(340, 60);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(280, 320);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(200, 170);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(170, 305);
							}
						}
						else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(90, 260);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(340, 60);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(280, 320);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(200, 170);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(170, 305);
							}
						}
					}
					else {
						if (Keyboard::isKeyPressed(Keyboard::Left)) {
							C5->setPosition(C5->getPosition().x - 2, C5->getPosition().y);
							if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(90, 260);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(340, 60);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(280, 320);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(200, 170);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(170, 305);
								}
							}
							else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(90, 260);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(340, 60);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(280, 320);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(200, 170);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(170, 305);
								}
							}
							else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(90, 260);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(340, 60);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(280, 320);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(200, 170);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(170, 305);
								}
							}
							else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(90, 260);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(340, 60);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(280, 320);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(200, 170);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(170, 305);
								}
							}
							else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(90, 260);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(340, 60);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(280, 320);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(200, 170);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(170, 305);
								}
							}
						}
						else {
							if (Keyboard::isKeyPressed(Keyboard::Right)) {
								C5->setPosition(C5->getPosition().x + 2, C5->getPosition().y);
								if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
									Manzana->setPosition(400, 400);
									Fresa->setPosition(400, 400);
									Banano->setPosition(400, 400);
									Pera->setPosition(400, 400);
									Piña->setPosition(400, 400);
									cont + 5;

									int x = rand() % (100 + 1);
									if (x > 1 && x < 40) {
										Manzana->setPosition(90, 260);
									}
									else if (x > 41 && x < 65) {
										Fresa->setPosition(340, 60);
									}
									else if (x > 66 && x < 85) {
										Banano->setPosition(280, 320);
									}
									else if (x > 86 && x < 95) {
										Pera->setPosition(200, 170);
									}
									else if (x > 96 && x < 100) {
										Piña->setPosition(170, 305);
									}
								}
								else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
									Manzana->setPosition(400, 400);
									Fresa->setPosition(400, 400);
									Banano->setPosition(400, 400);
									Pera->setPosition(400, 400);
									Piña->setPosition(400, 400);
									cont + 5;

									int x = rand() % (100 + 1);
									if (x > 1 && x < 40) {
										Manzana->setPosition(90, 260);
									}
									else if (x > 41 && x < 65) {
										Fresa->setPosition(340, 60);
									}
									else if (x > 66 && x < 85) {
										Banano->setPosition(280, 320);
									}
									else if (x > 86 && x < 95) {
										Pera->setPosition(200, 170);
									}
									else if (x > 96 && x < 100) {
										Piña->setPosition(170, 305);
									}
								}
								else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
									Manzana->setPosition(400, 400);
									Fresa->setPosition(400, 400);
									Banano->setPosition(400, 400);
									Pera->setPosition(400, 400);
									Piña->setPosition(400, 400);
									cont + 5;

									int x = rand() % (100 + 1);
									if (x > 1 && x < 40) {
										Manzana->setPosition(90, 260);
									}
									else if (x > 41 && x < 65) {
										Fresa->setPosition(340, 60);
									}
									else if (x > 66 && x < 85) {
										Banano->setPosition(280, 320);
									}
									else if (x > 86 && x < 95) {
										Pera->setPosition(200, 170);
									}
									else if (x > 96 && x < 100) {
										Piña->setPosition(170, 305);
									}
								}
								else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
									Manzana->setPosition(400, 400);
									Fresa->setPosition(400, 400);
									Banano->setPosition(400, 400);
									Pera->setPosition(400, 400);
									Piña->setPosition(400, 400);
									cont + 5;

									int x = rand() % (100 + 1);
									if (x > 1 && x < 40) {
										Manzana->setPosition(90, 260);
									}
									else if (x > 41 && x < 65) {
										Fresa->setPosition(340, 60);
									}
									else if (x > 66 && x < 85) {
										Banano->setPosition(280, 320);
									}
									else if (x > 86 && x < 95) {
										Pera->setPosition(200, 170);
									}
									else if (x > 96 && x < 100) {
										Piña->setPosition(170, 305);
									}
								}
								else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
									Manzana->setPosition(400, 400);
									Fresa->setPosition(400, 400);
									Banano->setPosition(400, 400);
									Pera->setPosition(400, 400);
									Piña->setPosition(400, 400);
									cont + 5;

									int x = rand() % (100 + 1);
									if (x > 1 && x < 40) {
										Manzana->setPosition(90, 260);
									}
									else if (x > 41 && x < 65) {
										Fresa->setPosition(340, 60);
									}
									else if (x > 66 && x < 85) {
										Banano->setPosition(280, 320);
									}
									else if (x > 86 && x < 95) {
										Pera->setPosition(200, 170);
									}
									else if (x > 96 && x < 100) {
										Piña->setPosition(170, 305);
									}
								}
							}
						}
					}
				}
			break;
		}
	}
}

void Juego::ProcesarEventosM() {
	while (ventana5->pollEvent(*evento5)) {
		switch (evento5->type) {
		//CERRAR VENTANA
		case Event::Closed:
			ventana5->close();
			break;
		//MOVIMIENTO
		case Event::KeyPressed:
			if (Keyboard::isKeyPressed(Keyboard::Up)) {
				C5->setPosition(C5->getPosition().x, C5->getPosition().y - 3);
				if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(267, 98);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(340, 121);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(246, 320);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(175, 40);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(70, 305);
					}
					Perder* PantallaPerder;
					PantallaPerder->Puntaje(cont);
				}
				else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(267, 98);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(340, 121);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(246, 320);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(175, 40);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(70, 305);
					}
				}
				else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(267, 98);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(340, 121);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(246, 320);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(175, 40);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(70, 305);
					}
				}
				else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(267, 98);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(340, 121);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(246, 320);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(175, 40);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(70, 305);
					}
				}
				else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(267, 98);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(340, 121);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(246, 320);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(175, 40);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(70, 305);
					}
				}
				if (C5->getGlobalBounds().intersects(R->getGlobalBounds()) || C5->getGlobalBounds().intersects(R2->getGlobalBounds()) || C5->getGlobalBounds().intersects(R3->getGlobalBounds())) {
					Perder* PantallaPerder;
					PantallaPerder = new Perder();
					PantallaPerder->Puntaje(cont);
				}
			}
			else {
				if (Keyboard::isKeyPressed(Keyboard::Down)) {
					C5->setPosition(C5->getPosition().x, C5->getPosition().y + 3);
					if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(267, 98);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(340, 121);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(246, 320);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(175, 40);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(70, 305);
						}
					}
					else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(267, 98);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(340, 121);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(246, 320);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(175, 40);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(70, 305);
						}
					}
					else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(267, 98);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(340, 121);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(246, 320);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(175, 40);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(70, 305);
						}
					}
					else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(267, 98);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(340, 121);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(246, 320);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(175, 40);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(70, 305);
						}
					}
					else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(267, 98);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(340, 121);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(246, 320);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(175, 40);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(70, 305);
						}
					}
					if (C5->getGlobalBounds().intersects(R->getGlobalBounds()) || C5->getGlobalBounds().intersects(R2->getGlobalBounds()) || C5->getGlobalBounds().intersects(R3->getGlobalBounds())) {
						Perder* PantallaPerder;
						PantallaPerder = new Perder();
					}
				}
				else {
					if (Keyboard::isKeyPressed(Keyboard::Left)) {
						C5->setPosition(C5->getPosition().x - 3, C5->getPosition().y);
						if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(267, 98);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(340, 121);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(246, 320);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(175, 40);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(70, 305);
							}
						}
						else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(267, 98);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(340, 121);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(246, 320);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(175, 40);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(70, 305);
							}
						}
						else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(267, 98);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(340, 121);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(246, 320);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(175, 40);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(70, 305);
							}
						}
						else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(267, 98);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(340, 121);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(246, 320);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(175, 40);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(70, 305);
							}
						}
						else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(267, 98);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(340, 121);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(246, 320);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(175, 40);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(70, 305);
							}
						}
						if (C5->getGlobalBounds().intersects(R->getGlobalBounds()) || C5->getGlobalBounds().intersects(R2->getGlobalBounds()) || C5->getGlobalBounds().intersects(R3->getGlobalBounds())) {
							Perder* PantallaPerder;
							PantallaPerder = new Perder();
						}
					}
					else {
						if (Keyboard::isKeyPressed(Keyboard::Right)) {
							C5->setPosition(C5->getPosition().x + 3, C5->getPosition().y);
							if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(267, 98);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(340, 121);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(246, 320);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(175, 40);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(70, 305);
								}
							}
							else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(267, 98);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(340, 121);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(246, 320);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(175, 40);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(70, 305);
								}
							}
							else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(267, 98);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(340, 121);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(246, 320);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(175, 40);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(70, 305);
								}
							}
							else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(267, 98);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(340, 121);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(246, 320);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(175, 40);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(70, 305);
								}
							}
							else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(267, 98);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(340, 121);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(246, 320);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(175, 40);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(70, 305);
								}
							}
							if (C5->getGlobalBounds().intersects(R->getGlobalBounds()) || C5->getGlobalBounds().intersects(R2->getGlobalBounds()) || C5->getGlobalBounds().intersects(R3->getGlobalBounds())) {
								Perder* PantallaPerder;
								PantallaPerder = new Perder();
							}
						}
					}
				}
			}
			break;
		}
	}
}

void Juego::ProcesarEventosD() {
	while (ventana6->pollEvent(*evento6)) {
		switch (evento6->type) {
		//CERRAR VENTANA
		case Event::Closed:
			ventana6->close();
			break;

		//MOVIMIENTO
		case Event::KeyPressed:
			if (Keyboard::isKeyPressed(Keyboard::Up)) {
				C5->setPosition(C5->getPosition().x, C5->getPosition().y - 4);
				if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(100, 80);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(310, 121);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(270, 300);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(175, 20);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(70, 150);
					}
				}
				else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(100, 80);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(310, 121);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(270, 300);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(175, 20);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(70, 150);
					}
				}
				else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(100, 80);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(310, 121);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(270, 300);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(175, 20);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(70, 150);
					}
				}
				else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(100, 80);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(310, 121);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(270, 300);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(175, 20);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(70, 150);
					}
				}
				else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(100, 80);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(310, 121);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(270, 300);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(175, 20);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(70, 150);
					}
				}
				if (C5->getGlobalBounds().intersects(R->getGlobalBounds()) || C5->getGlobalBounds().intersects(R2->getGlobalBounds()) || C5->getGlobalBounds().intersects(R3->getGlobalBounds()) || C5->getGlobalBounds().intersects(R4->getGlobalBounds())) {
					Perder* PantallaPerder;
					PantallaPerder = new Perder();
				}
			}
			else {
				if (Keyboard::isKeyPressed(Keyboard::Down)) {
					C5->setPosition(C5->getPosition().x, C5->getPosition().y + 4);
					if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(100, 80);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(310, 121);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(270, 300);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(175, 20);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(70, 150);
						}
					}
					else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(100, 80);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(310, 121);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(270, 300);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(175, 20);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(70, 150);
						}
					}
					else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(100, 80);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(310, 121);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(270, 300);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(175, 20);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(70, 150);
						}
					}
					else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(100, 80);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(310, 121);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(270, 300);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(175, 20);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(70, 150);
						}
					}
					else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(100, 80);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(310, 121);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(270, 300);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(175, 20);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(70, 150);
						}
					}
					if (C5->getGlobalBounds().intersects(R->getGlobalBounds()) || C5->getGlobalBounds().intersects(R2->getGlobalBounds()) || C5->getGlobalBounds().intersects(R3->getGlobalBounds()) || C5->getGlobalBounds().intersects(R4->getGlobalBounds())) {
						Perder* PantallaPerder;
						PantallaPerder = new Perder();
					}
				}
				else {
					if (Keyboard::isKeyPressed(Keyboard::Left)) {
						C5->setPosition(C5->getPosition().x - 4, C5->getPosition().y);
						if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(100, 80);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(310, 121);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(270, 300);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(175, 20);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(70, 150);
							}
						}
						else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(100, 80);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(310, 121);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(270, 300);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(175, 20);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(70, 150);
							}
						}
						else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(100, 80);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(310, 121);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(270, 300);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(175, 20);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(70, 150);
							}
						}
						else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(100, 80);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(310, 121);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(270, 300);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(175, 20);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(70, 150);
							}
						}
						else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(100, 80);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(310, 121);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(270, 300);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(175, 20);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(70, 150);
							}
						}
						if (C5->getGlobalBounds().intersects(R->getGlobalBounds()) || C5->getGlobalBounds().intersects(R2->getGlobalBounds()) || C5->getGlobalBounds().intersects(R3->getGlobalBounds()) || C5->getGlobalBounds().intersects(R4->getGlobalBounds())) {
							Perder* PantallaPerder;
							PantallaPerder = new Perder();
						}
					}
					else {
						if (Keyboard::isKeyPressed(Keyboard::Right)) {
							C5->setPosition(C5->getPosition().x + 4, C5->getPosition().y);
							if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(100, 80);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(310, 121);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(270, 300);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(175, 20);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(70, 150);
								}
							}
							else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(100, 80);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(310, 121);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(270, 300);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(175, 20);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(70, 150);
								}
							}
							else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(100, 80);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(310, 121);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(270, 300);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(175, 20);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(70, 150);
								}
							}
							else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(100, 80);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(310, 121);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(270, 300);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(175, 20);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(70, 150);
								}
							}
							else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(100, 80);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(310, 121);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(270, 300);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(175, 20);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(70, 150);
								}
							}
							if (C5->getGlobalBounds().intersects(R->getGlobalBounds()) || C5->getGlobalBounds().intersects(R2->getGlobalBounds()) || C5->getGlobalBounds().intersects(R3->getGlobalBounds()) || C5->getGlobalBounds().intersects(R4->getGlobalBounds())) {
								Perder* PantallaPerder;
								PantallaPerder = new Perder();
							}
						}
					}
				}
			}
			break;
		}
	}
}

void Juego::ProcesarEventosDI() {
	while (ventana7->pollEvent(*evento7)) {
		switch (evento7->type) {
		//CERRAR VENTANA
		case Event::Closed:
			ventana7->close();
			break;

		//MOVIMIENTO
		case Event::KeyPressed:
			if (Keyboard::isKeyPressed(Keyboard::Up)) {
				C5->setPosition(C5->getPosition().x, C5->getPosition().y - 5);
				if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(100, 330);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(270, 170);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(280, 90);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(160, 200);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(300, 100);
					}
				}
				else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(100, 330);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(270, 170);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(280, 90);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(160, 200);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(300, 100);
					}
				}
				else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(100, 330);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(270, 170);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(280, 90);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(160, 200);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(300, 100);
					}
				}
				else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(100, 330);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(270, 170);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(280, 90);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(160, 200);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(300, 100);
					}
				}
				else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
					Manzana->setPosition(400, 400);
					Fresa->setPosition(400, 400);
					Banano->setPosition(400, 400);
					Pera->setPosition(400, 400);
					Piña->setPosition(400, 400);
					cont + 5;

					int x = rand() % (100 + 1);
					if (x > 1 && x < 40) {
						Manzana->setPosition(100, 330);
					}
					else if (x > 41 && x < 65) {
						Fresa->setPosition(270, 170);
					}
					else if (x > 66 && x < 85) {
						Banano->setPosition(280, 90);
					}
					else if (x > 86 && x < 95) {
						Pera->setPosition(160, 200);
					}
					else if (x > 96 && x < 100) {
						Piña->setPosition(300, 100);
					}
				}
				if (C5->getGlobalBounds().intersects(R->getGlobalBounds()) || C5->getGlobalBounds().intersects(R2->getGlobalBounds()) || C5->getGlobalBounds().intersects(R3->getGlobalBounds()) || C5->getGlobalBounds().intersects(R4->getGlobalBounds())) {
					Perder* PantallaPerder;
					PantallaPerder = new Perder();
				}
			}
			else {
				if (Keyboard::isKeyPressed(Keyboard::Down)) {
					C5->setPosition(C5->getPosition().x, C5->getPosition().y + 5);
					if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(100, 330);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(270, 170);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(280, 90);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(160, 200);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(300, 100);
						}
					}
					else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(100, 330);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(270, 170);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(280, 90);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(160, 200);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(300, 100);
						}
					}
					else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(100, 330);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(270, 170);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(280, 90);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(160, 200);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(300, 100);
						}
					}
					else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(100, 330);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(270, 170);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(280, 90);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(160, 200);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(300, 100);
						}
					}
					else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
						Manzana->setPosition(400, 400);
						Fresa->setPosition(400, 400);
						Banano->setPosition(400, 400);
						Pera->setPosition(400, 400);
						Piña->setPosition(400, 400);
						cont + 5;

						int x = rand() % (100 + 1);
						if (x > 1 && x < 40) {
							Manzana->setPosition(100, 330);
						}
						else if (x > 41 && x < 65) {
							Fresa->setPosition(270, 170);
						}
						else if (x > 66 && x < 85) {
							Banano->setPosition(280, 90);
						}
						else if (x > 86 && x < 95) {
							Pera->setPosition(160, 200);
						}
						else if (x > 96 && x < 100) {
							Piña->setPosition(300, 100);
						}
					}
					if (C5->getGlobalBounds().intersects(R->getGlobalBounds()) || C5->getGlobalBounds().intersects(R2->getGlobalBounds()) || C5->getGlobalBounds().intersects(R3->getGlobalBounds()) || C5->getGlobalBounds().intersects(R4->getGlobalBounds())) {
						Perder* PantallaPerder;
						PantallaPerder = new Perder();
					}
				}
				else {
					if (Keyboard::isKeyPressed(Keyboard::Left)) {
						C5->setPosition(C5->getPosition().x - 5, C5->getPosition().y);
						if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(100, 330);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(270, 170);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(280, 90);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(160, 200);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(300, 100);
							}
						}
						else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(100, 330);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(270, 170);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(280, 90);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(160, 200);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(300, 100);
							}
						}
						else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(100, 330);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(270, 170);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(280, 90);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(160, 200);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(300, 100);
							}
						}
						else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(100, 330);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(270, 170);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(280, 90);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(160, 200);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(300, 100);
							}
						}
						else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
							Manzana->setPosition(400, 400);
							Fresa->setPosition(400, 400);
							Banano->setPosition(400, 400);
							Pera->setPosition(400, 400);
							Piña->setPosition(400, 400);
							cont + 5;

							int x = rand() % (100 + 1);
							if (x > 1 && x < 40) {
								Manzana->setPosition(100, 330);
							}
							else if (x > 41 && x < 65) {
								Fresa->setPosition(270, 170);
							}
							else if (x > 66 && x < 85) {
								Banano->setPosition(280, 90);
							}
							else if (x > 86 && x < 95) {
								Pera->setPosition(160, 200);
							}
							else if (x > 96 && x < 100) {
								Piña->setPosition(300, 100);
							}
						}
						if (C5->getGlobalBounds().intersects(R->getGlobalBounds()) || C5->getGlobalBounds().intersects(R2->getGlobalBounds()) || C5->getGlobalBounds().intersects(R3->getGlobalBounds()) || C5->getGlobalBounds().intersects(R4->getGlobalBounds())) {
							Perder* PantallaPerder;
							PantallaPerder = new Perder();
						}
					}
					else {
						if (Keyboard::isKeyPressed(Keyboard::Right)) {
							C5->setPosition(C5->getPosition().x + 5, C5->getPosition().y);
							if (C5->getGlobalBounds().intersects(Manzana->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(100, 330);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(270, 170);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(280, 90);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(160, 200);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(300, 100);
								}
							}
							else if (C5->getGlobalBounds().intersects(Fresa->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(100, 330);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(270, 170);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(280, 90);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(160, 200);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(300, 100);
								}
							}
							else if (C5->getGlobalBounds().intersects(Banano->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(100, 330);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(270, 170);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(280, 90);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(160, 200);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(300, 100);
								}
							}
							else if (C5->getGlobalBounds().intersects(Pera->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(100, 330);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(270, 170);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(280, 90);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(160, 200);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(300, 100);
								}
							}
							else if (C5->getGlobalBounds().intersects(Piña->getGlobalBounds())) {
								Manzana->setPosition(400, 400);
								Fresa->setPosition(400, 400);
								Banano->setPosition(400, 400);
								Pera->setPosition(400, 400);
								Piña->setPosition(400, 400);
								cont + 5;

								int x = rand() % (100 + 1);
								if (x > 1 && x < 40) {
									Manzana->setPosition(100, 330);
								}
								else if (x > 41 && x < 65) {
									Fresa->setPosition(270, 170);
								}
								else if (x > 66 && x < 85) {
									Banano->setPosition(280, 90);
								}
								else if (x > 86 && x < 95) {
									Pera->setPosition(160, 200);
								}
								else if (x > 96 && x < 100) {
									Piña->setPosition(300, 100);
								}
							}
							if (C5->getGlobalBounds().intersects(R->getGlobalBounds()) || C5->getGlobalBounds().intersects(R2->getGlobalBounds()) || C5->getGlobalBounds().intersects(R3->getGlobalBounds()) || C5->getGlobalBounds().intersects(R4->getGlobalBounds())) {
								Perder* PantallaPerder;
								PantallaPerder = new Perder();
							}
						}
					}
				}
			}
			break;
		}
	}
}


/*int x = rand() % (100 + 1);
if (x > 1 && x < 40) {
	ventana4->draw(*Manzana);
	ventana4->display();
}
else if (x > 41 && x < 65) {
	ventana4->draw(*Fresa);
	ventana4->display();
}
else if (x > 66 && x < 85) {
	ventana4->draw(*Banano);
	ventana4->display();
}
else if (x > 86 && x < 95) {
	ventana4->draw(*Pera);
	ventana4->display();
}
else if (x > 96 && x < 100) {
	ventana4->draw(*Piña);
	ventana4->display();
}*/

/*ventana4->draw(*Manzana);
	ventana4->draw(*Fresa);
	ventana4->draw(*Banano);
	ventana4->draw(*Pera);
	ventana4->draw(*Piña);*/

//while ((C5->getPosition().x < 0 && C5->getPosition().y < 400) || (C5->getPosition().y < 0 && C5->getPosition().x != 400))