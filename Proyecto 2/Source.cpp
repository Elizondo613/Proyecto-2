#include "SFML/Graphics.hpp"
#include <iostream>
#include "Menu.h"
#include "Niveles.h"
#include <time.h>

using namespace std;

using namespace sf;

int main() {
	srand(time(NULL));
	//INICIALIZA VENTANA PRINCIPAL
	Menu* MenuInicial;
	//MUESTRA LA VENTANA DEL MENU PRINCIPAL
	MenuInicial = new Menu();

	return 0;
}